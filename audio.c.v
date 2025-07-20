#include <AudioToolbox/AudioToolbox.h>
#include <CoreAudio/CoreAudio.h>
#include <CoreFoundation/CoreFoundation.h>

#flag darwin -framework CoreAudio
#flag darwin -framework CoreFoundation
#flag darwin -framework AudioToolbox

@[typedef]
pub struct C.AudioStreamBasicDescription {
	mSampleRate f64
    mFormatID AudioFormatID       
    mFormatFlags AudioFormatFlags
    mBytesPerPacket u32
    mFramesPerPacket u32
    mBytesPerFrame u32
    mChannelsPerFrame u32
    mBitsPerChannel u32
    mReserved u32
}

@[typedef]
pub type AudioFormatID = u32

@[typedef]
pub type AudioFormatFlags = u32

@[typedef]
pub struct C.AudioQueueRef {
}

@[typedef]
pub struct C.AudioQueueBufferRef {
}

@[typedef]
pub struct C.AudioFileID {
}

@[typedef]
pub struct C.AudioTimeStamp
{
    mSampleTime f64             
    mHostTime u64              
    mRateScalar f64
    mWordClockTime u64              
    mSMPTETime C.SMPTETime
    mFlags C.AudioTimeStampFlags
    mReserved u32
}

@[typedef]
pub type C.AudioTimeStampFlags = u32

@[typedef]
struct C.SMPTETime
{
    mSubframes i16          
    mSubframeDivisor i16
    mCounter u32
    mType C.SMPTETimeType
    mFlags C.SMPTETimeFlags
    mHours i16
    mMinutes i16
    mSeconds i16
    mFrames i16
}

@[typedef]
pub type C.SMPTETimeType = u32

@[typedef]
pub type C.SMPTETimeFlags = u32

@[typedef]
pub type OSStatus = i32

pub fn C.AudioQueueNewInput(inFormat &C.AudioStreamBasicDescription, inCallbackProc FnAudioQueueInputCallback,
							inUserData voidptr, inCallbackRunLoop CFRunLoopRef, inCallbackRunLoopMode CFStringRef,
							inFlags u32, outAQ &C.AudioQueueRef) OSStatus

@[typdef]
struct  C.AudioStreamPacketDescription
{
    mStartOffset i64
    mVariableFramesInPacket u32
    mDataByteSize u32
}

@[typedef]
pub type FnAudioQueueInputCallback = fn (
                                    inUserData voidptr,
                                    inAQ C.AudioQueueRef,
                                    inBuffer C.AudioQueueBufferRef,
                        	        inStartTime &C.AudioTimeStamp,
                                    inNumberPacketDescriptions u32,
                                    inPacketDescs &C.AudioStreamPacketDescription)

pub fn C.AudioQueueEnqueueBuffer(inAQ C.AudioQueueRef, inBuffer C.AudioQueueBufferRef, inNumPacketDescs u32, inPacketDescs &C.AudioStreamPacketDescription) OSStatus
pub fn C.AudioQueueAllocateBuffer(inAQ C.AudioQueueRef, inBufferByteSize u32, outBuffer &C.AudioQueueBufferRef) OSStatus
pub fn C.AudioQueueStart(inAQ C.AudioQueueRef, inStartTime &C.AudioTimeStamp) OSStatus
pub fn C.AudioQueueDispose(inAQ C.AudioQueueRef, inImmediate bool) OSStatus
