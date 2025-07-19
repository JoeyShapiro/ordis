#include <AudioToolbox/AudioToolbox.h>
#include <CoreAudio/CoreAudio.h>
#include <CoreFoundation/CoreFoundation.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

typedef struct {
    AudioStreamBasicDescription dataFormat;
    AudioQueueRef queue;
    AudioQueueBufferRef buffers[3];
    AudioFileID audioFile;
    UInt32 bufferByteSize;
    SInt64 currentPacket;
    bool recording;
    pthread_mutex_t mutex;
} AudioData;

// Real-time audio processing callback
static void HandleInputBuffer(void *userData,
                             AudioQueueRef inAQ,
                             AudioQueueBufferRef inBuffer,
                             const AudioTimeStamp *inStartTime,
                             UInt32 inNumPackets,
                             const AudioStreamPacketDescription *inPacketDesc) {
    
    AudioData *audioData = (AudioData *)userData;
    
    pthread_mutex_lock(&audioData->mutex);
    
    if (!audioData->recording) {
        pthread_mutex_unlock(&audioData->mutex);
        return;
    }
    
    if (inNumPackets == 0 && audioData->dataFormat.mBytesPerPacket != 0) {
        inNumPackets = inBuffer->mAudioDataByteSize / audioData->dataFormat.mBytesPerPacket;
    }
    
    // Example: Calculate RMS level for visualization
    if (inBuffer->mAudioDataByteSize > 0) {
        int16_t *samples = (int16_t *)inBuffer->mAudioData;
        int numSamples = inBuffer->mAudioDataByteSize / sizeof(int16_t);
        
        long long sum = 0;
        for (int i = 0; i < numSamples; i++) {
            sum += samples[i] * samples[i];
        }
        double rms = sqrt((double)sum / numSamples);
        double db = 20 * log10(rms / 32767.0);
        
        // Simple level meter
        int bars = (int)((db + 60) / 3); // Normalize -60dB to 0dB to 0-20 bars
        if (bars < 0) bars = 0;
        if (bars > 20) bars = 20;
        
        printf("\033[ALevel: ");
        int i = 0;
        for (; i < bars; i++) printf("█");
        for (; i < 20; i++) printf("░");
        printf(" %.1f dB\n", db);
    }

    // Re-enqueue the buffer for continuous recording
    AudioQueueEnqueueBuffer(audioData->queue, inBuffer, 0, NULL);
    
    pthread_mutex_unlock(&audioData->mutex);
}

// Thread function for handling user input
void* inputThread(void* userData) {
    AudioData *audioData = (AudioData *)userData;
    
    printf("Press 'q' and Enter to stop recording...\n\n");
    char input;
    while ((input = getchar()) != 'q') {
        // Continue until 'q' is pressed
    }
    
    pthread_mutex_lock(&audioData->mutex);
    audioData->recording = false;
    pthread_mutex_unlock(&audioData->mutex);
    
    return NULL;
}

int recordAudio(const char* filename) {
    AudioData audioData;
    audioData.recording = true;
    audioData.currentPacket = 0;
    
    // Initialize mutex
    if (pthread_mutex_init(&audioData.mutex, NULL) != 0) {
        printf("Failed to initialize mutex\n");
        return -1;
    }
    
    // Set up audio format (16-bit PCM, 44.1kHz, mono)
    audioData.dataFormat.mSampleRate = 44100.0;
    audioData.dataFormat.mFormatID = kAudioFormatLinearPCM;
    audioData.dataFormat.mFormatFlags = kLinearPCMFormatFlagIsSignedInteger |
                                       kLinearPCMFormatFlagIsPacked;
    audioData.dataFormat.mBytesPerPacket = 2;
    audioData.dataFormat.mFramesPerPacket = 1;
    audioData.dataFormat.mBytesPerFrame = 2;
    audioData.dataFormat.mChannelsPerFrame = 1;
    audioData.dataFormat.mBitsPerChannel = 16;
    
    // Create audio queue
    OSStatus status = AudioQueueNewInput(&audioData.dataFormat,
                                        HandleInputBuffer,
                                        &audioData,
                                        NULL, // Use internal thread instead of main run loop
                                        NULL,
                                        0,
                                        &audioData.queue);
    
    if (status != noErr) {
        printf("Error creating audio queue: %d\n", (int)status);
        pthread_mutex_destroy(&audioData.mutex);
        return -1;
    }
    
    // Get the actual format (may be slightly different)
    UInt32 dataFormatSize = sizeof(audioData.dataFormat);
    AudioQueueGetProperty(audioData.queue,
                         kAudioQueueProperty_StreamDescription,
                         &audioData.dataFormat,
                         &dataFormatSize);
    
    // Use smaller buffer for more responsive real-time processing
    audioData.bufferByteSize = 4096; // Smaller buffer = lower latency
    
    // Allocate and enqueue buffers
    for (int i = 0; i < 3; i++) {
        status = AudioQueueAllocateBuffer(audioData.queue,
                                        audioData.bufferByteSize,
                                        &audioData.buffers[i]);
        if (status != noErr) {
            printf("Error allocating buffer %d: %d\n", i, (int)status);
            break;
        }
        
        status = AudioQueueEnqueueBuffer(audioData.queue,
                                       audioData.buffers[i],
                                       0,
                                       NULL);
        if (status != noErr) {
            printf("Error enqueuing buffer %d: %d\n", i, (int)status);
            break;
        }
    }
    
    // Start recording
    status = AudioQueueStart(audioData.queue, NULL);
    if (status != noErr) {
        printf("Error starting recording: %d\n", (int)status);
        AudioFileClose(audioData.audioFile);
        AudioQueueDispose(audioData.queue, true);
        pthread_mutex_destroy(&audioData.mutex);
        return -1;
    }
    
    printf("Recording started! Real-time processing active...\n");
    
    // Create input thread for user control
    pthread_t inputThreadId;
    pthread_create(&inputThreadId, NULL, inputThread, &audioData);
    
    // Keep main thread alive and let callbacks handle the audio
    while (audioData.recording) {
        usleep(100000); // Sleep 100ms, check if still recording
    }
    
    // Wait for input thread to finish
    pthread_join(inputThreadId, NULL);
    
    // Stop recording
    printf("Stopping recording...\n");
    AudioQueueStop(audioData.queue, true);
    AudioQueueDispose(audioData.queue, true);
    AudioFileClose(audioData.audioFile);
    pthread_mutex_destroy(&audioData.mutex);
    
    return 0;
}

int main() {
    recordAudio("recording.wav");
    printf("Recording complete!\n");
    return 0;
}