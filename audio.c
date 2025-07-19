// gcc -framework AudioToolbox -framework CoreAudio -framework CoreFoundation -lpthread -o audio_recorder audio_recorder.c
// mutex seems to matter. sure. i guess. but i dont really care do i.
// close enough. still learning it. got it cleaned up.
// i see how it works. no garentee

#include <AudioToolbox/AudioToolbox.h>
#include <CoreAudio/CoreAudio.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

// Audio data structure
typedef struct {
    AudioStreamBasicDescription dataFormat;
    AudioQueueRef queue;
    AudioQueueBufferRef buffers[1];
    AudioFileID audioFile;
    UInt32 bufferByteSize;
    SInt64 currentPacket;
    bool recording;
} AudioData;

static void HandleInputBuffer(void *userData,
                             AudioQueueRef inAQ,
                             AudioQueueBufferRef inBuffer,
                             const AudioTimeStamp *inStartTime,
                             UInt32 inNumPackets,
                             const AudioStreamPacketDescription *inPacketDesc) {
    
    AudioData *audioData = (AudioData *)userData;
    
    if (inNumPackets == 0 && audioData->dataFormat.mBytesPerPacket != 0) {
        inNumPackets = inBuffer->mAudioDataByteSize / audioData->dataFormat.mBytesPerPacket;
    }

    FILE *f = fopen("data.bin", "ab");
    printf("Packet %lld: %d packets (%d bytes): []\n", audioData->currentPacket, inNumPackets, inBuffer->mAudioDataByteSize);
    for (size_t j = 0; j < inBuffer->mAudioDataByteSize; j++) {
        fprintf(f, "%c", ((uint8_t *)inBuffer->mAudioData)[j]);
    }
    fclose(f);
    audioData->currentPacket += inNumPackets;
    
    
    // Re-enqueue the buffer if still recording
    if (audioData->recording || inNumPackets > 0) {
        AudioQueueEnqueueBuffer(audioData->queue, inBuffer, 0, NULL);
    }
}

// Thread function for handling user input
void* inputThread(void* userData) {
    AudioData *audioData = (AudioData *)userData;
    
    printf("Press 'q' and Enter to stop recording...\n");
    char input;
    sleep(1); // Give time for the recording to start
    
    audioData->recording = false;
    
    return NULL;
}

int recordAudio(const char* filename, int durationSeconds) {
    AudioData audioData;
    audioData.recording = true;
    audioData.currentPacket = 0;
    
    // Set up audio format (16-bit PCM, 44.1kHz, mono)
    audioData.dataFormat.mSampleRate = 44100.0;
    audioData.dataFormat.mFormatID = kAudioFormatLinearPCM;
    audioData.dataFormat.mFormatFlags = kLinearPCMFormatFlagIsBigEndian |
                                       kLinearPCMFormatFlagIsSignedInteger |
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
                                        NULL,
                                        NULL,
                                        0,
                                        &audioData.queue);
    
    if (status != noErr) {
        printf("Error creating audio queue: %d\n", (int)status);
        return -1;
    }
    
    // Calculate buffer size
    UInt32 dataFormatSize = sizeof(audioData.dataFormat);
    AudioQueueGetProperty(audioData.queue,
                         kAudioQueueProperty_StreamDescription,
                         &audioData.dataFormat,
                         &dataFormatSize);
    
    audioData.bufferByteSize = 0x80; // 20KB buffer
    
    // Allocate and enqueue buffers
    for (int i = 0; i < 1; i++) {
        AudioQueueAllocateBuffer(audioData.queue,
                               audioData.bufferByteSize,
                               &audioData.buffers[i]);
        AudioQueueEnqueueBuffer(audioData.queue,
                              audioData.buffers[i],
                              0,
                              NULL);
    }
    
    // Start recording
    status = AudioQueueStart(audioData.queue, NULL);
    if (status != noErr) {
        printf("Error starting recording: %d\n", (int)status);
        AudioFileClose(audioData.audioFile);
        AudioQueueDispose(audioData.queue, true);
        return -1;
    }
    
    printf("Recording for %d seconds...\n", durationSeconds);
    
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
    audioData.recording = false;
    AudioQueueStop(audioData.queue, true);
    AudioQueueDispose(audioData.queue, true);
    AudioFileClose(audioData.audioFile);
    
    return 0;
}

int main() {
    recordAudio("recording.aiff", 2); // Record for 5 seconds
    printf("Recording complete!\n");
    return 0;
}
