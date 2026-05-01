#include <windows.h>
#include <mmsystem.h>
#flag windows -lwinmm

@[typedef]
pub struct C.WAVEFORMATEX {
	wFormatTag      u16
	nChannels       u16
	nSamplesPerSec  u32
	nAvgBytesPerSec u32
	nBlockAlign     u16
	wBitsPerSample  u16
	cbSize          u16
}

@[typedef]
pub struct C.WAVEHDR {
	lpData          voidptr
	dwBufferLength  u32
	dwBytesRecorded u32
	dwUser          usize
	dwFlags         u32
	dwLoops         u32
	lpNext          voidptr
	reserved        usize
}

pub type C.HWAVEIN = voidptr
pub type C.MMRESULT = u32

pub fn C.waveInOpen(phwi &C.HWAVEIN, uDeviceID u32, pwfx &C.WAVEFORMATEX, dwCallback usize, dwCallbackInstance usize, fdwOpen u32) C.MMRESULT
pub fn C.waveInPrepareHeader(hwi C.HWAVEIN, pwh &C.WAVEHDR, cbwh u32) C.MMRESULT
pub fn C.waveInAddBuffer(hwi C.HWAVEIN, pwh &C.WAVEHDR, cbwh u32) C.MMRESULT
pub fn C.waveInStart(hwi C.HWAVEIN) C.MMRESULT
pub fn C.waveInStop(hwi C.HWAVEIN) C.MMRESULT
pub fn C.waveInClose(hwi C.HWAVEIN) C.MMRESULT
pub fn C.waveInUnprepareHeader(hwi C.HWAVEIN, pwh &C.WAVEHDR, cbwh u32) C.MMRESULT
