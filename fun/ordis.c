
#ifndef V_COMMIT_HASH
	#define V_COMMIT_HASH "8605599aee97f837dc6d9d636408b91de1ae2ad0"
#endif

#define V_USE_SIGNAL_H

// V comptime_definitions:
// V compile time defines by -d or -define flags:
//     All custom defines      : macos
//     Turned ON custom defines: macos
#define CUSTOM_DEFINE_macos

#define _VPROD (1)
#define _VAUTOFREE (1)

// V typedefs:
typedef struct IError IError;
typedef struct none none;

// BEGIN_multi_return_typedefs
typedef struct multi_return_u32_u32 multi_return_u32_u32;
typedef struct multi_return_string_string multi_return_string_string;
typedef struct multi_return_int_int multi_return_int_int;
typedef struct multi_return_sokol__gfx__Image_sokol__gfx__Sampler multi_return_sokol__gfx__Image_sokol__gfx__Sampler;
typedef struct multi_return_u32_u32_u32 multi_return_u32_u32_u32;
typedef struct multi_return_strconv__ParserState_strconv__PrepNumber multi_return_strconv__ParserState_strconv__PrepNumber;
typedef struct multi_return_u64_int multi_return_u64_int;
typedef struct multi_return_i64_int multi_return_i64_int;
typedef struct multi_return_strconv__Dec32_bool multi_return_strconv__Dec32_bool;
typedef struct multi_return_strconv__Dec64_bool multi_return_strconv__Dec64_bool;
typedef struct multi_return_int_int_int_int multi_return_int_int_int_int;
typedef struct multi_return_int_int_int multi_return_int_int_int;
typedef struct multi_return_int_int_int_int_int_i64_bool multi_return_int_int_int_int_int_i64_bool;
typedef struct multi_return_u64_u64 multi_return_u64_u64;
typedef struct multi_return_f64_int multi_return_f64_int;
typedef struct multi_return_i64_i64_i64 multi_return_i64_i64_i64;
typedef struct multi_return_f64_f64 multi_return_f64_f64;
typedef struct multi_return_string_int multi_return_string_int;
typedef struct multi_return_int_bool multi_return_int_bool;
typedef struct multi_return_string_string_string multi_return_string_string_string;
// END_multi_return_typedefs

typedef struct strconv__AtoF64Param strconv__AtoF64Param;
typedef struct strconv__BF_param strconv__BF_param;
typedef struct strconv__PrepNumber strconv__PrepNumber;
typedef struct strconv__Dec32 strconv__Dec32;
typedef struct strconv__Dec64 strconv__Dec64;
typedef struct strconv__Uint128 strconv__Uint128;
typedef union strconv__Uf32 strconv__Uf32;
typedef union strconv__Uf64 strconv__Uf64;
typedef union strconv__Float64u strconv__Float64u;
typedef union strconv__Float32u strconv__Float32u;
typedef struct array array;
typedef struct GCHeapUsage GCHeapUsage;
typedef struct VCastTypeIndexName VCastTypeIndexName;
typedef struct VAssertMetaInfo VAssertMetaInfo;
typedef struct MethodParam MethodParam;
typedef struct FunctionData FunctionData;
typedef struct VariantData VariantData;
typedef struct EnumData EnumData;
typedef struct FieldData FieldData;
typedef struct VAttribute VAttribute;
typedef struct VContext VContext;
typedef struct DenseArray DenseArray;
typedef struct map map;
typedef struct Option Option;
typedef struct _option _option;
typedef struct None__ None__;
typedef struct _result _result;
typedef struct Error Error;
typedef struct MessageError MessageError;
typedef struct SortedMap SortedMap;
typedef struct mapnode mapnode;
typedef struct string string;
typedef struct RepIndex RepIndex;
typedef struct WrapConfig WrapConfig;
typedef struct RunesIterator RunesIterator;
typedef union StrIntpMem StrIntpMem;
typedef struct StrIntpCgenData StrIntpCgenData;
typedef struct StrIntpData StrIntpData;
typedef struct time__DateTimeParser time__DateTimeParser;
typedef struct time__TimeParseError time__TimeParseError;
typedef struct time__StopWatchOptions time__StopWatchOptions;
typedef struct time__StopWatch time__StopWatch;
typedef struct time__Time time__Time;
typedef struct time__InternalTimeBase time__InternalTimeBase;
typedef struct stbi__Image stbi__Image;
typedef struct stbi__LoadParams stbi__LoadParams;
typedef struct strings__textscanner__TextScanner strings__textscanner__TextScanner;
typedef struct term__termios__Termios term__termios__Termios;
typedef struct gx__Color gx__Color;
typedef struct gx__Image gx__Image;
typedef struct gx__TextCfg gx__TextCfg;
typedef struct math__BezierPoint math__BezierPoint;
typedef struct math__DigitParams math__DigitParams;
typedef struct math__DivResult math__DivResult;
typedef struct math__ChebSeries math__ChebSeries;
typedef union math__U32_F32 math__U32_F32;
typedef union math__U64_F64 math__U64_F64;
typedef struct os__Eof os__Eof;
typedef struct os__NotExpected os__NotExpected;
typedef struct os__File os__File;
typedef struct os__FileNotOpenedError os__FileNotOpenedError;
typedef struct os__SizeOfTypeIs0Error os__SizeOfTypeIs0Error;
typedef struct os__FileMode os__FileMode;
typedef struct os__FileInfo os__FileInfo;
typedef struct os__FilePermission os__FilePermission;
typedef struct os__PathKind os__PathKind;
typedef struct os__SystemError os__SystemError;
typedef struct os__DiskUsage os__DiskUsage;
typedef struct os__Result os__Result;
typedef struct os__Command os__Command;
typedef struct os__MvParams os__MvParams;
typedef struct os__ExecutableNotFoundError os__ExecutableNotFoundError;
typedef struct os__WalkParams os__WalkParams;
typedef struct os__MkdirParams os__MkdirParams;
typedef struct os__Uname os__Uname;
typedef struct os__Stat os__Stat;
typedef struct os__Process os__Process;
typedef struct sokol__sapp__Screenshot sokol__sapp__Screenshot;
typedef struct gg__DrawPixelConfig gg__DrawPixelConfig;
typedef struct gg__DrawRectParams gg__DrawRectParams;
typedef struct gg__Event gg__Event;
typedef struct gg__Config gg__Config;
typedef struct gg__PipelineContainer gg__PipelineContainer;
typedef struct gg__Context gg__Context;
typedef struct gg__EndOptions gg__EndOptions;
typedef struct gg__FPSConfig gg__FPSConfig;
typedef struct gg__PenConfig gg__PenConfig;
typedef struct gg__Size gg__Size;
typedef struct gg__Image gg__Image;
typedef struct gg__StreamingImageConfig gg__StreamingImageConfig;
typedef struct gg__DrawImageConfig gg__DrawImageConfig;
typedef struct gg__Rect gg__Rect;
typedef struct gg__SSRecorderSettings gg__SSRecorderSettings;
typedef struct gg__FT gg__FT;
typedef struct gg__DrawTextParams gg__DrawTextParams;
typedef struct gg__FTConfig gg__FTConfig;
typedef struct gg__StringToRender gg__StringToRender;
typedef struct main__App main__App;
typedef struct _result_int _result_int;
typedef struct _result_string _result_string;
typedef struct _result_void _result_void;
typedef struct _result_sokol__gfx__PixelFormat _result_sokol__gfx__PixelFormat;
typedef struct _result_Array_u8 _result_Array_u8;
typedef struct _result_FILE_ptr _result_FILE_ptr;
typedef struct _result_strings__Builder _result_strings__Builder;
typedef struct _result_os__Stat _result_os__Stat;
typedef struct _option_string _option_string;
typedef struct _option_u8 _option_u8;
typedef struct _option_gg__FT_ptr _option_gg__FT_ptr;

 // V preincludes:

#if defined(__TINYC__) && defined(__has_include)
// tcc does not support has_include properly yet, turn it off completely
#undef __has_include
#endif

// V cheaders:
// Generated by the V compiler

#if defined __GNUC__ && __GNUC__ >= 14
#pragma GCC diagnostic warning "-Wimplicit-function-declaration"
#pragma GCC diagnostic warning "-Wincompatible-pointer-types"
#pragma GCC diagnostic warning "-Wint-conversion"
#pragma GCC diagnostic warning "-Wreturn-mismatch"
#endif


#if defined(__TINYC__) && defined(__has_include)
// tcc does not support has_include properly yet, turn it off completely
#undef __has_include
#endif

#if defined(__has_include)

#if __has_include(<inttypes.h>)
#include <inttypes.h>
#else
#error VERROR_MESSAGE The C compiler can not find <inttypes.h>. Please install the package `build-essential`.
#endif

#else
#include <inttypes.h>
#endif


#if defined(__has_include)

#if __has_include(<stddef.h>)
#include <stddef.h>
#else
#error VERROR_MESSAGE The C compiler can not find <stddef.h>. Please install the package `build-essential`.
#endif

#else
#include <stddef.h>
#endif


//================================== builtin types ================================*/
#if defined(__x86_64__) || defined(_M_AMD64) || defined(__aarch64__) || defined(__arm64__) || defined(_M_ARM64) || (defined(__riscv_xlen) && __riscv_xlen == 64) || defined(__s390x__) || (defined(__powerpc64__) && defined(__LITTLE_ENDIAN__)) || defined(__loongarch64)
typedef int64_t vint_t;
#else
typedef int32_t vint_t;
#endif
typedef int64_t i64;
typedef int16_t i16;
typedef int8_t i8;
typedef uint64_t u64;
typedef uint32_t u32;
typedef uint8_t u8;
typedef uint16_t u16;
typedef u8 byte;
typedef int32_t i32;
typedef uint32_t rune;
typedef size_t usize;
typedef ptrdiff_t isize;
#ifndef VNOFLOAT
typedef float f32;
typedef double f64;
#else
typedef int32_t f32;
typedef int64_t f64;
#endif
typedef int64_t int_literal;
#ifndef VNOFLOAT
typedef double float_literal;
#else
typedef int64_t float_literal;
#endif
typedef unsigned char* byteptr;
typedef void* voidptr;
typedef char* charptr;
typedef u8 array_fixed_byte_300 [300];

typedef struct sync__Channel* chan;

#ifndef CUSTOM_DEFINE_no_bool
	#ifndef __cplusplus
		#ifndef bool
			#ifdef CUSTOM_DEFINE_4bytebool
				typedef int bool;
			#else
				typedef u8 bool;
			#endif
			#define true 1
			#define false 0
		#endif
	#endif
#endif


typedef u64 (*MapHashFn)(voidptr);
typedef bool (*MapEqFn)(voidptr, voidptr);
typedef void (*MapCloneFn)(voidptr, voidptr);
typedef void (*MapFreeFn)(voidptr);

//============================== HELPER C MACROS =============================*/
// _SLIT0 is used as NULL string for literal arguments
// `"" s` is used to enforce a string literal argument
#define _SLIT0 (string){.str=(byteptr)(""), .len=0, .is_lit=1}
#define _S(s) ((string){.str=(byteptr)("" s), .len=(sizeof(s)-1), .is_lit=1})
#define _SLEN(s, n) ((string){.str=(byteptr)("" s), .len=n, .is_lit=1})
// optimized way to compare literal strings
#define _SLIT_EQ(sptr, slen, lit) (slen == sizeof("" lit)-1 && !vmemcmp(sptr, "" lit, slen))
#define _SLIT_NE(sptr, slen, lit) (slen != sizeof("" lit)-1 || vmemcmp(sptr, "" lit, slen))

// take the address of an rvalue
#define ADDR(type, expr) (&((type[]){expr}[0]))

// copy something to the heap
#define HEAP(type, expr) ((type*)memdup((void*)&((type[]){expr}[0]), sizeof(type)))
#define HEAP_noscan(type, expr) ((type*)memdup_noscan((void*)&((type[]){expr}[0]), sizeof(type)))
#define HEAP_align(type, expr, align) ((type*)memdup_align((void*)&((type[]){expr}[0]), sizeof(type), align))

#define _PUSH_MANY(arr, val, tmp, tmp_typ) {tmp_typ tmp = (val); array_push_many(arr, tmp.data, tmp.len);}
#define _PUSH_MANY_noscan(arr, val, tmp, tmp_typ) {tmp_typ tmp = (val); array_push_many_noscan(arr, tmp.data, tmp.len);}

// unsigned/signed comparisons
static inline bool _us32_gt(uint32_t a, int32_t b) { return a > INT32_MAX || (int32_t)a > b; }
static inline bool _us32_ge(uint32_t a, int32_t b) { return a >= INT32_MAX || (int32_t)a >= b; }
static inline bool _us32_eq(uint32_t a, int32_t b) { return a <= INT32_MAX && (int32_t)a == b; }
static inline bool _us32_ne(uint32_t a, int32_t b) { return a > INT32_MAX || (int32_t)a != b; }
static inline bool _us32_le(uint32_t a, int32_t b) { return a <= INT32_MAX && (int32_t)a <= b; }
static inline bool _us32_lt(uint32_t a, int32_t b) { return a < INT32_MAX && (int32_t)a < b; }
static inline bool _us64_gt(uint64_t a, int64_t b) { return a > INT64_MAX || (int64_t)a > b; }
static inline bool _us64_ge(uint64_t a, int64_t b) { return a >= INT64_MAX || (int64_t)a >= b; }
static inline bool _us64_eq(uint64_t a, int64_t b) { return a <= INT64_MAX && (int64_t)a == b; }
static inline bool _us64_ne(uint64_t a, int64_t b) { return a > INT64_MAX || (int64_t)a != b; }
static inline bool _us64_le(uint64_t a, int64_t b) { return a <= INT64_MAX && (int64_t)a <= b; }
static inline bool _us64_lt(uint64_t a, int64_t b) { return a < INT64_MAX && (int64_t)a < b; }

#define EMPTY_VARG_INITIALIZATION 0
#define EMPTY_STRUCT_DECLARATION
#define E_STRUCT
// Due to a tcc bug, the length of an array needs to be specified, but GCC crashes if it is...
#define EMPTY_ARRAY_OF_ELEMS(x,n) (x[])
#define TCCSKIP(x) x

#define __NOINLINE __attribute__((noinline))
#define __IRQHANDLER __attribute__((interrupt))

#define __V_architecture 0
#if defined(__x86_64__) || defined(_M_AMD64)
	#define __V_amd64  1
	#undef __V_architecture
	#define __V_architecture 1
#endif

#if defined(__aarch64__) || defined(__arm64__) || defined(_M_ARM64)
	#define __V_arm64  1
	#undef __V_architecture
	#define __V_architecture 2
#endif

#if defined(__arm__) || defined(_M_ARM)
	#define __V_arm32  1
	#undef __V_architecture
	#define __V_architecture 3
#endif

#if defined(__riscv) && __riscv_xlen == 64
	#define __V_rv64  1
	#undef __V_architecture
	#define __V_architecture 4
#endif

#if defined(__riscv) && __riscv_xlen == 32
	#define __V_rv32  1
	#undef __V_architecture
	#define __V_architecture 5
#endif

#if defined(__i386__) || defined(_M_IX86)
	#define __V_x86    1
	#undef __V_architecture
	#define __V_architecture 6
#endif

#if defined(__s390x__)
	#define __V_s390x  1
	#undef __V_architecture
	#define __V_architecture 7
#endif

#if defined(__powerpc64__) && defined(__LITTLE_ENDIAN__)
	#define __V_ppc64le  1
	#undef __V_architecture
	#define __V_architecture 8
#endif

#if defined(__loongarch64)
	#define __V_loongarch64  1
	#undef __V_architecture
	#define __V_architecture 9
#endif

// Using just __GNUC__ for detecting gcc, is not reliable because other compilers define it too:
#ifdef __GNUC__
	#define __V_GCC__
#endif
#ifdef __TINYC__
	#undef __V_GCC__
#endif
#ifdef __cplusplus
	#undef __V_GCC__
#endif
#ifdef __clang__
	#undef __V_GCC__
#endif

#ifdef _MSC_VER
	#undef __V_GCC__
	#undef EMPTY_STRUCT_DECLARATION
	#undef E_STRUCT
	#define EMPTY_STRUCT_DECLARATION unsigned char _dummy_pad
	#define E_STRUCT 0
#endif

#ifndef _WIN32
	#if defined __has_include
		#if __has_include (<execinfo.h>)
			#include <execinfo.h>
		#else
			// On linux: int backtrace(void **__array, int __size);
			// On BSD: size_t backtrace(void **, size_t);
		#endif
	#endif
#endif

#ifdef __TINYC__
	#define _Atomic volatile
	#undef EMPTY_STRUCT_DECLARATION
	#undef E_STRUCT
	#define EMPTY_STRUCT_DECLARATION unsigned char _dummy_pad
	#define E_STRUCT 0
	#undef EMPTY_ARRAY_OF_ELEMS
	#define EMPTY_ARRAY_OF_ELEMS(x,n) (x[n])
	#undef __NOINLINE
	#undef __IRQHANDLER
	// tcc does not support inlining at all
	#define __NOINLINE
	#define __IRQHANDLER
	#undef TCCSKIP
	#define TCCSKIP(x)
	// #include <byteswap.h>
	int tcc_backtrace(const char *fmt, ...);
#endif

// Use __offsetof_ptr instead of __offset_of, when you *do* have a valid pointer, to avoid UB:
#ifndef __offsetof_ptr
	#define __offsetof_ptr(ptr,PTYPE,FIELDNAME) ((size_t)((byte *)&((PTYPE *)ptr)->FIELDNAME - (byte *)ptr))
#endif

// for __offset_of
#ifndef __offsetof
#if defined(__TINYC__) || defined(_MSC_VER)
	#define __offsetof(PTYPE,FIELDNAME) ((size_t)(&((PTYPE *)0)->FIELDNAME))
#else
	#define __offsetof(st, m) __builtin_offsetof(st, m)
#endif
#endif

#define OPTION_CAST(x) (x)

#if defined(_WIN32) || defined(__CYGWIN__)
	#define VV_EXP extern __declspec(dllexport)
	#define VV_LOC static
#else
	// 4 < gcc < 5 is used by some older Ubuntu LTS and Centos versions,
	// and does not support __has_attribute(visibility) ...
	#ifndef __has_attribute
		#define __has_attribute(x) 0  // Compatibility with non-clang compilers.
	#endif
	#if (defined(__GNUC__) && (__GNUC__ >= 4)) || (defined(__clang__) && __has_attribute(visibility))
		#ifdef ARM
			#define VV_EXP  extern __attribute__((externally_visible,visibility("default")))
		#else
			#define VV_EXP  extern __attribute__((visibility("default")))
		#endif
		#if defined(__clang__) && (defined(_VUSECACHE) || defined(_VBUILDMODULE))
			#define VV_LOC static
		#else
			#define VV_LOC  __attribute__ ((visibility ("hidden")))
		#endif
	#else
		#define VV_EXP extern
		#define VV_LOC static
	#endif
#endif

#ifdef __cplusplus
	#include <utility>
	#define _MOV std::move
#else
	#define _MOV
#endif

// tcc does not support has_include properly yet, turn it off completely
#if defined(__TINYC__) && defined(__has_include)
#undef __has_include
#endif


#if !defined(VWEAK)
	#define VWEAK __attribute__((weak))
	#ifdef _MSC_VER
		#undef VWEAK
		#define VWEAK
	#endif
	#if defined(__MINGW32__) || defined(__MINGW64__)
		#undef VWEAK
		#define VWEAK
	#endif
#endif

#if !defined(VHIDDEN)
	#define VHIDDEN __attribute__((visibility("hidden")))
	#ifdef _MSC_VER
		#undef VHIDDEN
		#define VHIDDEN
	#endif
	#if defined(__MINGW32__) || defined(__MINGW64__)
		#undef VHIDDEN
		#define VHIDDEN
	#endif
#endif

#if !defined(VNORETURN)
	#if defined(__TINYC__)
		#include <stdnoreturn.h>
		#define VNORETURN noreturn
	#endif
	# if !defined(__TINYC__) && defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
	#  define VNORETURN _Noreturn
	# elif !defined(VNORETURN) && defined(__GNUC__) && __GNUC__ >= 2
	#  define VNORETURN __attribute__((noreturn))
	# endif
	#ifndef VNORETURN
		#define VNORETURN
	#endif
#endif

#if !defined(VUNREACHABLE)
	#if defined(__GNUC__) && !defined(__clang__)
		#define V_GCC_VERSION  (__GNUC__ * 10000L + __GNUC_MINOR__ * 100L + __GNUC_PATCHLEVEL__)
		#if (V_GCC_VERSION >= 40500L) && !defined(__TINYC__)
			#define VUNREACHABLE()  do { __builtin_unreachable(); } while (0)
		#endif
	#endif
	#if defined(__clang__) && defined(__has_builtin) && !defined(__TINYC__)
		#if __has_builtin(__builtin_unreachable)
			#define VUNREACHABLE()  do { __builtin_unreachable(); } while (0)
		#endif
	#endif
	#ifndef VUNREACHABLE
		#define VUNREACHABLE() do { } while (0)
	#endif
#endif

//likely and unlikely macros
#if defined(__GNUC__) || defined(__INTEL_COMPILER) || defined(__clang__)
	#define _likely_(x)  __builtin_expect(x,1)
	#define _unlikely_(x)  __builtin_expect(x,0)
#else
	#define _likely_(x) (x)
	#define _unlikely_(x) (x)
#endif


// c_headers
typedef int (*qsort_callback_func)(const void*, const void*);
#include <stdio.h>  // TODO: remove all these includes, define all function signatures and types manually
#include <stdlib.h>
#include <string.h>

#include <stdarg.h> // for va_list

//================================== GLOBALS =================================*/
int load_so(byteptr);
void _vinit(int ___argc, voidptr ___argv);
void _vcleanup(void);
#ifdef _WIN32
	// workaround for windows, export _vinit_caller/_vcleanup_caller, let dl.open()/dl.close() call it
	// NOTE: This is hardcoded in vlib/dl/dl_windows.c.v!
	VV_EXP void _vinit_caller();
	VV_EXP void _vcleanup_caller();
#endif
#define sigaction_size sizeof(sigaction);
#define _ARR_LEN(a) ( (sizeof(a)) / (sizeof(a[0])) )

void v_free(voidptr ptr);

#if INTPTR_MAX == INT32_MAX
	#define TARGET_IS_32BIT 1
#elif INTPTR_MAX == INT64_MAX
	#define TARGET_IS_64BIT 1
#else
	#error "The environment is not 32 or 64-bit."
#endif

#if defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__ || defined(__BYTE_ORDER) && __BYTE_ORDER == __BIG_ENDIAN || defined(__BIG_ENDIAN__) || defined(__ARMEB__) || defined(__THUMBEB__) || defined(__AARCH64EB__) || defined(_MIBSEB) || defined(__MIBSEB) || defined(__MIBSEB__)
	#define TARGET_ORDER_IS_BIG 1
#elif defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__ || defined(__BYTE_ORDER) && __BYTE_ORDER == __LITTLE_ENDIAN || defined(__LITTLE_ENDIAN__) || defined(__ARMEL__) || defined(__THUMBEL__) || defined(__AARCH64EL__) || defined(_MIPSEL) || defined(__MIPSEL) || defined(__MIPSEL__) || defined(_M_AMD64) || defined(_M_ARM64) || defined(_M_X64) || defined(_M_IX86)
	#define TARGET_ORDER_IS_LITTLE 1
#else
	#error "Unknown architecture endianness"
#endif

#ifndef _WIN32
	#include <ctype.h>
	#include <locale.h> // tolower
	#include <sys/time.h>
	#include <unistd.h> // sleep
	extern char **environ;
#endif

#if defined(__CYGWIN__) && !defined(_WIN32)
	#error Cygwin is not supported, please use MinGW or Visual Studio.
#endif

#if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__vinix__) || defined(__serenity__) || defined(__sun) || defined(__plan9__)
	#include <sys/types.h>
	#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef __OpenBSD__
	#include <sys/types.h>
	#include <sys/resource.h>
	#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef __FreeBSD__
	#include <signal.h>
	#include <execinfo.h>
#endif

#ifdef __NetBSD__
	#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef _WIN32
	#define WINVER 0x0600
	#ifdef _WIN32_WINNT
		#undef _WIN32_WINNT
	#endif
	#define _WIN32_WINNT 0x0600
	#ifndef WIN32_FULL
	#define WIN32_LEAN_AND_MEAN
	#endif
	#ifndef _UNICODE
	#define _UNICODE
	#endif
	#ifndef UNICODE
	#define UNICODE
	#endif
	#include <windows.h>

	#include <io.h> // _waccess
	#include <direct.h> // _wgetcwd
	#ifdef V_USE_SIGNAL_H
	#include <signal.h> // signal and SIGSEGV for segmentation fault handler
	#endif

	#ifdef _MSC_VER
		// On MSVC these are the same (as long as /volatile:ms is passed)
		#define _Atomic volatile

		// MSVC cannot parse some things properly
		#undef OPTION_CAST
		#define OPTION_CAST(x)
		#undef __NOINLINE
		#undef __IRQHANDLER
		#define __NOINLINE __declspec(noinline)
		#define __IRQHANDLER __declspec(naked)

		#include <dbghelp.h>
		#pragma comment(lib, "Dbghelp")
	#endif
#else
	#include <pthread.h>
	#ifndef PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP
		// musl does not have that
		#define pthread_rwlockattr_setkind_np(a, b)
	#endif
#endif

// g_live_info is used by live.info()
static void* g_live_info = NULL;

#if defined(__MINGW32__) || defined(__MINGW64__) || (defined(_WIN32) && defined(__TINYC__))
	#undef PRId64
	#undef PRIi64
	#undef PRIo64
	#undef PRIu64
	#undef PRIx64
	#undef PRIX64
	#define PRId64 "lld"
	#define PRIi64 "lli"
	#define PRIo64 "llo"
	#define PRIu64 "llu"
	#define PRIx64 "llx"
	#define PRIX64 "llX"
#endif

#ifdef _VFREESTANDING
#undef _VFREESTANDING
#endif


// ============== wyhash ==============
#ifndef wyhash_final_version_3
#define wyhash_final_version_3

#ifndef WYHASH_CONDOM
// protections that produce different results:
// 1: normal valid behavior
// 2: extra protection against entropy loss (probability=2^-63), aka. "blind multiplication"
#define WYHASH_CONDOM 1
#endif

#ifndef WYHASH_32BIT_MUM
// 0: normal version, slow on 32 bit systems
// 1: faster on 32 bit systems but produces different results, incompatible with wy2u0k function
#define WYHASH_32BIT_MUM 0
#endif

// includes
#include <stdint.h>
#if defined(_MSC_VER) && defined(_M_X64)
	#include <intrin.h>
	#pragma intrinsic(_umul128)
#endif

// 128bit multiply function
static inline uint64_t _wyrot(uint64_t x) { return (x>>32)|(x<<32); }
static inline void _wymum(uint64_t *A, uint64_t *B){
#if(WYHASH_32BIT_MUM)
	uint64_t hh=(*A>>32)*(*B>>32), hl=(*A>>32)*(uint32_t)*B, lh=(uint32_t)*A*(*B>>32), ll=(uint64_t)(uint32_t)*A*(uint32_t)*B;
	#if(WYHASH_CONDOM>1)
	*A^=_wyrot(hl)^hh; *B^=_wyrot(lh)^ll;
	#else
	*A=_wyrot(hl)^hh; *B=_wyrot(lh)^ll;
	#endif
#elif defined(__SIZEOF_INT128__) && !defined(VWASM)
	__uint128_t r=*A; r*=*B;
	#if(WYHASH_CONDOM>1)
	*A^=(uint64_t)r; *B^=(uint64_t)(r>>64);
	#else
	*A=(uint64_t)r; *B=(uint64_t)(r>>64);
	#endif
#elif defined(_MSC_VER) && defined(_M_X64)
	#if(WYHASH_CONDOM>1)
	uint64_t  a,  b;
	a=_umul128(*A,*B,&b);
	*A^=a;  *B^=b;
	#else
	*A=_umul128(*A,*B,B);
	#endif
#else
	uint64_t ha=*A>>32, hb=*B>>32, la=(uint32_t)*A, lb=(uint32_t)*B, hi, lo;
	uint64_t rh=ha*hb, rm0=ha*lb, rm1=hb*la, rl=la*lb, t=rl+(rm0<<32), c=t<rl;
	lo=t+(rm1<<32); c+=lo<t; hi=rh+(rm0>>32)+(rm1>>32)+c;
	#if(WYHASH_CONDOM>1)
	*A^=lo;  *B^=hi;
	#else
	*A=lo;  *B=hi;
	#endif
#endif
}

// multiply and xor mix function, aka MUM
static inline uint64_t _wymix(uint64_t A, uint64_t B){ _wymum(&A,&B); return A^B; }

// endian macros
#ifndef WYHASH_LITTLE_ENDIAN
	#ifdef TARGET_ORDER_IS_LITTLE
		#define WYHASH_LITTLE_ENDIAN 1
	#else
		#define WYHASH_LITTLE_ENDIAN 0
	#endif
#endif

// read functions
#if (WYHASH_LITTLE_ENDIAN)
	static inline uint64_t _wyr8(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return v;}
	static inline uint64_t _wyr4(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return v;}
#elif !defined(__TINYC__) && (defined(__GNUC__) || defined(__INTEL_COMPILER) || defined(__clang__))
	static inline uint64_t _wyr8(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return __builtin_bswap64(v);}
	static inline uint64_t _wyr4(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return __builtin_bswap32(v);}
#elif defined(_MSC_VER)
	static inline uint64_t _wyr8(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return _byteswap_uint64(v);}
	static inline uint64_t _wyr4(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return _byteswap_ulong(v);}
#else
	static inline uint64_t _wyr8(const uint8_t *p) {
		uint64_t v; memcpy(&v, p, 8);
		return (((v >> 56) & 0xff)| ((v >> 40) & 0xff00)| ((v >> 24) & 0xff0000)| ((v >>  8) & 0xff000000)| ((v <<  8) & 0xff00000000)| ((v << 24) & 0xff0000000000)| ((v << 40) & 0xff000000000000)| ((v << 56) & 0xff00000000000000));
	}
	static inline uint64_t _wyr4(const uint8_t *p) {
		uint32_t v; memcpy(&v, p, 4);
		return (((v >> 24) & 0xff)| ((v >>  8) & 0xff00)| ((v <<  8) & 0xff0000)| ((v << 24) & 0xff000000));
	}
#endif
static inline uint64_t _wyr3(const uint8_t *p, size_t k) { return (((uint64_t)p[0])<<16)|(((uint64_t)p[k>>1])<<8)|p[k-1];}
// wyhash main function
static inline uint64_t wyhash(const void *key, size_t len, uint64_t seed, const uint64_t *secret){
	const uint8_t *p=(const uint8_t *)key; seed^=*secret;	uint64_t a, b;
	if (_likely_(len<=16)) {
		if (_likely_(len>=4)) { a=(_wyr4(p)<<32)|_wyr4(p+((len>>3)<<2)); b=(_wyr4(p+len-4)<<32)|_wyr4(p+len-4-((len>>3)<<2)); }
		else if (_likely_(len>0)) { a=_wyr3(p,len); b=0; }
		else a=b=0;
	} else {
		size_t i=len;
		if (_unlikely_(i>48)) {
			uint64_t see1=seed, see2=seed;
			do {
				seed=_wymix(_wyr8(p)^secret[1],_wyr8(p+8)^seed);
				see1=_wymix(_wyr8(p+16)^secret[2],_wyr8(p+24)^see1);
				see2=_wymix(_wyr8(p+32)^secret[3],_wyr8(p+40)^see2);
				p+=48; i-=48;
			} while(_likely_(i>48));
			seed^=see1^see2;
		}
		while(_unlikely_(i>16)) { seed=_wymix(_wyr8(p)^secret[1],_wyr8(p+8)^seed);  i-=16; p+=16; }
		a=_wyr8(p+i-16);  b=_wyr8(p+i-8);
	}
	return _wymix(secret[1]^len,_wymix(a^secret[1],b^seed));
}
// the default secret parameters
static const uint64_t _wyp[4] = {0xa0761d6478bd642f, 0xe7037ed1a0b428db, 0x8ebc6af09c88c6e3, 0x589965cc75374cc3};

// a useful 64bit-64bit mix function to produce deterministic pseudo random numbers that can pass BigCrush and PractRand
static inline uint64_t wyhash64(uint64_t A, uint64_t B){ A^=0xa0761d6478bd642f; B^=0xe7037ed1a0b428db; _wymum(&A,&B); return _wymix(A^0xa0761d6478bd642f,B^0xe7037ed1a0b428db);}

// the wyrand PRNG that pass BigCrush and PractRand
static inline uint64_t wyrand(uint64_t *seed){ *seed+=0xa0761d6478bd642f; return _wymix(*seed,*seed^0xe7037ed1a0b428db);}

#ifndef __vinix__
// convert any 64 bit pseudo random numbers to uniform distribution [0,1). It can be combined with wyrand, wyhash64 or wyhash.
static inline double wy2u01(uint64_t r){ const double _wynorm=1.0/(1ull<<52); return (r>>12)*_wynorm;}

// convert any 64 bit pseudo random numbers to APPROXIMATE Gaussian distribution. It can be combined with wyrand, wyhash64 or wyhash.
static inline double wy2gau(uint64_t r){ const double _wynorm=1.0/(1ull<<20); return ((r&0x1fffff)+((r>>21)&0x1fffff)+((r>>42)&0x1fffff))*_wynorm-3.0;}
#endif

#if(!WYHASH_32BIT_MUM)
// fast range integer random number generation on [0,k) credit to Daniel Lemire. May not work when WYHASH_32BIT_MUM=1. It can be combined with wyrand, wyhash64 or wyhash.
static inline uint64_t wy2u0k(uint64_t r, uint64_t k){ _wymum(&r,&k); return k; }
#endif
#endif

#define _IN_MAP(val, m) map_exists(m, val)



// V includes:

#if defined(__TINYC__) && defined(__has_include)
// tcc does not support has_include properly yet, turn it off completely
#undef __has_include
#endif

// added by module `builtin`, file: float.c.v:10:

#if defined(__has_include)

#if __has_include(<float.h>)
#include <float.h>
#else
#error VERROR_MESSAGE Header file <float.h>, needed for module `builtin` was not found. Please install the corresponding development headers.
#endif

#else
#include <float.h>
#endif


// added by module `time`, file: time.c.v:6:

#if defined(__has_include)

#if __has_include(<time.h>)
#include <time.h>
#else
#error VERROR_MESSAGE Header file <time.h>, needed for module `time` was not found. Please install the corresponding development headers.
#endif

#else
#include <time.h>
#endif


// added by module `time`, file: time_darwin.c.v:3:

#if defined(__has_include)

#if __has_include(<mach/mach_time.h>)
#include <mach/mach_time.h>
#else
#error VERROR_MESSAGE Header file <mach/mach_time.h>, needed for module `time` was not found. Please install the corresponding development headers.
#endif

#else
#include <mach/mach_time.h>
#endif


// added by module `time`, file: time_nix.c.v:7:

#if defined(__has_include)

#if __has_include(<time.h>)
#include <time.h>
#else
#error VERROR_MESSAGE Header file <time.h>, needed for module `time` was not found. Please install the corresponding development headers.
#endif

#else
#include <time.h>
#endif


// added by module `time`, file: time_nix.c.v:8:
#include <errno.h>

// added by module `stbi`, file: link_to_libm.c.v:13:

#if defined(__has_include)

#if __has_include(<math.h>)
#include <math.h>
#else
#error VERROR_MESSAGE Header file <math.h>, needed for module `stbi` was not found. Please install the corresponding development headers.
#endif

#else
#include <math.h>
#endif


// added by module `stbi`, file: stbi.c.v:33:

#if defined(__has_include)

#if __has_include("stb_image.h")
#include "stb_image.h"
#else
#error VERROR_MESSAGE Header file "stb_image.h", needed for module `stbi` was not found. Please install the corresponding development headers.
#endif

#else
#include "stb_image.h"
#endif


// added by module `stbi`, file: stbi.c.v:34:

#if defined(__has_include)

#if __has_include("stb_image_write.h")
#include "stb_image_write.h"
#else
#error VERROR_MESSAGE Header file "stb_image_write.h", needed for module `stbi` was not found. Please install the corresponding development headers.
#endif

#else
#include "stb_image_write.h"
#endif


// added by module `stbi`, file: stbi.c.v:35:

#if defined(__has_include)

#if __has_include("stb_image_resize2.h")
#include "stb_image_resize2.h"
#else
#error VERROR_MESSAGE Header file "stb_image_resize2.h", needed for module `stbi` was not found. Please install the corresponding development headers.
#endif

#else
#include "stb_image_resize2.h"
#endif


// added by module `stbi`, file: stbi.c.v:36:

#if defined(__has_include)

#if __has_include("stb_v_header.h")
#include "stb_v_header.h"
#else
#error VERROR_MESSAGE Header file "stb_v_header.h", needed for module `stbi` was not found. Please install the corresponding development headers.
#endif

#else
#include "stb_v_header.h"
#endif

// defined by module `fontstash`
#define FONTSTASH_IMPLEMENTATION

// added by module `fontstash`, file: fontstash.c.v:12:

#if defined(__has_include)

#if __has_include("fontstash.h")
#include "fontstash.h"
#else
#error VERROR_MESSAGE Header file "fontstash.h", needed for module `fontstash` was not found. Please install the corresponding development headers.
#endif

#else
#include "fontstash.h"
#endif

// defined by module `sokol.c`
#define SOKOL_IMPL

// added by module `sokol.c`, file: declaration.c.v:86:

#if defined(__has_include)

#if __has_include("sokol_app.h")
#include "sokol_app.h"
#else
#error VERROR_MESSAGE Header file "sokol_app.h", needed for module `sokol.c` was not found. Please install the corresponding development headers.
#endif

#else
#include "sokol_app.h"
#endif

// defined by module `sokol.c`
#define SOKOL_IMPL
// defined by module `sokol.c`
#define SOKOL_NO_DEPRECATED

// added by module `sokol.c`, file: declaration.c.v:92:

#if defined(__has_include)

#if __has_include("sokol_gfx.h")
#include "sokol_gfx.h"
#else
#error VERROR_MESSAGE Header file "sokol_gfx.h", needed for module `sokol.c` was not found. Please install the corresponding development headers.
#endif

#else
#include "sokol_gfx.h"
#endif

// defined by module `sokol.c`
#define SOKOL_GL_IMPL

// added by module `sokol.c`, file: declaration.c.v:96:

#if defined(__has_include)

#if __has_include("util/sokol_gl.h")
#include "util/sokol_gl.h"
#else
#error VERROR_MESSAGE Header file "util/sokol_gl.h", needed for module `sokol.c` was not found. Please install the corresponding development headers.
#endif

#else
#include "util/sokol_gl.h"
#endif


// added by module `sokol.c`, file: declaration.c.v:97:

#if defined(__has_include)

#if __has_include("sokol_v.post.h")
#include "sokol_v.post.h"
#else
#error VERROR_MESSAGE Header file "sokol_v.post.h", needed for module `sokol.c` was not found. Please install the corresponding development headers.
#endif

#else
#include "sokol_v.post.h"
#endif


// added by module `term.termios`, file: termios_darwin.c.v:10:

#if defined(__has_include)

#if __has_include(<termios.h>)
#include <termios.h>
#else
#error VERROR_MESSAGE Header file <termios.h>, needed for module `term.termios` was not found. Please install the corresponding development headers.
#endif

#else
#include <termios.h>
#endif


// added by module `term.termios`, file: termios_darwin.c.v:11:

#if defined(__has_include)

#if __has_include(<sys/ioctl.h>)
#include <sys/ioctl.h>
#else
#error VERROR_MESSAGE Header file <sys/ioctl.h>, needed for module `term.termios` was not found. Please install the corresponding development headers.
#endif

#else
#include <sys/ioctl.h>
#endif


// added by module `math`, file: math.c.v:6:

#if defined(__has_include)

#if __has_include(<math.h>)
#include <math.h>
#else
#error VERROR_MESSAGE Header file <math.h>, needed for module `math` was not found. Please install the corresponding development headers.
#endif

#else
#include <math.h>
#endif


// added by module `os`, file: debugger_darwin.c.v:3:

#if defined(__has_include)

#if __has_include(<sys/types.h>)
#include <sys/types.h>
#else
#error VERROR_MESSAGE Header file <sys/types.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <sys/types.h>
#endif


// added by module `os`, file: debugger_darwin.c.v:4:

#if defined(__has_include)

#if __has_include(<sys/ptrace.h>)
#include <sys/ptrace.h>
#else
#error VERROR_MESSAGE Header file <sys/ptrace.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <sys/ptrace.h>
#endif


// added by module `os`, file: fd.c.v:6:

#if defined(__has_include)

#if __has_include(<sys/select.h>)
#include <sys/select.h>
#else
#error VERROR_MESSAGE Header file <sys/select.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <sys/select.h>
#endif


// added by module `os`, file: os.c.v:5:

#if defined(__has_include)

#if __has_include(<sys/stat.h>)
#include <sys/stat.h>
#else
#error VERROR_MESSAGE Header file <sys/stat.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <sys/stat.h>
#endif


// added by module `os`, file: os.c.v:6:
#include <errno.h>

// added by module `os`, file: os_nix.c.v:5:

#if defined(__has_include)

#if __has_include(<dirent.h>)
#include <dirent.h>
#else
#error VERROR_MESSAGE Header file <dirent.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <dirent.h>
#endif


// added by module `os`, file: os_nix.c.v:6:

#if defined(__has_include)

#if __has_include(<unistd.h>)
#include <unistd.h>
#else
#error VERROR_MESSAGE Header file <unistd.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <unistd.h>
#endif


// added by module `os`, file: os_nix.c.v:7:

#if defined(__has_include)

#if __has_include(<fcntl.h>)
#include <fcntl.h>
#else
#error VERROR_MESSAGE Header file <fcntl.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <fcntl.h>
#endif


// added by module `os`, file: os_nix.c.v:8:

#if defined(__has_include)

#if __has_include(<sys/utsname.h>)
#include <sys/utsname.h>
#else
#error VERROR_MESSAGE Header file <sys/utsname.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <sys/utsname.h>
#endif


// added by module `os`, file: os_nix.c.v:9:

#if defined(__has_include)

#if __has_include(<sys/types.h>)
#include <sys/types.h>
#else
#error VERROR_MESSAGE Header file <sys/types.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <sys/types.h>
#endif


// added by module `os`, file: os_nix.c.v:10:

#if defined(__has_include)

#if __has_include(<sys/statvfs.h>)
#include <sys/statvfs.h>
#else
#error VERROR_MESSAGE Header file <sys/statvfs.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <sys/statvfs.h>
#endif


// added by module `os`, file: os_nix.c.v:11:

#if defined(__has_include)

#if __has_include(<utime.h>)
#include <utime.h>
#else
#error VERROR_MESSAGE Header file <utime.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <utime.h>
#endif


// added by module `os`, file: signal.c.v:3:

#if defined(__has_include)

#if __has_include(<signal.h>)
#include <signal.h>
#else
#error VERROR_MESSAGE Header file <signal.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <signal.h>
#endif


// added by module `os`, file: signal_darwin.c.v:5:

#if defined(__has_include)

#if __has_include(<signal.h>)
#include <signal.h>
#else
#error VERROR_MESSAGE Header file <signal.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <signal.h>
#endif

// defined by module `sokol.f`
#define SOKOL_FONTSTASH_IMPL

// added by module `sokol.f`, file: f.v:12:

#if defined(__has_include)

#if __has_include("util/sokol_fontstash.h")
#include "util/sokol_fontstash.h"
#else
#error VERROR_MESSAGE Header file "util/sokol_fontstash.h", needed for module `sokol.f` was not found. Please install the corresponding development headers.
#endif

#else
#include "util/sokol_fontstash.h"
#endif

// defined by module `sokol.sapp`
#define SOKOL_VALIDATE_NON_FATAL 1

// V global/const #define ... :
#define _const_strconv__max_size_f64_char 512
#define _const_max_int 2147483647
#define _const_hashbits 24
#define _const_max_cached_hashbits 16
#define _const_init_log_capicity 5
#define _const_init_capicity 32
#define _const_init_even_index 30
#define _const_extra_metas_inc 4
#define _const_rune_maps_columns_in_row 4
#define _const_rune_maps_ul -3
#define _const_rune_maps_utl -2
#define _const_replace_stack_buffer_size 10
#define _const_kmp_stack_buffer_size 20
#define _const_os__buf_size 4096
#define _const_os__error_code_not_set -1
#define _const_os__f_ok 0
#define _const_main__win_width 800
#define _const_main__win_height 800

// Enum definitions:

typedef enum {
	strconv__ParserState__ok,
	strconv__ParserState__pzero,
	strconv__ParserState__mzero,
	strconv__ParserState__pinf,
	strconv__ParserState__minf,
	strconv__ParserState__invalid_number,
	strconv__ParserState__extra_char,
}  strconv__ParserState;

typedef enum {
	strconv__Align_text__right = 0,
	strconv__Align_text__left,
	strconv__Align_text__center,
}  strconv__Align_text;

typedef enum {
	strconv__Char_parse_state__start,
	strconv__Char_parse_state__norm_char,
	strconv__Char_parse_state__field_char,
	strconv__Char_parse_state__pad_ch,
	strconv__Char_parse_state__len_set_start,
	strconv__Char_parse_state__len_set_in,
	strconv__Char_parse_state__check_type,
	strconv__Char_parse_state__check_float,
	strconv__Char_parse_state__check_float_in,
	strconv__Char_parse_state__reset_params,
}  strconv__Char_parse_state;

typedef enum {
	ArrayFlags__noslices = 1U,
	ArrayFlags__noshrink = 2U,
	ArrayFlags__nogrow = 4U,
	ArrayFlags__nofree = 8U,
}  ArrayFlags;

typedef enum {
	AttributeKind__plain,
	AttributeKind__string,
	AttributeKind__number,
	AttributeKind__bool,
	AttributeKind__comptime_define,
}  AttributeKind;

typedef enum {
	ChanState__success,
	ChanState__not_ready,
	ChanState__closed,
}  ChanState;

typedef enum {
	MapMode__to_upper,
	MapMode__to_lower,
	MapMode__to_title,
}  MapMode;

typedef enum {
	TrimMode__trim_left,
	TrimMode__trim_right,
	TrimMode__trim_both,
}  TrimMode;

typedef enum {
	StrIntpType__si_no_str = 0,
	StrIntpType__si_c,
	StrIntpType__si_u8,
	StrIntpType__si_i8,
	StrIntpType__si_u16,
	StrIntpType__si_i16,
	StrIntpType__si_u32,
	StrIntpType__si_i32,
	StrIntpType__si_u64,
	StrIntpType__si_i64,
	StrIntpType__si_e32,
	StrIntpType__si_e64,
	StrIntpType__si_f32,
	StrIntpType__si_f64,
	StrIntpType__si_g32,
	StrIntpType__si_g64,
	StrIntpType__si_s,
	StrIntpType__si_p,
	StrIntpType__si_r,
	StrIntpType__si_vp,
}  StrIntpType;

typedef enum {
	time__FormatTime__hhmm12,
	time__FormatTime__hhmm24,
	time__FormatTime__hhmmss12,
	time__FormatTime__hhmmss24,
	time__FormatTime__hhmmss24_milli,
	time__FormatTime__hhmmss24_micro,
	time__FormatTime__hhmmss24_nano,
	time__FormatTime__no_time,
}  time__FormatTime;

typedef enum {
	time__FormatDate__ddmmyy,
	time__FormatDate__ddmmyyyy,
	time__FormatDate__mmddyy,
	time__FormatDate__mmddyyyy,
	time__FormatDate__mmmd,
	time__FormatDate__mmmdd,
	time__FormatDate__mmmddyy,
	time__FormatDate__mmmddyyyy,
	time__FormatDate__no_date,
	time__FormatDate__yyyymmdd,
	time__FormatDate__yymmdd,
}  time__FormatDate;

typedef enum {
	time__FormatDelimiter__dot,
	time__FormatDelimiter__hyphen,
	time__FormatDelimiter__slash,
	time__FormatDelimiter__space,
	time__FormatDelimiter__no_delimiter,
}  time__FormatDelimiter;

typedef enum {
	fontstash__Flags__top_left = 1U,
	fontstash__Flags__bottom_left = 2U,
}  fontstash__Flags;

typedef enum {
	fontstash__Align__left = 1U,
	fontstash__Align__center = 2U,
	fontstash__Align__right = 4U,
	fontstash__Align__top = 8U,
	fontstash__Align__middle = 16U,
	fontstash__Align__bottom = 32U,
	fontstash__Align__baseline = 64U,
}  fontstash__Align;

typedef enum {
	fontstash__ErrorCode__atlas_full = 1,
	fontstash__ErrorCode__scratch_full = 2,
	fontstash__ErrorCode__states_overflow = 3,
	fontstash__ErrorCode__states_underflow = 4,
}  fontstash__ErrorCode;

typedef enum {
	gx__HorizontalAlign__left = FONS_ALIGN_LEFT,
	gx__HorizontalAlign__center = FONS_ALIGN_CENTER,
	gx__HorizontalAlign__right = FONS_ALIGN_RIGHT,
}  gx__HorizontalAlign;

typedef enum {
	gx__VerticalAlign__top = FONS_ALIGN_TOP,
	gx__VerticalAlign__middle = FONS_ALIGN_MIDDLE,
	gx__VerticalAlign__bottom = FONS_ALIGN_BOTTOM,
	gx__VerticalAlign__baseline = FONS_ALIGN_BASELINE,
}  gx__VerticalAlign;

typedef enum {
	sokol__gfx__Backend__glcore33,
	sokol__gfx__Backend__gles3,
	sokol__gfx__Backend__d3d11,
	sokol__gfx__Backend__metal_ios,
	sokol__gfx__Backend__metal_macos,
	sokol__gfx__Backend__metal_simulator,
	sokol__gfx__Backend__wgpu,
	sokol__gfx__Backend__dummy,
}  sokol__gfx__Backend;

#pragma pack(push, 1)
typedef enum {
	sokol__gfx__PixelFormat___default,
	sokol__gfx__PixelFormat__none,
	sokol__gfx__PixelFormat__r8,
	sokol__gfx__PixelFormat__r8sn,
	sokol__gfx__PixelFormat__r8ui,
	sokol__gfx__PixelFormat__r8si,
	sokol__gfx__PixelFormat__r16,
	sokol__gfx__PixelFormat__r16sn,
	sokol__gfx__PixelFormat__r16ui,
	sokol__gfx__PixelFormat__r16si,
	sokol__gfx__PixelFormat__r16f,
	sokol__gfx__PixelFormat__rg8,
	sokol__gfx__PixelFormat__rg8sn,
	sokol__gfx__PixelFormat__rg8ui,
	sokol__gfx__PixelFormat__rg8si,
	sokol__gfx__PixelFormat__r32ui,
	sokol__gfx__PixelFormat__r32si,
	sokol__gfx__PixelFormat__r32f,
	sokol__gfx__PixelFormat__rg16,
	sokol__gfx__PixelFormat__rg16sn,
	sokol__gfx__PixelFormat__rg16ui,
	sokol__gfx__PixelFormat__rg16si,
	sokol__gfx__PixelFormat__rg16f,
	sokol__gfx__PixelFormat__rgba8,
	sokol__gfx__PixelFormat__srgb8a8,
	sokol__gfx__PixelFormat__rgba8sn,
	sokol__gfx__PixelFormat__rgba8ui,
	sokol__gfx__PixelFormat__rgba8si,
	sokol__gfx__PixelFormat__bgra8,
	sokol__gfx__PixelFormat__rgb10a2,
	sokol__gfx__PixelFormat__rg11b10f,
	sokol__gfx__PixelFormat__rgb9e5,
	sokol__gfx__PixelFormat__rg32ui,
	sokol__gfx__PixelFormat__rg32si,
	sokol__gfx__PixelFormat__rg32f,
	sokol__gfx__PixelFormat__rgba16,
	sokol__gfx__PixelFormat__rgba16sn,
	sokol__gfx__PixelFormat__rgba16ui,
	sokol__gfx__PixelFormat__rgba16si,
	sokol__gfx__PixelFormat__rgba16f,
	sokol__gfx__PixelFormat__rgba32ui,
	sokol__gfx__PixelFormat__rgba32si,
	sokol__gfx__PixelFormat__rgba32f,
	sokol__gfx__PixelFormat__depth,
	sokol__gfx__PixelFormat__depth_stencil,
	sokol__gfx__PixelFormat__bc1_rgba,
	sokol__gfx__PixelFormat__bc2_rgba,
	sokol__gfx__PixelFormat__bc3_rgba,
	sokol__gfx__PixelFormat__bc3_srgba,
	sokol__gfx__PixelFormat__bc4_r,
	sokol__gfx__PixelFormat__bc4_rsn,
	sokol__gfx__PixelFormat__bc5_rg,
	sokol__gfx__PixelFormat__bc5_rgsn,
	sokol__gfx__PixelFormat__bc6h_rgbf,
	sokol__gfx__PixelFormat__bc6h_rgbuf,
	sokol__gfx__PixelFormat__bc7_rgba,
	sokol__gfx__PixelFormat__bc7_srgba,
	sokol__gfx__PixelFormat__pvrtc_rgb_2bpp,
	sokol__gfx__PixelFormat__pvrtc_rgb_4bpp,
	sokol__gfx__PixelFormat__pvrtc_rgba_2bpp,
	sokol__gfx__PixelFormat__pvrtc_rgba_4bpp,
	sokol__gfx__PixelFormat__etc2_rgb8,
	sokol__gfx__PixelFormat__etc2_srgb8,
	sokol__gfx__PixelFormat__etc2_rgb8a1,
	sokol__gfx__PixelFormat__etc2_rgba8,
	sokol__gfx__PixelFormat__etc2_srgb8a8,
	sokol__gfx__PixelFormat__eac_r11,
	sokol__gfx__PixelFormat__eac_r11sn,
	sokol__gfx__PixelFormat__eac_rg11,
	sokol__gfx__PixelFormat__eac_rg11sn,
	sokol__gfx__PixelFormat__astc_4x4_rgba,
	sokol__gfx__PixelFormat__astc_4x4_srgba,
	sokol__gfx__PixelFormat___num,
	sokol__gfx__PixelFormat___force_u32 = 0x7FFFFFFF,
} __attribute__((packed)) sokol__gfx__PixelFormat;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__ResourceState__initial,
	sokol__gfx__ResourceState__alloc,
	sokol__gfx__ResourceState__valid,
	sokol__gfx__ResourceState__failed,
	sokol__gfx__ResourceState__invalid,
	sokol__gfx__ResourceState___force_u32 = 0x7FFFFFFF,
} __attribute__((packed)) sokol__gfx__ResourceState;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__Usage___default,
	sokol__gfx__Usage__immutable,
	sokol__gfx__Usage__dynamic,
	sokol__gfx__Usage__stream,
	sokol__gfx__Usage___num,
	sokol__gfx__Usage___force_u32 = 0x7FFFFFFF,
} __attribute__((packed)) sokol__gfx__Usage;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__BufferType___default,
	sokol__gfx__BufferType__vertexbuffer,
	sokol__gfx__BufferType__indexbuffer,
	sokol__gfx__BufferType__storagebuffer,
	sokol__gfx__BufferType___num,
	sokol__gfx__BufferType___force_u32 = 0x7FFFFFFF,
} __attribute__((packed)) sokol__gfx__BufferType;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__IndexType___default,
	sokol__gfx__IndexType__none,
	sokol__gfx__IndexType__uint16,
	sokol__gfx__IndexType__uint32,
	sokol__gfx__IndexType___num,
	sokol__gfx__IndexType___force_u32 = 0x7FFFFFFF,
} __attribute__((packed)) sokol__gfx__IndexType;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__ImageType___default,
	sokol__gfx__ImageType___2d,
	sokol__gfx__ImageType__cube,
	sokol__gfx__ImageType___3d,
	sokol__gfx__ImageType__array,
	sokol__gfx__ImageType___num,
	sokol__gfx__ImageType___force_u32 = 0x7FFFFFFF,
} __attribute__((packed)) sokol__gfx__ImageType;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__ImageSampleType___default,
	sokol__gfx__ImageSampleType__float,
	sokol__gfx__ImageSampleType__depth,
	sokol__gfx__ImageSampleType__sint,
	sokol__gfx__ImageSampleType__uint,
	sokol__gfx__ImageSampleType__unfilterable_float,
	sokol__gfx__ImageSampleType___num,
	sokol__gfx__ImageSampleType___force_u32 = 0x7FFFFFFF,
} __attribute__((packed)) sokol__gfx__ImageSampleType;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__SamplerType___default,
	sokol__gfx__SamplerType__filtering,
	sokol__gfx__SamplerType__nonfiltering,
	sokol__gfx__SamplerType__comparison,
	sokol__gfx__SamplerType___num,
	sokol__gfx__SamplerType___force_u32 = 0x7FFFFFFF,
} __attribute__((packed)) sokol__gfx__SamplerType;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__CubeFace__pos_x,
	sokol__gfx__CubeFace__neg_x,
	sokol__gfx__CubeFace__pos_y,
	sokol__gfx__CubeFace__neg_y,
	sokol__gfx__CubeFace__pos_z,
	sokol__gfx__CubeFace__neg_z,
	sokol__gfx__CubeFace__num,
	sokol__gfx__CubeFace___force_u32 = 0x7fffffff,
} __attribute__((packed)) sokol__gfx__CubeFace;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__ShaderStage__vs,
	sokol__gfx__ShaderStage__fs,
	sokol__gfx__ShaderStage___force_u32 = 0x7FFFFFFF,
} __attribute__((packed)) sokol__gfx__ShaderStage;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__PrimitiveType___default,
	sokol__gfx__PrimitiveType__points,
	sokol__gfx__PrimitiveType__lines,
	sokol__gfx__PrimitiveType__line_strip,
	sokol__gfx__PrimitiveType__triangles,
	sokol__gfx__PrimitiveType__triangle_strip,
	sokol__gfx__PrimitiveType___num,
	sokol__gfx__PrimitiveType___force_u32 = 0x7FFFFFFF,
} __attribute__((packed)) sokol__gfx__PrimitiveType;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__Filter___default,
	sokol__gfx__Filter__none,
	sokol__gfx__Filter__nearest,
	sokol__gfx__Filter__linear,
	sokol__gfx__Filter___num,
	sokol__gfx__Filter___force_u32 = 0x7fffffff,
} __attribute__((packed)) sokol__gfx__Filter;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__Wrap___default,
	sokol__gfx__Wrap__repeat,
	sokol__gfx__Wrap__clamp_to_edge,
	sokol__gfx__Wrap__clamp_to_border,
	sokol__gfx__Wrap__mirrored_repeat,
	sokol__gfx__Wrap___num,
	sokol__gfx__Wrap___force_u32 = 0x7FFFFFFF,
} __attribute__((packed)) sokol__gfx__Wrap;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__BorderColor___default,
	sokol__gfx__BorderColor__transparent_black,
	sokol__gfx__BorderColor__opaque_black,
	sokol__gfx__BorderColor__opaque_white,
	sokol__gfx__BorderColor___num,
	sokol__gfx__BorderColor___force_u32 = 0x7FFFFFFF,
} __attribute__((packed)) sokol__gfx__BorderColor;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__VertexFormat__invalid,
	sokol__gfx__VertexFormat__float,
	sokol__gfx__VertexFormat__float2,
	sokol__gfx__VertexFormat__float3,
	sokol__gfx__VertexFormat__float4,
	sokol__gfx__VertexFormat__byte4,
	sokol__gfx__VertexFormat__byte4n,
	sokol__gfx__VertexFormat__ubyte4,
	sokol__gfx__VertexFormat__ubyte4n,
	sokol__gfx__VertexFormat__short2,
	sokol__gfx__VertexFormat__short2n,
	sokol__gfx__VertexFormat__ushort2n,
	sokol__gfx__VertexFormat__short4,
	sokol__gfx__VertexFormat__short4n,
	sokol__gfx__VertexFormat__ushort4n,
	sokol__gfx__VertexFormat__uint10_n2,
	sokol__gfx__VertexFormat__half2,
	sokol__gfx__VertexFormat__half4,
	sokol__gfx__VertexFormat___num,
	sokol__gfx__VertexFormat___force_u32 = 0x7FFFFFFF,
} __attribute__((packed)) sokol__gfx__VertexFormat;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__VertexStep___default,
	sokol__gfx__VertexStep__per_vertex,
	sokol__gfx__VertexStep__per_instance,
	sokol__gfx__VertexStep___num,
	sokol__gfx__VertexStep___force_u32 = 0x7FFFFFFF,
} __attribute__((packed)) sokol__gfx__VertexStep;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__UniformType__invalid,
	sokol__gfx__UniformType__float,
	sokol__gfx__UniformType__float2,
	sokol__gfx__UniformType__float3,
	sokol__gfx__UniformType__float4,
	sokol__gfx__UniformType__int,
	sokol__gfx__UniformType__int2,
	sokol__gfx__UniformType__int3,
	sokol__gfx__UniformType__int4,
	sokol__gfx__UniformType__mat4,
	sokol__gfx__UniformType___num,
	sokol__gfx__UniformType___force_u32 = 0x7FFFFFFF,
} __attribute__((packed)) sokol__gfx__UniformType;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__CullMode___default,
	sokol__gfx__CullMode__none,
	sokol__gfx__CullMode__front,
	sokol__gfx__CullMode__back,
	sokol__gfx__CullMode___num,
	sokol__gfx__CullMode___force_u32 = 0x7FFFFFFF,
} __attribute__((packed)) sokol__gfx__CullMode;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__FaceWinding__default,
	sokol__gfx__FaceWinding__ccw,
	sokol__gfx__FaceWinding__cw,
	sokol__gfx__FaceWinding__num,
	sokol__gfx__FaceWinding__force_u32 = 0x7FFFFFFF,
} __attribute__((packed)) sokol__gfx__FaceWinding;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__CompareFunc___default,
	sokol__gfx__CompareFunc__never,
	sokol__gfx__CompareFunc__less,
	sokol__gfx__CompareFunc__equal,
	sokol__gfx__CompareFunc__less_equal,
	sokol__gfx__CompareFunc__greater,
	sokol__gfx__CompareFunc__not_equal,
	sokol__gfx__CompareFunc__greater_equal,
	sokol__gfx__CompareFunc__always,
	sokol__gfx__CompareFunc___num,
	sokol__gfx__CompareFunc___force_u32 = 0x7FFFFFFF,
} __attribute__((packed)) sokol__gfx__CompareFunc;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__StencilOp___default,
	sokol__gfx__StencilOp__keep,
	sokol__gfx__StencilOp__zero,
	sokol__gfx__StencilOp__replace,
	sokol__gfx__StencilOp__incr_clamp,
	sokol__gfx__StencilOp__decr_clamp,
	sokol__gfx__StencilOp__invert,
	sokol__gfx__StencilOp__incr_wrap,
	sokol__gfx__StencilOp__decr_wrap,
	sokol__gfx__StencilOp___num,
	sokol__gfx__StencilOp___force_u32 = 0x7FFFFFFF,
} __attribute__((packed)) sokol__gfx__StencilOp;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__BlendFactor___default,
	sokol__gfx__BlendFactor__zero,
	sokol__gfx__BlendFactor__one,
	sokol__gfx__BlendFactor__src_color,
	sokol__gfx__BlendFactor__one_minus_src_color,
	sokol__gfx__BlendFactor__src_alpha,
	sokol__gfx__BlendFactor__one_minus_src_alpha,
	sokol__gfx__BlendFactor__dst_color,
	sokol__gfx__BlendFactor__one_minus_dst_color,
	sokol__gfx__BlendFactor__dst_alpha,
	sokol__gfx__BlendFactor__one_minus_dst_alpha,
	sokol__gfx__BlendFactor__src_alpha_saturated,
	sokol__gfx__BlendFactor__blend_color,
	sokol__gfx__BlendFactor__one_minus_blend_color,
	sokol__gfx__BlendFactor__blend_alpha,
	sokol__gfx__BlendFactor__one_minus_blend_alpha,
	sokol__gfx__BlendFactor___num,
	sokol__gfx__BlendFactor___force_u32 = 0x7FFFFFFF,
} __attribute__((packed)) sokol__gfx__BlendFactor;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__BlendOp___default,
	sokol__gfx__BlendOp__add,
	sokol__gfx__BlendOp__subtract,
	sokol__gfx__BlendOp__reverse_subtract,
	sokol__gfx__BlendOp___num,
	sokol__gfx__BlendOp___force_u32 = 0x7FFFFFFF,
} __attribute__((packed)) sokol__gfx__BlendOp;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__ColorMask___default = 0,
	sokol__gfx__ColorMask__none = 0x10,
	sokol__gfx__ColorMask__r = 1,
	sokol__gfx__ColorMask__g = 2,
	sokol__gfx__ColorMask__rg = 3,
	sokol__gfx__ColorMask__b = 4,
	sokol__gfx__ColorMask__rb = 5,
	sokol__gfx__ColorMask__gb = 6,
	sokol__gfx__ColorMask__rgb = 7,
	sokol__gfx__ColorMask__a = 8,
	sokol__gfx__ColorMask__ra = 9,
	sokol__gfx__ColorMask__ga = 0xa,
	sokol__gfx__ColorMask__rga = 0xb,
	sokol__gfx__ColorMask__ba = 0xc,
	sokol__gfx__ColorMask__rba = 0xd,
	sokol__gfx__ColorMask__gba = 0xe,
	sokol__gfx__ColorMask__rgba = 0xf,
	sokol__gfx__ColorMask___force_u32 = 0x7FFFFFFF,
} __attribute__((packed)) sokol__gfx__ColorMask;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__LoadAction___default,
	sokol__gfx__LoadAction__clear,
	sokol__gfx__LoadAction__load,
	sokol__gfx__LoadAction__dontcare,
	sokol__gfx__LoadAction___force_u32 = 0x7FFFFFFF,
} __attribute__((packed)) sokol__gfx__LoadAction;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__StoreAction___default,
	sokol__gfx__StoreAction__store,
	sokol__gfx__StoreAction__dontcare,
	sokol__gfx__StoreAction___force_u32 = 0x7FFFFFFF,
} __attribute__((packed)) sokol__gfx__StoreAction;
#pragma pack(pop)


#pragma pack(push, 1)
typedef enum {
	sokol__gfx__UniformLayout__uniformlayout_default = 0,
	sokol__gfx__UniformLayout__uniformlayout_native,
	sokol__gfx__UniformLayout__uniformlayout_std140,
	sokol__gfx__UniformLayout___num,
	sokol__gfx__UniformLayout___force_u32 = 0x7FFFFFFF,
} __attribute__((packed)) sokol__gfx__UniformLayout;
#pragma pack(pop)


typedef enum {
	os__SeekMode__start,
	os__SeekMode__current,
	os__SeekMode__end,
}  os__SeekMode;

typedef enum {
	os__FileBufferMode__fully_buffered = _IOFBF,
	os__FileBufferMode__line_buffered = _IOLBF,
	os__FileBufferMode__not_buffered = _IONBF,
}  os__FileBufferMode;

typedef enum {
	os__FileType__unknown,
	os__FileType__regular,
	os__FileType__directory,
	os__FileType__character_device,
	os__FileType__block_device,
	os__FileType__fifo,
	os__FileType__symbolic_link,
	os__FileType__socket,
}  os__FileType;

typedef enum {
	os__GlobMatch__exact,
	os__GlobMatch__ends_with,
	os__GlobMatch__starts_with,
	os__GlobMatch__start_and_ends_with,
	os__GlobMatch__contains,
	os__GlobMatch__any,
}  os__GlobMatch;

typedef enum {
	os__ChildProcessPipeKind__stdin,
	os__ChildProcessPipeKind__stdout,
	os__ChildProcessPipeKind__stderr,
}  os__ChildProcessPipeKind;

typedef enum {
	os__ProcessState__not_started,
	os__ProcessState__running,
	os__ProcessState__stopped,
	os__ProcessState__exited,
	os__ProcessState__aborted,
	os__ProcessState__closed,
}  os__ProcessState;

typedef enum {
	os__Signal__hup = 1,
	os__Signal__int = 2,
	os__Signal__quit = 3,
	os__Signal__ill = 4,
	os__Signal__trap = 5,
	os__Signal__abrt = 6,
	os__Signal__bus = 7,
	os__Signal__fpe = 8,
	os__Signal__kill = 9,
	os__Signal__usr1 = 10,
	os__Signal__segv = 11,
	os__Signal__usr2 = 12,
	os__Signal__pipe = 13,
	os__Signal__alrm = 14,
	os__Signal__term = 15,
	os__Signal__stkflt = 16,
	os__Signal__chld = 17,
	os__Signal__cont = 18,
	os__Signal__stop = 19,
	os__Signal__tstp = 20,
	os__Signal__ttin = 21,
	os__Signal__ttou = 22,
	os__Signal__urg = 23,
	os__Signal__xcpu = 24,
	os__Signal__xfsz = 25,
	os__Signal__vtalrm = 26,
	os__Signal__prof = 27,
	os__Signal__winch = 28,
	os__Signal__poll = 29,
	os__Signal__pwr = 30,
	os__Signal__sys = 31,
}  os__Signal;

typedef enum {
	sokol__sapp__EventType__invalid,
	sokol__sapp__EventType__key_down,
	sokol__sapp__EventType__key_up,
	sokol__sapp__EventType__char,
	sokol__sapp__EventType__mouse_down,
	sokol__sapp__EventType__mouse_up,
	sokol__sapp__EventType__mouse_scroll,
	sokol__sapp__EventType__mouse_move,
	sokol__sapp__EventType__mouse_enter,
	sokol__sapp__EventType__mouse_leave,
	sokol__sapp__EventType__touches_began,
	sokol__sapp__EventType__touches_moved,
	sokol__sapp__EventType__touches_ended,
	sokol__sapp__EventType__touches_cancelled,
	sokol__sapp__EventType__resized,
	sokol__sapp__EventType__iconified,
	sokol__sapp__EventType__restored,
	sokol__sapp__EventType__focused,
	sokol__sapp__EventType__unfocused,
	sokol__sapp__EventType__suspended,
	sokol__sapp__EventType__resumed,
	sokol__sapp__EventType__quit_requested,
	sokol__sapp__EventType__clipboard_pasted,
	sokol__sapp__EventType__files_dropped,
	sokol__sapp__EventType__num,
}  sokol__sapp__EventType;

typedef enum {
	sokol__sapp__MouseButton__invalid = -1,
	sokol__sapp__MouseButton__left = 0,
	sokol__sapp__MouseButton__right = 1,
	sokol__sapp__MouseButton__middle = 2,
}  sokol__sapp__MouseButton;

typedef enum {
	sokol__sapp__MouseCursor__default = SAPP_MOUSECURSOR_DEFAULT,
	sokol__sapp__MouseCursor__arrow = SAPP_MOUSECURSOR_ARROW,
	sokol__sapp__MouseCursor__ibeam = SAPP_MOUSECURSOR_IBEAM,
	sokol__sapp__MouseCursor__crosshair = SAPP_MOUSECURSOR_CROSSHAIR,
	sokol__sapp__MouseCursor__pointing_hand = SAPP_MOUSECURSOR_POINTING_HAND,
	sokol__sapp__MouseCursor__resize_ew = SAPP_MOUSECURSOR_RESIZE_EW,
	sokol__sapp__MouseCursor__resize_ns = SAPP_MOUSECURSOR_RESIZE_NS,
	sokol__sapp__MouseCursor__resize_nwse = SAPP_MOUSECURSOR_RESIZE_NWSE,
	sokol__sapp__MouseCursor__resize_nesw = SAPP_MOUSECURSOR_RESIZE_NESW,
	sokol__sapp__MouseCursor__resize_all = SAPP_MOUSECURSOR_RESIZE_ALL,
	sokol__sapp__MouseCursor__not_allowed = SAPP_MOUSECURSOR_NOT_ALLOWED,
}  sokol__sapp__MouseCursor;

typedef enum {
	sokol__sapp__Modifier__shift = 1,
	sokol__sapp__Modifier__ctrl = 2,
	sokol__sapp__Modifier__alt = 4,
	sokol__sapp__Modifier__super = 8,
	sokol__sapp__Modifier__lmb = 0x100,
	sokol__sapp__Modifier__rmb = 0x200,
	sokol__sapp__Modifier__mmb = 0x400,
}  sokol__sapp__Modifier;

typedef enum {
	sokol__sapp__KeyCode__invalid = 0,
	sokol__sapp__KeyCode__space = 32,
	sokol__sapp__KeyCode__apostrophe = 39,
	sokol__sapp__KeyCode__comma = 44,
	sokol__sapp__KeyCode__minus = 45,
	sokol__sapp__KeyCode__period = 46,
	sokol__sapp__KeyCode__slash = 47,
	sokol__sapp__KeyCode___0 = 48,
	sokol__sapp__KeyCode___1 = 49,
	sokol__sapp__KeyCode___2 = 50,
	sokol__sapp__KeyCode___3 = 51,
	sokol__sapp__KeyCode___4 = 52,
	sokol__sapp__KeyCode___5 = 53,
	sokol__sapp__KeyCode___6 = 54,
	sokol__sapp__KeyCode___7 = 55,
	sokol__sapp__KeyCode___8 = 56,
	sokol__sapp__KeyCode___9 = 57,
	sokol__sapp__KeyCode__semicolon = 59,
	sokol__sapp__KeyCode__equal = 61,
	sokol__sapp__KeyCode__a = 65,
	sokol__sapp__KeyCode__b = 66,
	sokol__sapp__KeyCode__c = 67,
	sokol__sapp__KeyCode__d = 68,
	sokol__sapp__KeyCode__e = 69,
	sokol__sapp__KeyCode__f = 70,
	sokol__sapp__KeyCode__g = 71,
	sokol__sapp__KeyCode__h = 72,
	sokol__sapp__KeyCode__i = 73,
	sokol__sapp__KeyCode__j = 74,
	sokol__sapp__KeyCode__k = 75,
	sokol__sapp__KeyCode__l = 76,
	sokol__sapp__KeyCode__m = 77,
	sokol__sapp__KeyCode__n = 78,
	sokol__sapp__KeyCode__o = 79,
	sokol__sapp__KeyCode__p = 80,
	sokol__sapp__KeyCode__q = 81,
	sokol__sapp__KeyCode__r = 82,
	sokol__sapp__KeyCode__s = 83,
	sokol__sapp__KeyCode__t = 84,
	sokol__sapp__KeyCode__u = 85,
	sokol__sapp__KeyCode__v = 86,
	sokol__sapp__KeyCode__w = 87,
	sokol__sapp__KeyCode__x = 88,
	sokol__sapp__KeyCode__y = 89,
	sokol__sapp__KeyCode__z = 90,
	sokol__sapp__KeyCode__left_bracket = 91,
	sokol__sapp__KeyCode__backslash = 92,
	sokol__sapp__KeyCode__right_bracket = 93,
	sokol__sapp__KeyCode__grave_accent = 96,
	sokol__sapp__KeyCode__world_1 = 161,
	sokol__sapp__KeyCode__world_2 = 162,
	sokol__sapp__KeyCode__escape = 256,
	sokol__sapp__KeyCode__enter = 257,
	sokol__sapp__KeyCode__tab = 258,
	sokol__sapp__KeyCode__backspace = 259,
	sokol__sapp__KeyCode__insert = 260,
	sokol__sapp__KeyCode__delete = 261,
	sokol__sapp__KeyCode__right = 262,
	sokol__sapp__KeyCode__left = 263,
	sokol__sapp__KeyCode__down = 264,
	sokol__sapp__KeyCode__up = 265,
	sokol__sapp__KeyCode__page_up = 266,
	sokol__sapp__KeyCode__page_down = 267,
	sokol__sapp__KeyCode__home = 268,
	sokol__sapp__KeyCode__end = 269,
	sokol__sapp__KeyCode__caps_lock = 280,
	sokol__sapp__KeyCode__scroll_lock = 281,
	sokol__sapp__KeyCode__num_lock = 282,
	sokol__sapp__KeyCode__print_screen = 283,
	sokol__sapp__KeyCode__pause = 284,
	sokol__sapp__KeyCode__f1 = 290,
	sokol__sapp__KeyCode__f2 = 291,
	sokol__sapp__KeyCode__f3 = 292,
	sokol__sapp__KeyCode__f4 = 293,
	sokol__sapp__KeyCode__f5 = 294,
	sokol__sapp__KeyCode__f6 = 295,
	sokol__sapp__KeyCode__f7 = 296,
	sokol__sapp__KeyCode__f8 = 297,
	sokol__sapp__KeyCode__f9 = 298,
	sokol__sapp__KeyCode__f10 = 299,
	sokol__sapp__KeyCode__f11 = 300,
	sokol__sapp__KeyCode__f12 = 301,
	sokol__sapp__KeyCode__f13 = 302,
	sokol__sapp__KeyCode__f14 = 303,
	sokol__sapp__KeyCode__f15 = 304,
	sokol__sapp__KeyCode__f16 = 305,
	sokol__sapp__KeyCode__f17 = 306,
	sokol__sapp__KeyCode__f18 = 307,
	sokol__sapp__KeyCode__f19 = 308,
	sokol__sapp__KeyCode__f20 = 309,
	sokol__sapp__KeyCode__f21 = 310,
	sokol__sapp__KeyCode__f22 = 311,
	sokol__sapp__KeyCode__f23 = 312,
	sokol__sapp__KeyCode__f24 = 313,
	sokol__sapp__KeyCode__f25 = 314,
	sokol__sapp__KeyCode__kp_0 = 320,
	sokol__sapp__KeyCode__kp_1 = 321,
	sokol__sapp__KeyCode__kp_2 = 322,
	sokol__sapp__KeyCode__kp_3 = 323,
	sokol__sapp__KeyCode__kp_4 = 324,
	sokol__sapp__KeyCode__kp_5 = 325,
	sokol__sapp__KeyCode__kp_6 = 326,
	sokol__sapp__KeyCode__kp_7 = 327,
	sokol__sapp__KeyCode__kp_8 = 328,
	sokol__sapp__KeyCode__kp_9 = 329,
	sokol__sapp__KeyCode__kp_decimal = 330,
	sokol__sapp__KeyCode__kp_divide = 331,
	sokol__sapp__KeyCode__kp_multiply = 332,
	sokol__sapp__KeyCode__kp_subtract = 333,
	sokol__sapp__KeyCode__kp_add = 334,
	sokol__sapp__KeyCode__kp_enter = 335,
	sokol__sapp__KeyCode__kp_equal = 336,
	sokol__sapp__KeyCode__left_shift = 340,
	sokol__sapp__KeyCode__left_control = 341,
	sokol__sapp__KeyCode__left_alt = 342,
	sokol__sapp__KeyCode__left_super = 343,
	sokol__sapp__KeyCode__right_shift = 344,
	sokol__sapp__KeyCode__right_control = 345,
	sokol__sapp__KeyCode__right_alt = 346,
	sokol__sapp__KeyCode__right_super = 347,
	sokol__sapp__KeyCode__menu = 348,
}  sokol__sapp__KeyCode;

typedef enum {
	sokol__sapp__TouchToolType__unknown,
	sokol__sapp__TouchToolType__finger,
	sokol__sapp__TouchToolType__stylus,
	sokol__sapp__TouchToolType__mouse,
	sokol__sapp__TouchToolType__eraser,
	sokol__sapp__TouchToolType__palm,
}  sokol__sapp__TouchToolType;

typedef enum {
	sokol__sgl__SglError__no_error = SGL_NO_ERROR,
	sokol__sgl__SglError__vertices_full = SGL_ERROR_VERTICES_FULL,
	sokol__sgl__SglError__uniforms_full = SGL_ERROR_UNIFORMS_FULL,
	sokol__sgl__SglError__commands_full = SGL_ERROR_COMMANDS_FULL,
	sokol__sgl__SglError__stack_overflow = SGL_ERROR_STACK_OVERFLOW,
	sokol__sgl__SglError__stack_underflow = SGL_ERROR_STACK_UNDERFLOW,
	sokol__sgl__SglError__no_context = SGL_ERROR_NO_CONTEXT,
}  sokol__sgl__SglError;

typedef enum {
	os__font__Variant__normal = 0,
	os__font__Variant__bold,
	os__font__Variant__mono,
	os__font__Variant__italic,
}  os__font__Variant;

typedef enum {
	gg__PaintStyle__fill,
	gg__PaintStyle__stroke,
}  gg__PaintStyle;

typedef enum {
	gg__MouseButton__left = 0,
	gg__MouseButton__right = 1,
	gg__MouseButton__middle = 2,
	gg__MouseButton__invalid = 256,
}  gg__MouseButton;

typedef enum {
	gg__MouseButtons__left = 1U,
	gg__MouseButtons__right = 2U,
	gg__MouseButtons__middle = 4U,
}  gg__MouseButtons;

typedef enum {
	gg__Modifier__shift = 1U,
	gg__Modifier__ctrl = 2U,
	gg__Modifier__alt = 4U,
	gg__Modifier__super = 8U,
}  gg__Modifier;

typedef enum {
	gg__PenLineType__solid,
	gg__PenLineType__dashed,
	gg__PenLineType__dotted,
}  gg__PenLineType;

typedef enum {
	gg__KeyCode__invalid = 0,
	gg__KeyCode__space = 32,
	gg__KeyCode__apostrophe = 39,
	gg__KeyCode__comma = 44,
	gg__KeyCode__minus = 45,
	gg__KeyCode__period = 46,
	gg__KeyCode__slash = 47,
	gg__KeyCode___0 = 48,
	gg__KeyCode___1 = 49,
	gg__KeyCode___2 = 50,
	gg__KeyCode___3 = 51,
	gg__KeyCode___4 = 52,
	gg__KeyCode___5 = 53,
	gg__KeyCode___6 = 54,
	gg__KeyCode___7 = 55,
	gg__KeyCode___8 = 56,
	gg__KeyCode___9 = 57,
	gg__KeyCode__semicolon = 59,
	gg__KeyCode__equal = 61,
	gg__KeyCode__a = 65,
	gg__KeyCode__b = 66,
	gg__KeyCode__c = 67,
	gg__KeyCode__d = 68,
	gg__KeyCode__e = 69,
	gg__KeyCode__f = 70,
	gg__KeyCode__g = 71,
	gg__KeyCode__h = 72,
	gg__KeyCode__i = 73,
	gg__KeyCode__j = 74,
	gg__KeyCode__k = 75,
	gg__KeyCode__l = 76,
	gg__KeyCode__m = 77,
	gg__KeyCode__n = 78,
	gg__KeyCode__o = 79,
	gg__KeyCode__p = 80,
	gg__KeyCode__q = 81,
	gg__KeyCode__r = 82,
	gg__KeyCode__s = 83,
	gg__KeyCode__t = 84,
	gg__KeyCode__u = 85,
	gg__KeyCode__v = 86,
	gg__KeyCode__w = 87,
	gg__KeyCode__x = 88,
	gg__KeyCode__y = 89,
	gg__KeyCode__z = 90,
	gg__KeyCode__left_bracket = 91,
	gg__KeyCode__backslash = 92,
	gg__KeyCode__right_bracket = 93,
	gg__KeyCode__grave_accent = 96,
	gg__KeyCode__world_1 = 161,
	gg__KeyCode__world_2 = 162,
	gg__KeyCode__escape = 256,
	gg__KeyCode__enter = 257,
	gg__KeyCode__tab = 258,
	gg__KeyCode__backspace = 259,
	gg__KeyCode__insert = 260,
	gg__KeyCode__delete = 261,
	gg__KeyCode__right = 262,
	gg__KeyCode__left = 263,
	gg__KeyCode__down = 264,
	gg__KeyCode__up = 265,
	gg__KeyCode__page_up = 266,
	gg__KeyCode__page_down = 267,
	gg__KeyCode__home = 268,
	gg__KeyCode__end = 269,
	gg__KeyCode__caps_lock = 280,
	gg__KeyCode__scroll_lock = 281,
	gg__KeyCode__num_lock = 282,
	gg__KeyCode__print_screen = 283,
	gg__KeyCode__pause = 284,
	gg__KeyCode__f1 = 290,
	gg__KeyCode__f2 = 291,
	gg__KeyCode__f3 = 292,
	gg__KeyCode__f4 = 293,
	gg__KeyCode__f5 = 294,
	gg__KeyCode__f6 = 295,
	gg__KeyCode__f7 = 296,
	gg__KeyCode__f8 = 297,
	gg__KeyCode__f9 = 298,
	gg__KeyCode__f10 = 299,
	gg__KeyCode__f11 = 300,
	gg__KeyCode__f12 = 301,
	gg__KeyCode__f13 = 302,
	gg__KeyCode__f14 = 303,
	gg__KeyCode__f15 = 304,
	gg__KeyCode__f16 = 305,
	gg__KeyCode__f17 = 306,
	gg__KeyCode__f18 = 307,
	gg__KeyCode__f19 = 308,
	gg__KeyCode__f20 = 309,
	gg__KeyCode__f21 = 310,
	gg__KeyCode__f22 = 311,
	gg__KeyCode__f23 = 312,
	gg__KeyCode__f24 = 313,
	gg__KeyCode__f25 = 314,
	gg__KeyCode__kp_0 = 320,
	gg__KeyCode__kp_1 = 321,
	gg__KeyCode__kp_2 = 322,
	gg__KeyCode__kp_3 = 323,
	gg__KeyCode__kp_4 = 324,
	gg__KeyCode__kp_5 = 325,
	gg__KeyCode__kp_6 = 326,
	gg__KeyCode__kp_7 = 327,
	gg__KeyCode__kp_8 = 328,
	gg__KeyCode__kp_9 = 329,
	gg__KeyCode__kp_decimal = 330,
	gg__KeyCode__kp_divide = 331,
	gg__KeyCode__kp_multiply = 332,
	gg__KeyCode__kp_subtract = 333,
	gg__KeyCode__kp_add = 334,
	gg__KeyCode__kp_enter = 335,
	gg__KeyCode__kp_equal = 336,
	gg__KeyCode__left_shift = 340,
	gg__KeyCode__left_control = 341,
	gg__KeyCode__left_alt = 342,
	gg__KeyCode__left_super = 343,
	gg__KeyCode__right_shift = 344,
	gg__KeyCode__right_control = 345,
	gg__KeyCode__right_alt = 346,
	gg__KeyCode__right_super = 347,
	gg__KeyCode__menu = 348,
}  gg__KeyCode;

typedef enum {
	gg__EndEnum__clear,
	gg__EndEnum__passthru,
}  gg__EndEnum;

typedef enum {
	gg__ImageEffect__alpha,
	gg__ImageEffect__add,
}  gg__ImageEffect;

// Thread definitions:
typedef pthread_t __v_thread;

// V type definitions:
struct IError {
	union {
		void* _object;
		None__* _None__;
		voidptr* _voidptr;
		Error* _Error;
		MessageError* _MessageError;
		time__TimeParseError* _time__TimeParseError;
		os__Eof* _os__Eof;
		os__NotExpected* _os__NotExpected;
		os__FileNotOpenedError* _os__FileNotOpenedError;
		os__SizeOfTypeIs0Error* _os__SizeOfTypeIs0Error;
		os__ExecutableNotFoundError* _os__ExecutableNotFoundError;
	};
	int _typ;
};

struct string {
	u8* str;
	int len;
	int is_lit;
};

struct array {
	voidptr data;
	int offset;
	int len;
	int cap;
	ArrayFlags flags;
	int element_size;
};

struct DenseArray {
	int key_bytes;
	int value_bytes;
	int cap;
	int len;
	u32 deletes;
	u8* all_deleted;
	u8* keys;
	u8* values;
};

struct map {
	int key_bytes;
	int value_bytes;
	u32 even_index;
	u8 cached_hashbits;
	u8 shift;
	DenseArray key_values;
	u32* metas;
	u32 extra_metas;
	bool has_string_keys;
	MapHashFn hash_fn;
	MapEqFn key_eq_fn;
	MapCloneFn clone_fn;
	MapFreeFn free_fn;
	int len;
};

struct Error {
	EMPTY_STRUCT_DECLARATION;
};

struct _option {
	u8 state;
	IError err;
};

struct _result {
	bool is_error;
	IError err;
};
typedef array Array_string;
typedef array Array_u8;
typedef array Array_voidptr;
typedef array Array_VCastTypeIndexName;
typedef array Array_MethodParam;
typedef array Array_int;
typedef array Array_rune;
typedef string Array_fixed_string_11 [11];
typedef voidptr Array_fixed_voidptr_11 [11];
typedef array Array_RepIndex;
typedef map Map_string_int;
typedef array Array_bool;
typedef array Array_f32;
typedef array Array_gg__Image;
typedef bool Array_fixed_bool_512 [512];
typedef array Array_u64;
typedef int Array_fixed_int_8 [8];
typedef u32 Array_fixed_u32_2 [2];
typedef voidptr Array_fixed_voidptr_2 [2];
typedef f32 Array_fixed_f32_16 [16];
typedef array Array_f64;
typedef array Array_math__BezierPoint;
typedef f64 Array_fixed_f64_4 [4];
typedef map Map_string_string;
typedef array Array_char_ptr;
typedef int Array_fixed_int_3 [3];
typedef array Array_os__Signal;
typedef char Array_fixed_char_256 [256];
typedef u8 Array_fixed_u8_5 [5];
typedef u8 Array_fixed_u8_25 [25];
typedef u8 Array_fixed_u8_32 [32];
typedef u8 Array_fixed_u8_64 [64];
typedef u8 Array_fixed_u8_256 [256];
typedef u64 Array_fixed_u64_309 [309];
typedef u64 Array_fixed_u64_324 [324];
typedef u32 Array_fixed_u32_10 [10];
typedef u64 Array_fixed_u64_20 [20];
typedef u64 Array_fixed_u64_584 [584];
typedef u64 Array_fixed_u64_652 [652];
typedef f64 Array_fixed_f64_36 [36];
typedef u8 Array_fixed_u8_26 [26];
typedef u8 Array_fixed_u8_512 [512];
typedef u64 Array_fixed_u64_18 [18];
typedef u64 Array_fixed_u64_47 [47];
typedef u64 Array_fixed_u64_31 [31];
typedef voidptr Array_fixed_voidptr_100 [100];
typedef u8 Array_fixed_u8_17 [17];
typedef i32 Array_fixed_i32_1264 [1264];
typedef array Array_MapMode;
typedef int Array_fixed_int_10 [10];
typedef int Array_fixed_int_20 [20];
typedef array Array_TrimMode;
typedef array Array_StrIntpType;
typedef string Array_fixed_string_7 [7];
typedef map Map_string_i64;
typedef u8 Array_fixed_u8_10 [10];
typedef u8 Array_fixed_u8_8 [8];
typedef char Array_fixed_char_1024 [1024];
typedef int Array_fixed_int_12 [12];
typedef int Array_fixed_int_13 [13];
typedef map Map_string_gx__Color;
typedef u8 Array_fixed_u8_4096 [4096];
typedef u8 Array_fixed_u8_1024 [1024];
typedef array Array_os__ProcessState;
typedef int Array_fixed_int_6 [6];
typedef int Array_fixed_int_17 [17];
typedef array Array_sokol__sapp__EventType;
typedef f32 Array_fixed_f32_4 [4];
#define C__intptr_t intptr_t
typedef Array_u8 strings__Builder;
typedef sgl_pipeline sokol__sgl__Pipeline;
typedef struct sg_image sokol__gfx__Image;
typedef struct sg_sampler sokol__gfx__Sampler;
typedef struct sg_image_desc sokol__gfx__ImageDesc;
typedef struct sg_range sokol__gfx__Range;
typedef struct sg_sampler_desc sokol__gfx__SamplerDesc;
typedef struct sg_image_data sokol__gfx__ImageData;
typedef sgl_desc_t sokol__sgl__Desc;
typedef struct sg_pipeline_desc sokol__gfx__PipelineDesc;
typedef struct sg_color_target_state sokol__gfx__ColorTargetState;
typedef struct sg_blend_state sokol__gfx__BlendState;
typedef struct sg_depth_state sokol__gfx__DepthState;
typedef gx__Color gg__Color;
typedef sapp_touchpoint gg__TouchPoint;
typedef sapp_icon_desc sokol__sapp__IconDesc;
typedef struct sg_pass_action sokol__gfx__PassAction;
typedef sapp_desc sokol__sapp__Desc;
typedef struct sg_color_attachment_action sokol__gfx__ColorAttachmentAction;
typedef struct sg_color sokol__gfx__Color;
typedef sg_pass sokol__gfx__Pass;
typedef struct FONScontext fontstash__Context;
typedef struct sg_desc sokol__gfx__Desc;
typedef sg_environment sokol__gfx__Environment;
typedef sg_swapchain sokol__gfx__Swapchain;
typedef sapp_range sokol__sapp__Range;
typedef sapp_image_desc sokol__sapp__ImageDesc;
typedef sapp_event sokol__sapp__Event;
typedef sapp_touchpoint sokol__sapp__TouchPoint;
typedef struct sg_buffer_desc sokol__gfx__BufferDesc;
typedef struct sg_buffer sokol__gfx__Buffer;
typedef struct sg_shader_desc sokol__gfx__ShaderDesc;
typedef struct sg_shader sokol__gfx__Shader;
typedef struct sg_pipeline sokol__gfx__Pipeline;
typedef struct sg_attachments_desc sokol__gfx__AttachmentsDesc;
typedef struct sg_attachments sokol__gfx__Attachments;
typedef struct sg_bindings sokol__gfx__Bindings;
typedef struct sg_features sokol__gfx__Features;
typedef struct sg_limits sokol__gfx__Limits;
typedef struct sg_pixelformat_info sokol__gfx__PixelFormatInfo;
typedef struct sg_buffer_info sokol__gfx__BufferInfo;
typedef struct sg_image_info sokol__gfx__ImageInfo;
typedef struct sg_shader_info sokol__gfx__ShaderInfo;
typedef struct sg_pipeline_info sokol__gfx__PipelineInfo;
typedef struct sg_attachments_info sokol__gfx__AttachmentsInfo;
typedef sg_frame_stats sokol__gfx__FrameStats;
typedef struct sg_vertex_layout_state sokol__gfx__VertexLayoutState;
typedef struct sg_stencil_state sokol__gfx__StencilState;
typedef struct sg_slot_info sokol__gfx__SlotInfo;
typedef struct sg_attachment_desc sokol__gfx__AttachmentDesc;
typedef struct sg_stage_bindings sokol__gfx__StageBindings;
typedef struct sg_shader_attr_desc sokol__gfx__ShaderAttrDesc;
typedef struct sg_shader_stage_desc sokol__gfx__ShaderStageDesc;
typedef struct sg_shader_uniform_block_desc sokol__gfx__ShaderUniformBlockDesc;
typedef struct sg_shader_storage_buffer_desc sokol__gfx__ShaderStorageBufferDesc;
typedef struct sg_shader_image_desc sokol__gfx__ShaderImageDesc;
typedef struct sg_shader_sampler_desc sokol__gfx__ShaderSamplerDesc;
typedef struct sg_shader_image_sampler_pair_desc sokol__gfx__ShaderImageSamplerPairDesc;
typedef struct sg_shader_uniform_desc sokol__gfx__ShaderUniformDesc;
typedef sg_frame_stats_gl sokol__gfx__FrameStatsGL;
typedef sg_frame_stats_d3d11_pass sokol__gfx__FrameStatsD3D11Pass;
typedef sg_frame_stats_d3d11_pipeline sokol__gfx__FrameStatsD3D11Pipeline;
typedef sg_frame_stats_d3d11_bindings sokol__gfx__FrameStatsD3D11Bindings;
typedef sg_frame_stats_d3d11_uniforms sokol__gfx__FrameStatsD3D11Uniforms;
typedef sg_frame_stats_d3d11_draw sokol__gfx__FrameStatsD3D11Draw;
typedef sg_frame_stats_d3d11 sokol__gfx__FrameStatsD3D11;
typedef sg_frame_stats_metal_idpool sokol__gfx__FrameStatsMetalIdpool;
typedef sg_frame_stats_metal_pipeline sokol__gfx__FrameStatsMetalPipeline;
typedef sg_frame_stats_metal_bindings sokol__gfx__FrameStatsMetalBindings;
typedef sg_frame_stats_metal_uniforms sokol__gfx__FrameStatsMetalUniforms;
typedef sg_frame_stats_metal sokol__gfx__FrameStatsMetal;
typedef sg_frame_stats_wgpu_uniforms sokol__gfx__FrameStatsWGPUUniforms;
typedef sg_frame_stats_wgpu_bindings sokol__gfx__FrameStatsWGPUBindings;
typedef sg_frame_stats_wgpu sokol__gfx__FrameStatsWGPU;
typedef struct sg_depth_attachment_action sokol__gfx__DepthAttachmentAction;
typedef struct sg_stencil_attachment_action sokol__gfx__StencilAttachmentAction;
typedef sg_metal_swapchain sokol__gfx__MetalSwapchain;
typedef sg_d3d11_swapchain sokol__gfx__D3d11Swapchain;
typedef sg_wgpu_swapchain sokol__gfx__WgpuSwapchain;
typedef sg_gl_swapchain sokol__gfx__GlSwapchain;
typedef struct sg_vertex_buffer_layout_state sokol__gfx__VertexBufferLayoutState;
typedef struct sg_vertex_attr_state sokol__gfx__VertexAttrDesc;
typedef struct sg_stencil_face_state sokol__gfx__StencilFaceState;
typedef sg_environment_defaults sokol__gfx__EnvironmentDefaults;
typedef sg_metal_environment sokol__gfx__MetalEnvironment;
typedef sg_d3d11_environment sokol__gfx__D3d11Environment;
typedef sg_wgpu_environment sokol__gfx__WgpuEnvironment;
typedef struct sg_commit_listener sokol__gfx__CommitListener;
typedef sgl_context sokol__sgl__Context;
typedef sgl_context_desc_t sokol__sgl__ContextDesc;
typedef i64 time__Duration;
#define C__time_t time_t
typedef usize term__termios__TcFlag;
typedef usize term__termios__Speed;
typedef u8 term__termios__Cc;
typedef bool (*anon_fn_voidptr__bool)(voidptr);
typedef voidptr (*anon_fn_voidptr__voidptr)(voidptr);
typedef int (*anon_fn_voidptr_voidptr__int)(voidptr,voidptr);
typedef void (*FnExitCb)();
typedef void (*FnGC_WarnCB)(char*,usize);
typedef int (*FnSortCB)(voidptr,voidptr);
typedef void (*gg__FNCb)(voidptr);
typedef void (*gg__FNFail)(string,voidptr);
typedef void (*gg__FNEvent)(gg__Event*,voidptr);
typedef void (*gg__FNEvent2)(voidptr,gg__Event*);
typedef void (*gg__FNKeyDown)(gg__KeyCode,gg__Modifier,voidptr);
typedef void (*gg__FNKeyUp)(gg__KeyCode,gg__Modifier,voidptr);
typedef void (*gg__FNChar)(u32,voidptr);
typedef void (*gg__FNMove)(f32,f32,voidptr);
typedef void (*gg__FNClick)(f32,f32,gg__MouseButton,voidptr);
typedef void (*gg__FNUnClick)(f32,f32,gg__MouseButton,voidptr);
typedef voidptr (*sokol__memory__FnAllocatorAlloc)(usize,voidptr);
typedef void (*sokol__memory__FnAllocatorFree)(voidptr,voidptr);
typedef void (*sokol__memory__FnLogCb)(char*,u32,u32,char*,u32,char*,voidptr);
typedef void (*anon_fn_)();
typedef void (*anon_fn_sokol__sapp__event)(sokol__sapp__Event*);
typedef void (*anon_fn_voidptr)(voidptr);
typedef void (*anon_fn_sokol__sapp__event_voidptr)(sokol__sapp__Event*,voidptr);
typedef void (*anon_fn_string)(string);
typedef void (*os__FnWalkContextCB)(voidptr,string);
typedef void (*os__SignalHandler)(os__Signal);
typedef void (*os__FN_SA_Handler)(int);
typedef void (*anon_fn_voidptr_int_int)(voidptr,int,int);
typedef int (*anon_fn_voidptr_int_int__int)(voidptr,int,int);
typedef void (*anon_fn_voidptr_int_u8)(voidptr,int*,u8*);
typedef void (*anon_fn_voidptr_f32_f32_u32_int)(voidptr,f32*,f32*,u32*,int);
// #start sorted_symbols
struct none {
	EMPTY_STRUCT_DECLARATION;
};

struct None__ {
	Error Error;
};

struct StrIntpCgenData {
	string str;
	string fmt;
	string d;
};

struct os__Eof {
	Error Error;
};

struct os__FileNotOpenedError {
	Error Error;
};

struct os__SizeOfTypeIs0Error {
	Error Error;
};

struct os__ExecutableNotFoundError {
	Error Error;
};

struct os__Uname {
	string sysname;
	string nodename;
	string release;
	string version;
	string machine;
};

struct GCHeapUsage {
	usize heap_size;
	usize free_bytes;
	usize total_bytes;
	usize unmapped_bytes;
	usize bytes_since_gc;
};

struct VCastTypeIndexName {
	int tindex;
	string tname;
};

struct VAssertMetaInfo {
	string fpath;
	int line_nr;
	string fn_name;
	string src;
	string op;
	string llabel;
	string rlabel;
	string lvalue;
	string rvalue;
	string message;
	bool has_msg;
};

struct MethodParam {
	int typ;
	string name;
};

struct FunctionData {
	string name;
	Array_string attrs;
	Array_MethodParam args;
	int return_type;
	int typ;
};

struct VariantData {
	int typ;
};

struct EnumData {
	string name;
	i64 value;
	Array_string attrs;
};

struct FieldData {
	string name;
	int typ;
	int unaliased_typ;
	Array_string attrs;
	bool is_pub;
	bool is_mut;
	bool is_shared;
	bool is_atomic;
	bool is_option;
	bool is_array;
	bool is_map;
	bool is_chan;
	bool is_enum;
	bool is_struct;
	bool is_alias;
	u8 indirections;
};

struct VAttribute {
	string name;
	bool has_arg;
	string arg;
	AttributeKind kind;
};

union strconv__Float64u {
	f64 f;
	u64 u;
};

union strconv__Float32u {
	f32 f;
	u32 u;
};

struct VContext {
	int allocator;
};

struct Option {
	u8 state;
	IError err;
};

struct MessageError {
	string msg;
	int code;
};

struct SortedMap {
	int value_bytes;
	mapnode* root;
	int len;
};

struct RepIndex {
	int idx;
	int val_idx;
};

struct WrapConfig {
	int width;
	string end;
};

struct RunesIterator {
	string s;
	int i;
};

union StrIntpMem {
	u32 d_c;
	u8 d_u8;
	i8 d_i8;
	u16 d_u16;
	i16 d_i16;
	u32 d_u32;
	int d_i32;
	u64 d_u64;
	i64 d_i64;
	f32 d_f32;
	f64 d_f64;
	string d_s;
	string d_r;
	voidptr d_p;
	voidptr d_vp;
};

struct strconv__BF_param {
	u8 pad_ch;
	int len0;
	int len1;
	bool positive;
	bool sign_flag;
	strconv__Align_text align;
	bool rm_tail_zero;
};

struct time__Time {
	i64 __v_unix;
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	int nanosecond;
	bool is_local;
};

struct strconv__PrepNumber {
	bool negative;
	int exponent;
	u64 mantissa;
};

struct strconv__AtoF64Param {
	bool allow_extra_chars;
};

struct strconv__Dec32 {
	u32 m;
	int e;
};

union strconv__Uf32 {
	f32 f;
	u32 u;
};

struct strconv__Dec64 {
	u64 m;
	int e;
};

struct strconv__Uint128 {
	u64 lo;
	u64 hi;
};

union strconv__Uf64 {
	f64 f;
	u64 u;
};

struct gg__DrawPixelConfig {
	f32 size;
};

struct gx__Color {
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

struct gg__FT {
	fontstash__Context* fons;
	int font_normal;
	int font_bold;
	int font_mono;
	int font_italic;
	Map_string_int fonts_map;
	f32 scale;
};

struct time__StopWatch {
	u64 elapsed;
	u64 start;
	u64 end;
};

struct gg__EndOptions {
	gg__EndEnum how;
};

struct gg__Size {
	int width;
	int height;
};

struct gg__Rect {
	f32 x;
	f32 y;
	f32 width;
	f32 height;
};

struct gg__StreamingImageConfig {
	sokol__gfx__PixelFormat pixel_format;
	sokol__gfx__Wrap wrap_u;
	sokol__gfx__Wrap wrap_v;
	sokol__gfx__Filter min_filter;
	sokol__gfx__Filter mag_filter;
	int num_mipmaps;
	int num_slices;
};

struct gg__SSRecorderSettings {
	i64 stop_at_frame;
	Array_u64 screenshot_frames;
	string screenshot_folder;
	string screenshot_prefix;
};

struct gg__FTConfig {
	string font_path;
	string custom_bold_font_path;
	f32 scale;
	int font_size;
	Array_u8 bytes_normal;
	Array_u8 bytes_bold;
	Array_u8 bytes_mono;
	Array_u8 bytes_italic;
};

struct gx__Image {
	voidptr obj;
	int id;
	int width;
	int height;
};

struct sokol__sapp__Screenshot {
	int width;
	int height;
	int size;
	u8* pixels;
};

struct time__DateTimeParser {
	string datetime;
	string format;
	int current_pos_datetime;
};

struct time__TimeParseError {
	Error Error;
	int code;
	string message;
};

struct time__StopWatchOptions {
	bool auto_start;
};

struct time__InternalTimeBase {
	u32 numer;
	u32 denom;
};

struct math__BezierPoint {
	f64 x;
	f64 y;
};

struct math__DigitParams {
	int base;
	bool reverse;
};

struct math__ChebSeries {
	Array_f64 c;
	int order;
	f64 a;
	f64 b;
};

union math__U32_F32 {
	u32 u;
	f32 f;
};

union math__U64_F64 {
	u64 u;
	f64 f;
};

struct os__NotExpected {
	string cause;
	int code;
};

struct os__File {
	voidptr cfile;
	int fd;
	bool is_opened;
};

struct os__FilePermission {
	bool read;
	bool write;
	bool execute;
};

struct os__Stat {
	u64 dev;
	u64 inode;
	u32 mode;
	u64 nlink;
	u32 uid;
	u32 gid;
	u64 rdev;
	u64 size;
	i64 atime;
	i64 mtime;
	i64 ctime;
};

struct os__PathKind {
	bool is_file;
	bool is_dir;
	bool is_link;
};

struct os__SystemError {
	string msg;
	int code;
};

struct os__DiskUsage {
	u64 total;
	u64 available;
	u64 used;
};

struct os__Result {
	int exit_code;
	string output;
};

struct os__Command {
	voidptr f;
	bool eof;
	int exit_code;
	string path;
	bool redirect_stdout;
};

struct os__MvParams {
	bool overwrite;
};

struct os__WalkParams {
	bool hidden;
};

struct os__MkdirParams {
	u32 mode;
};

struct stbi__Image {
	int width;
	int height;
	int nr_channels;
	bool ok;
	u8* data;
	string ext;
	int original_nr_channels;
};

struct stbi__LoadParams {
	int desired_channels;
};

struct strings__textscanner__TextScanner {
	string input;
	int ilen;
	int pos;
};
typedef term__termios__Cc Array_fixed_term__termios__Cc_20 [20];

struct mapnode {
	voidptr* children;
	int len;
	Array_fixed_string_11 keys;
	Array_fixed_voidptr_11 values;
};

struct StrIntpData {
	string str;
	u32 fmt;
	StrIntpMem d;
};

struct main__App {
	gg__Context* gg;
	sokol__sgl__Pipeline pip_3d;
	sokol__gfx__Image texture;
	sokol__gfx__Sampler sampler;
	bool init_flag;
	int frame_count;
	int mouse_x;
	int mouse_y;
	time__Time last_time;
};

struct gg__PenConfig {
	gx__Color color;
	gg__PenLineType line_type;
	f32 thickness;
};

struct gg__DrawRectParams {
	f32 x;
	f32 y;
	f32 w;
	f32 h;
	gx__Color color;
	gg__PaintStyle style;
	bool is_rounded;
	f32 radius;
};
typedef gg__TouchPoint Array_fixed_gg__TouchPoint_8 [8];

struct gg__PipelineContainer {
	sokol__sgl__Pipeline alpha;
	sokol__sgl__Pipeline add;
};

struct gg__Image {
	int id;
	int width;
	int height;
	int nr_channels;
	bool ok;
	voidptr data;
	string ext;
	bool simg_ok;
	sokol__gfx__Image simg;
	sokol__gfx__Sampler ssmp;
	string path;
};

struct gx__TextCfg {
	gx__Color color;
	int size;
	gx__HorizontalAlign align;
	gx__VerticalAlign vertical_align;
	int max_width;
	string family;
	bool bold;
	bool mono;
	bool italic;
};

struct gg__DrawImageConfig {
	bool flip_x;
	bool flip_y;
	gg__Image* img;
	int img_id;
	gg__Rect img_rect;
	gg__Rect part_rect;
	f32 z;
	gx__Color color;
	gg__ImageEffect effect;
	f32 rotation;
};

struct gg__DrawTextParams {
	int x;
	int y;
	string text;
	gg__Color color;
	int size;
	gx__HorizontalAlign align;
	gx__VerticalAlign vertical_align;
	int max_width;
	string family;
	bool bold;
	bool mono;
	bool italic;
};
typedef sokol__sapp__TouchPoint Array_fixed_sokol__sapp__TouchPoint_8 [8];
typedef sokol__gfx__Buffer Array_fixed_sokol__gfx__Buffer_8 [8];
typedef sokol__gfx__Image Array_fixed_sokol__gfx__Image_12 [12];
typedef sokol__gfx__Sampler Array_fixed_sokol__gfx__Sampler_8 [8];
typedef sokol__gfx__ShaderAttrDesc Array_fixed_sokol__gfx__ShaderAttrDesc_16 [16];
typedef sokol__gfx__ShaderStorageBufferDesc Array_fixed_sokol__gfx__ShaderStorageBufferDesc_8 [8];
typedef sokol__gfx__ShaderImageDesc Array_fixed_sokol__gfx__ShaderImageDesc_12 [12];
typedef sokol__gfx__ShaderSamplerDesc Array_fixed_sokol__gfx__ShaderSamplerDesc_8 [8];
typedef sokol__gfx__ShaderImageSamplerPairDesc Array_fixed_sokol__gfx__ShaderImageSamplerPairDesc_12 [12];
typedef sokol__gfx__ShaderUniformDesc Array_fixed_sokol__gfx__ShaderUniformDesc_16 [16];
typedef sokol__gfx__Range Array_fixed_sokol__gfx__Range_16 [16];
typedef sokol__gfx__VertexBufferLayoutState Array_fixed_sokol__gfx__VertexBufferLayoutState_8 [8];
typedef sokol__gfx__VertexAttrDesc Array_fixed_sokol__gfx__VertexAttrDesc_16 [16];

struct os__FileMode {
	os__FileType typ;
	os__FilePermission owner;
	os__FilePermission group;
	os__FilePermission others;
};

struct term__termios__Termios {
	term__termios__TcFlag c_iflag;
	term__termios__TcFlag c_oflag;
	term__termios__TcFlag c_cflag;
	term__termios__TcFlag c_lflag;
	Array_fixed_term__termios__Cc_20 c_cc;
	term__termios__Speed c_ispeed;
	term__termios__Speed c_ospeed;
};

struct os__Process {
	string filename;
	int pid;
	int code;
	os__ProcessState status;
	string err;
	Array_string args;
	string work_folder;
	bool env_is_custom;
	Array_string env;
	bool use_stdio_ctl;
	bool use_pgroup;
	Array_fixed_int_3 stdio_fd;
	voidptr wdata;
	bool create_no_window;
};

struct gg__Event {
	u64 frame_count;
	sokol__sapp__EventType typ;
	gg__KeyCode key_code;
	u32 char_code;
	bool key_repeat;
	u32 modifiers;
	gg__MouseButton mouse_button;
	f32 mouse_x;
	f32 mouse_y;
	f32 mouse_dx;
	f32 mouse_dy;
	f32 scroll_x;
	f32 scroll_y;
	int num_touches;
	Array_fixed_gg__TouchPoint_8 touches;
	int window_width;
	int window_height;
	int framebuffer_width;
	int framebuffer_height;
};

struct gg__FPSConfig {
	int x;
	int y;
	int width;
	int height;
	bool show;
	gx__TextCfg text_config;
	gx__Color background_color;
};

struct gg__StringToRender {
	int x;
	int y;
	string text;
	gx__TextCfg cfg;
};
typedef sokol__sapp__ImageDesc Array_fixed_sokol__sapp__ImageDesc_8 [8];
typedef sokol__gfx__ColorTargetState Array_fixed_sokol__gfx__ColorTargetState_4 [4];
typedef sokol__gfx__AttachmentDesc Array_fixed_sokol__gfx__AttachmentDesc_4 [4];
typedef sokol__gfx__ColorAttachmentAction Array_fixed_sokol__gfx__ColorAttachmentAction_4 [4];
typedef Array_fixed_sokol__gfx__Range_16 Array_fixed_Array_fixed_sokol__gfx__Range_16_6 [6];

struct os__FileInfo {
	os__FileMode FileMode;
	u64 size;
	i64 mtime;
};
typedef sokol__gfx__ShaderUniformBlockDesc Array_fixed_sokol__gfx__ShaderUniformBlockDesc_4 [4];

struct gg__Config {
	int width;
	int height;
	bool retina;
	bool resizable;
	voidptr user_data;
	int font_size;
	bool create_window;
	string window_title;
	sokol__sapp__IconDesc icon;
	string html5_canvas_name;
	bool borderless_window;
	bool always_on_top;
	gx__Color bg_color;
	gg__FNCb init_fn;
	gg__FNCb frame_fn;
	gg__FNCb native_frame_fn;
	gg__FNCb cleanup_fn;
	gg__FNFail fail_fn;
	gg__FNEvent event_fn;
	gg__FNEvent2 on_event;
	gg__FNEvent quit_fn;
	gg__FNKeyDown keydown_fn;
	gg__FNKeyUp keyup_fn;
	gg__FNChar char_fn;
	gg__FNMove move_fn;
	gg__FNClick click_fn;
	gg__FNUnClick unclick_fn;
	gg__FNEvent leave_fn;
	gg__FNEvent enter_fn;
	gg__FNEvent resized_fn;
	gg__FNEvent scroll_fn;
	bool fullscreen;
	f32 scale;
	int sample_count;
	int swap_interval;
	string font_path;
	string custom_bold_font_path;
	bool ui_mode;
	Array_u8 font_bytes_normal;
	Array_u8 font_bytes_bold;
	Array_u8 font_bytes_mono;
	Array_u8 font_bytes_italic;
	bool native_rendering;
	bool enable_dragndrop;
	int max_dropped_files;
	int max_dropped_file_path_length;
	int min_width;
	int min_height;
};

struct gg__Context {
	bool render_text;
	Array_gg__Image image_cache;
	bool needs_refresh;
	int ticks;
	bool native_rendering;
	f32 scale;
	int width;
	int height;
	sokol__gfx__PassAction clear_pass;
	sokol__sapp__Desc window;
	gg__PipelineContainer* pipeline;
	gg__Config config;
	voidptr user_data;
	gg__FT* ft;
	bool font_inited;
	bool ui_mode;
	u64 frame;
	time__StopWatch timer;
	u8 mbtn_mask;
	gg__MouseButtons mouse_buttons;
	int mouse_pos_x;
	int mouse_pos_y;
	int mouse_dx;
	int mouse_dy;
	int scroll_x;
	int scroll_y;
	gg__Modifier key_modifiers;
	bool key_repeat;
	Array_fixed_bool_512 pressed_keys;
	Array_fixed_bool_512 pressed_keys_edge;
	gg__FPSConfig fps;
};
// #end sorted_symbols

// BEGIN_multi_return_structs
struct multi_return_u32_u32 {
	u32 arg0;
	u32 arg1;
};

struct multi_return_string_string {
	string arg0;
	string arg1;
};

struct multi_return_int_int {
	int arg0;
	int arg1;
};

struct multi_return_sokol__gfx__Image_sokol__gfx__Sampler {
	sokol__gfx__Image arg0;
	sokol__gfx__Sampler arg1;
};

struct multi_return_u32_u32_u32 {
	u32 arg0;
	u32 arg1;
	u32 arg2;
};

struct multi_return_strconv__ParserState_strconv__PrepNumber {
	strconv__ParserState arg0;
	strconv__PrepNumber arg1;
};

struct multi_return_u64_int {
	u64 arg0;
	int arg1;
};

struct multi_return_i64_int {
	i64 arg0;
	int arg1;
};

struct multi_return_strconv__Dec32_bool {
	strconv__Dec32 arg0;
	bool arg1;
};

struct multi_return_strconv__Dec64_bool {
	strconv__Dec64 arg0;
	bool arg1;
};

struct multi_return_int_int_int_int {
	int arg0;
	int arg1;
	int arg2;
	int arg3;
};

struct multi_return_int_int_int {
	int arg0;
	int arg1;
	int arg2;
};

struct multi_return_int_int_int_int_int_i64_bool {
	int arg0;
	int arg1;
	int arg2;
	int arg3;
	int arg4;
	i64 arg5;
	bool arg6;
};

struct multi_return_u64_u64 {
	u64 arg0;
	u64 arg1;
};

struct multi_return_f64_int {
	f64 arg0;
	int arg1;
};

struct multi_return_i64_i64_i64 {
	i64 arg0;
	i64 arg1;
	i64 arg2;
};

struct multi_return_f64_f64 {
	f64 arg0;
	f64 arg1;
};

struct multi_return_string_int {
	string arg0;
	int arg1;
};

struct multi_return_int_bool {
	int arg0;
	bool arg1;
};

struct multi_return_string_string_string {
	string arg0;
	string arg1;
	string arg2;
};

// END_multi_return_structs

static bool Array_u8_contains(Array_u8 a, u8 v);

// V Option_xxx definitions:
struct _option_string {
	byte state;
	IError err;
	byte data[sizeof(string) > 1 ? sizeof(string) : 1];
};

struct _option_u8 {
	byte state;
	IError err;
	byte data[sizeof(u8) > 1 ? sizeof(u8) : 1];
};

struct _option_gg__FT_ptr {
	byte state;
	IError err;
	byte data[sizeof(gg__FT*) > 1 ? sizeof(gg__FT*) : 1];
};


// V result_xxx definitions:
struct _result_int {
	bool is_error;
	IError err;
	byte data[sizeof(int) > 1 ? sizeof(int) : 1];
};

struct _result_string {
	bool is_error;
	IError err;
	byte data[sizeof(string) > 1 ? sizeof(string) : 1];
};

struct _result_void {
	bool is_error;
	IError err;
	byte data[sizeof(u8) > 1 ? sizeof(u8) : 1];
};

struct _result_sokol__gfx__PixelFormat {
	bool is_error;
	IError err;
	byte data[sizeof(sokol__gfx__PixelFormat) > 1 ? sizeof(sokol__gfx__PixelFormat) : 1];
};

struct _result_Array_u8 {
	bool is_error;
	IError err;
	byte data[sizeof(Array_u8) > 1 ? sizeof(Array_u8) : 1];
};

struct _result_FILE_ptr {
	bool is_error;
	IError err;
	byte data[sizeof(FILE*) > 1 ? sizeof(FILE*) : 1];
};

struct _result_strings__Builder {
	bool is_error;
	IError err;
	byte data[sizeof(strings__Builder) > 1 ? sizeof(strings__Builder) : 1];
};

struct _result_os__Stat {
	bool is_error;
	IError err;
	byte data[sizeof(os__Stat) > 1 ? sizeof(os__Stat) : 1];
};


// V definitions:
static char * v_typeof_interface_IError(int sidx);
int v_typeof_interface_idx_IError(int sidx);
// end of definitions #endif
strings__Builder strings__new_builder(int initial_size);
Array_u8 strings__Builder_reuse_as_plain_u8_array(strings__Builder* b);
void strings__Builder_write_ptr(strings__Builder* b, u8* ptr, int len);
void strings__Builder_write_rune(strings__Builder* b, rune r);
void strings__Builder_write_runes(strings__Builder* b, Array_rune runes);
void strings__Builder_write_u8(strings__Builder* b, u8 data);
void strings__Builder_write_byte(strings__Builder* b, u8 data);
void strings__Builder_write_decimal(strings__Builder* b, i64 n);
_result_int strings__Builder_write(strings__Builder* b, Array_u8 data);
void strings__Builder_drain_builder(strings__Builder* b, strings__Builder* other, int other_new_cap);
u8 strings__Builder_byte_at(strings__Builder* b, int n);
void strings__Builder_write_string(strings__Builder* b, string s);
void strings__Builder_write_string2(strings__Builder* b, string s1, string s2);
void strings__Builder_go_back(strings__Builder* b, int n);
string strings__Builder_spart(strings__Builder* b, int start_pos, int n);
string strings__Builder_cut_last(strings__Builder* b, int n);
string strings__Builder_cut_to(strings__Builder* b, int pos);
void strings__Builder_go_back_to(strings__Builder* b, int pos);
void strings__Builder_writeln(strings__Builder* b, string s);
void strings__Builder_writeln2(strings__Builder* b, string s1, string s2);
string strings__Builder_last_n(strings__Builder* b, int n);
string strings__Builder_after(strings__Builder* b, int n);
string strings__Builder_str(strings__Builder* b);
void strings__Builder_ensure_cap(strings__Builder* b, int n);
void strings__Builder_grow_len(strings__Builder* b, int n);
void strings__Builder_free(strings__Builder* b);
int math__bits__trailing_zeros_32(u32 x);
int math__bits__trailing_zeros_64(u64 x);
multi_return_u64_u64 math__bits__mul_64(u64 x, u64 y);
string strconv__Dec32_get_string_32(strconv__Dec32 d, bool neg, int i_n_digit, int i_pad_digit);
VV_LOC multi_return_strconv__Dec32_bool strconv__f32_to_decimal_exact_int(u32 i_mant, u32 exp);
VV_LOC strconv__Dec32 strconv__f32_to_decimal(u32 mant, u32 exp);
string strconv__f32_to_str(f32 f, int n_digit);
VV_LOC string strconv__Dec64_get_string_64(strconv__Dec64 d, bool neg, int i_n_digit, int i_pad_digit);
VV_LOC multi_return_strconv__Dec64_bool strconv__f64_to_decimal_exact_int(u64 i_mant, u64 exp);
VV_LOC strconv__Dec64 strconv__f64_to_decimal(u64 mant, u64 exp);
string strconv__f64_to_str(f64 f, int n_digit);
string strconv__f64_to_str_pad(f64 f, int n_digit);
void strconv__format_str_sb(string s, strconv__BF_param p, strings__Builder* sb);
void strconv__format_dec_sb(u64 d, strconv__BF_param p, strings__Builder* res);
string strconv__f64_to_str_lnd1(f64 f, int dec_digit);
string strconv__format_fl(f64 f, strconv__BF_param p);
string strconv__format_es(f64 f, strconv__BF_param p);
string strconv__remove_tail_zeros(string s);
string strconv__ftoa_64(f64 f);
string strconv__ftoa_32(f32 f);
string strconv__format_int(i64 n, int radix);
string strconv__format_uint(u64 n, int radix);
string strconv__f32_to_str_l(f32 f);
string strconv__f32_to_str_l_with_dot(f32 f);
string strconv__f64_to_str_l(f64 f);
string strconv__f64_to_str_l_with_dot(f64 f);
string strconv__fxx_to_str_l_parse(string s);
string strconv__fxx_to_str_l_parse_with_dot(string s);
VV_LOC u32 strconv__bool_to_u32(bool b);
VV_LOC u64 strconv__bool_to_u64(bool b);
VV_LOC string strconv__get_string_special(bool neg, bool expZero, bool mantZero);
VV_LOC u32 strconv__mul_shift_32(u32 m, u64 mul, int ishift);
VV_LOC u32 strconv__mul_pow5_invdiv_pow2(u32 m, u32 q, int j);
VV_LOC u32 strconv__mul_pow5_div_pow2(u32 m, u32 i, int j);
VV_LOC u32 strconv__pow5_factor_32(u32 i_v);
VV_LOC bool strconv__multiple_of_power_of_five_32(u32 v, u32 p);
VV_LOC bool strconv__multiple_of_power_of_two_32(u32 v, u32 p);
VV_LOC u32 strconv__log10_pow2(int e);
VV_LOC u32 strconv__log10_pow5(int e);
VV_LOC int strconv__pow5_bits(int e);
VV_LOC u64 strconv__shift_right_128(strconv__Uint128 v, int shift);
VV_LOC u64 strconv__mul_shift_64(u64 m, strconv__Uint128 mul, int shift);
VV_LOC u32 strconv__pow5_factor_64(u64 v_i);
VV_LOC bool strconv__multiple_of_power_of_five_64(u64 v, u32 p);
VV_LOC bool strconv__multiple_of_power_of_two_64(u64 v, u32 p);
int strconv__dec_digits(u64 n);
VV_LOC array __new_array(int mylen, int cap, int elm_size);
VV_LOC array __new_array_with_default(int mylen, int cap, int elm_size, voidptr val);
VV_LOC array __new_array_with_multi_default(int mylen, int cap, int elm_size, voidptr val);
VV_LOC array __new_array_with_array_default(int mylen, int cap, int elm_size, array val, int depth);
VV_LOC array new_array_from_c_array(int len, int cap, int elm_size, voidptr c_array);
void array_ensure_cap(array* a, int required);
VV_LOC void array_insert_many(array* a, int i, voidptr val, int size);
VV_LOC void array_prepend_many(array* a, voidptr val, int size);
void array_clear(array* a);
void array_trim(array* a, int index);
VV_LOC voidptr array_get_unsafe(array a, int i);
VV_LOC voidptr array_get(array a, int i);
VV_LOC voidptr array_get_with_check(array a, int i);
VV_LOC array array_slice(array a, int start, int _end);
VV_LOC array array_slice_ni(array a, int _start, int _end);
VV_LOC array array_clone_static_to_depth(array a, int depth);
array array_clone(array* a);
array array_clone_to_depth(array* a, int depth);
VV_LOC void array_set_unsafe(array* a, int i, voidptr val);
VV_LOC void array_set(array* a, int i, voidptr val);
VV_LOC void array_push(array* a, voidptr val);
void array_push_many(array* a, voidptr val, int size);
array array_reverse(array a);
void array_free(array* a);
void Array_string_free(Array_string* a);
string Array_string_str(Array_string a);
void u8_free(u8* data);
VV_LOC void panic_on_negative_len(int len);
VV_LOC void panic_on_negative_cap(int cap);
VV_LOC array __new_array_noscan(int mylen, int cap, int elm_size);
VV_LOC array __new_array_with_default_noscan(int mylen, int cap, int elm_size, voidptr val);
VV_LOC array __new_array_with_multi_default_noscan(int mylen, int cap, int elm_size, voidptr val);
VV_LOC array __new_array_with_array_default_noscan(int mylen, int cap, int elm_size, array val, int depth);
void print_backtrace(void);
bool print_backtrace_skipping_top_frames(int xskipframes);
VV_LOC bool print_backtrace_skipping_top_frames_bsd(int skipframes);
VV_LOC void v_segmentation_fault_handler(i32 signal_number);
void _v_exit(int code);
void panic_option_not_set(string s);
void panic_result_not_set(string s);
string vcurrent_hash(void);
void _v_panic(string s);
void panic_n(string s, i64 number1);
void panic_n2(string s, i64 number1, i64 number2);
void eprintln(string s);
void eprint(string s);
void flush_stdout(void);
void flush_stderr(void);
void print(string s);
void println(string s);
VV_LOC void _writeln_to_fd(int fd, string s);
VV_LOC void _write_buf_to_fd(int fd, u8* buf, int buf_len);
VV_LOC void _memory_panic(string fname, isize size);
u8* _v_malloc(isize n);
u8* malloc_noscan(isize n);
VV_LOC u64 __at_least_one(u64 how_many);
u8* v_realloc(u8* b, isize n);
u8* realloc_data(u8* old_data, int old_size, int new_size);
u8* vcalloc(isize n);
u8* vcalloc_noscan(isize n);
void _v_free(voidptr ptr);
voidptr memdup(voidptr src, isize sz);
voidptr memdup_noscan(voidptr src, isize sz);
VV_LOC int v_fixed_index(int i, int len);
bool isnil(voidptr v);
void VAssertMetaInfo_free(VAssertMetaInfo* ami);
VV_LOC void builtin_init(void);
int vstrlen(u8* s);
int vstrlen_char(char* s);
voidptr vmemcpy(voidptr dest, const voidptr const_src, isize n);
voidptr vmemmove(voidptr dest, const voidptr const_src, isize n);
int vmemcmp(const voidptr const_s1, const voidptr const_s2, isize n);
voidptr vmemset(voidptr s, int c, isize n);
string f64_str(f64 x);
string f64_strg(f64 x);
string float_literal_str(float_literal d);
string f32_str(f32 x);
string f32_strg(f32 x);
f32 f32_abs(f32 a);
f64 f64_abs(f64 a);
string ptr_str(voidptr ptr);
string isize_str(isize x);
string usize_str(usize x);
string char_str(char* cptr);
VV_LOC string int_str_l(int nn, int max);
string i8_str(i8 n);
string i16_str(i16 n);
string u16_str(u16 n);
string i32_str(i32 n);
string int_str(int n);
string u32_str(u32 nn);
string int_literal_str(int_literal n);
string i64_str(i64 nn);
string u64_str(u64 nn);
string bool_str(bool b);
VV_LOC string u64_to_hex_no_leading_zeros(u64 nn, u8 len);
string u64_hex(u64 nn);
string voidptr_str(voidptr nn);
string byteptr_str(byteptr nn);
string charptr_str(charptr nn);
string u8_str(u8 b);
string u8_ascii_str(u8 b);
string Array_u8_bytestr(Array_u8 b);
VV_LOC string _Atomic__int_str(int x);
VV_LOC bool fast_string_eq(string a, string b);
VV_LOC u64 map_hash_string(voidptr pkey);
VV_LOC u64 map_hash_int_1(voidptr pkey);
VV_LOC u64 map_hash_int_2(voidptr pkey);
VV_LOC u64 map_hash_int_4(voidptr pkey);
VV_LOC u64 map_hash_int_8(voidptr pkey);
VV_LOC void DenseArray_zeros_to_end(DenseArray* d);
VV_LOC DenseArray new_dense_array(int key_bytes, int value_bytes);
VV_LOC voidptr DenseArray_key(DenseArray* d, int i);
VV_LOC voidptr DenseArray_value(DenseArray* d, int i);
VV_LOC bool DenseArray_has_index(DenseArray* d, int i);
VV_LOC int DenseArray_expand(DenseArray* d);
VV_LOC bool map_eq_string(voidptr a, voidptr b);
VV_LOC bool map_eq_int_1(voidptr a, voidptr b);
VV_LOC bool map_eq_int_2(voidptr a, voidptr b);
VV_LOC bool map_eq_int_4(voidptr a, voidptr b);
VV_LOC bool map_eq_int_8(voidptr a, voidptr b);
VV_LOC void map_clone_string(voidptr dest, voidptr pkey);
VV_LOC void map_clone_int_1(voidptr dest, voidptr pkey);
VV_LOC void map_clone_int_2(voidptr dest, voidptr pkey);
VV_LOC void map_clone_int_4(voidptr dest, voidptr pkey);
VV_LOC void map_clone_int_8(voidptr dest, voidptr pkey);
VV_LOC void map_free_string(voidptr pkey);
VV_LOC void map_free_nop(voidptr _d1);
VV_LOC map new_map(int key_bytes, int value_bytes, u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ));
VV_LOC map new_map_init(u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ), int n, int key_bytes, int value_bytes, voidptr keys, voidptr values);
VV_LOC map new_map_update_init(map* update, int n, int key_bytes, int value_bytes, voidptr keys, voidptr values);
map map_move(map* m);
void map_clear(map* m);
VV_LOC multi_return_u32_u32 map_key_to_index(map* m, voidptr pkey);
VV_LOC multi_return_u32_u32 map_meta_less(map* m, u32 _index, u32 _metas);
VV_LOC void map_meta_greater(map* m, u32 _index, u32 _metas, u32 kvi);
VV_LOC void map_ensure_extra_metas(map* m, u32 probe_count);
VV_LOC void map_set(map* m, voidptr key, voidptr value);
VV_LOC void map_expand(map* m);
VV_LOC void map_rehash(map* m);
void map_reserve(map* m, u32 meta_bytes);
VV_LOC void map_cached_rehash(map* m, u32 old_cap);
VV_LOC voidptr map_get_and_set(map* m, voidptr key, voidptr zero);
VV_LOC voidptr map_get(map* m, voidptr key, voidptr zero);
VV_LOC voidptr map_get_check(map* m, voidptr key);
VV_LOC bool map_exists(map* m, voidptr key);
VV_LOC void DenseArray_delete(DenseArray* d, int i);
void map_delete(map* m, voidptr key);
array map_keys(map* m);
array map_values(map* m);
VV_LOC DenseArray DenseArray_clone(DenseArray* d);
map map_clone(map* m);
void map_free(map* m);
void IError_free(IError* ie);
VV_LOC void _option_none(voidptr data, _option* option, int size);
VV_LOC void _option_ok(voidptr data, _option* option, int size);
VV_LOC void _option_clone(_option* current, _option* option, int size);
VV_LOC string None___str(None__ _d1);
string none_str(none _d1);
VV_LOC void _result_ok(voidptr data, _result* res, int size);
string IError_str(IError err);
string Error_msg(Error err);
int Error_code(Error err);
string MessageError_str(MessageError err);
string MessageError_msg(MessageError err);
int MessageError_code(MessageError err);
void MessageError_free(MessageError* err);
IError _v_error(string message);
IError error_with_code(string message, int code);
string rune_str(rune c);
string Array_rune_string(Array_rune ra);
rune rune_to_upper(rune c);
rune rune_to_lower(rune c);
VV_LOC rune rune_map_to(rune c, MapMode mode);
VV_LOC void mapnode_free(mapnode* n);
void SortedMap_free(SortedMap* m);
Array_rune string_runes(string s);
string cstring_to_vstring(const char* const_s);
string tos_clone(const u8* const_s);
string tos(u8* s, int len);
string tos2(u8* s);
string tos3(char* s);
string tos4(u8* s);
string tos5(char* s);
string u8_vstring_with_len(u8* bp, int len);
bool string_is_pure_ascii(string s);
VV_LOC string string_clone_static(string a);
VV_LOC _option_string string_option_clone_static(string a);
string string_clone(string a);
string string_replace(string s, string rep, string with);
VV_LOC bool string__eq(string s, string a);
VV_LOC bool string__lt(string s, string a);
VV_LOC string string__plus(string s, string a);
Array_string string_split(string s, string delim);
Array_string string_split_nth(string s, string delim, int nth);
string string_substr(string s, int start, int _end);
string string_substr_unsafe(string s, int start, int _end);
_result_string string_substr_with_check(string s, int start, int _end);
string string_substr_ni(string s, int _start, int _end);
VV_LOC int string_index_(string s, string p);
VV_LOC int string_index_kmp(string s, string p);
VV_LOC int string_index_last_(string s, string p);
int string_index_after_(string s, string p, int start);
bool string_contains_u8(string s, u8 x);
bool string_contains(string s, string substr);
bool string_starts_with(string s, string p);
bool string_ends_with(string s, string p);
string string_to_lower_ascii(string s);
string string_to_lower(string s);
string string_to_upper_ascii(string s);
string string_to_upper(string s);
string string_str(string s);
VV_LOC u8 string_at(string s, int idx);
VV_LOC _option_u8 string_at_with_check(string s, int idx);
void string_free(string* s);
string string_all_after_last(string s, string sub);
string string_repeat(string s, int count);
string byteptr_vstring(byteptr bp);
string byteptr_vstring_with_len(byteptr bp, int len);
string charptr_vstring(charptr cp);
string charptr_vstring_with_len(charptr cp, int len);
string byteptr_vstring_literal(byteptr bp);
string charptr_vstring_literal(charptr cp);
string StrIntpType_str(StrIntpType x);
VV_LOC f32 fabs32(f32 x);
VV_LOC f64 fabs64(f64 x);
VV_LOC u64 abs64(i64 x);
VV_LOC void StrIntpData_process_str_intp_data(StrIntpData* data, strings__Builder* sb);
string str_intp(int data_len, StrIntpData* input_base);
int utf8_char_len(u8 b);
string utf32_to_str(u32 code);
string utf32_to_str_no_malloc(u32 code, u8* buf);
int utf32_decode_to_buffer(u32 code, u8* buf);
int string_utf32_code(string _rune);
VV_LOC rune impl_utf8_to_utf32(u8* _bytes, int _bytes_len);
int utf8_str_visible_length(string s);
bool ArrayFlags_has(ArrayFlags* e, ArrayFlags flag_);
void ArrayFlags_set(ArrayFlags* e, ArrayFlags flag_);
void ArrayFlags_clear(ArrayFlags* e, ArrayFlags flag_);
i64 time__Duration_milliseconds(time__Duration d);
string time__Duration_str(time__Duration d);
VV_LOC void time__int_to_byte_array_no_pad(int value, Array_u8* arr, int size);
string time__Time_format_ss(time__Time t);
bool time__Time__eq(time__Time t1, time__Time t2);
bool time__Time__lt(time__Time t1, time__Time t2);
time__Duration time__Time__minus(time__Time lhs, time__Time rhs);
string time__TimeParseError_msg(time__TimeParseError err);
time__StopWatch time__new_stopwatch(time__StopWatchOptions opts);
time__Time time__now(void);
VV_LOC time__Time time__time_with_unix(time__Time t);
string time__Time_str(time__Time t);
VV_LOC time__Time time__convert_ctime(struct tm t, int nanosecond);
i64 time__Time_unix(time__Time t);
VV_LOC mach_timebase_info_data_t time__init_time_base(void);
VV_LOC u64 time__sys_mono_now_darwin(void);
VV_LOC time__Time time__darwin_now(void);
VV_LOC i64 time__make_unix_time(struct tm t);
u64 time__sys_mono_now(void);
VV_LOC time__Time time__linux_now(void);
VV_LOC voidptr stbi__cb_malloc(usize s);
VV_EXP voidptr stbi__callback_malloc(usize s); // exported fn stbi.cb_malloc
VV_LOC voidptr stbi__cb_realloc(voidptr p, usize s);
VV_EXP voidptr stbi__callback_realloc(voidptr p, usize s); // exported fn stbi.cb_realloc
VV_LOC void stbi__cb_free(voidptr p);
VV_EXP void stbi__callback_free(voidptr p); // exported fn stbi.cb_free
void stbi__set_flip_vertically_on_write(bool val);
void stbi__Image_free(stbi__Image* img);
_result_void stbi__stbi_write_png(string path, int w, int h, int comp, u8* buf, int row_stride_in_bytes);
void fontstash__Context_set_error_callback(fontstash__Context* s, void (*callback)(voidptr , int , int ), voidptr uptr);
int fontstash__Context_reset_atlas(fontstash__Context* s, int width, int height);
int fontstash__Context_add_font_mem(fontstash__Context* s, string name, Array_u8 data, bool free_data);
void fontstash__Context_set_size(fontstash__Context* s, f32 size);
void fontstash__Context_set_color(fontstash__Context* s, u32 color);
void fontstash__Context_set_align(fontstash__Context* s, int align);
void fontstash__Context_set_font(fontstash__Context* s, int font_id);
f32 fontstash__Context_draw_text(fontstash__Context* s, f32 x, f32 y, string text);
f32 fontstash__Context_text_bounds(fontstash__Context* s, f32 x, f32 y, string text, f32* bounds);
void fontstash__Context_vert_metrics(fontstash__Context* s, f32* ascender, f32* descender, f32* lineh);
voidptr sokol__memory__salloc(usize size, voidptr user_data);
void sokol__memory__sfree(voidptr ptr, voidptr user_data);
void sokol__memory__slog(const char* const_tag, u32 log_level, u32 log_item_id, const char* const_message_or_null, u32 line_nr, const char* const_filename_or_null, voidptr user_data);
void strings__textscanner__TextScanner_free(strings__textscanner__TextScanner* ss);
gx__Color gx__Color__plus(gx__Color a, gx__Color b);
gx__Color gx__Color__minus(gx__Color a, gx__Color b);
gx__Color gx__Color__mult(gx__Color c, gx__Color c2);
gx__Color gx__Color__div(gx__Color c, gx__Color c2);
string gx__Color_str(gx__Color c);
void sokol__gfx__setup(sokol__gfx__Desc* desc);
void sokol__gfx__shutdown(void);
sokol__gfx__Image sokol__gfx__make_image(sokol__gfx__ImageDesc* desc);
sokol__gfx__Sampler sokol__gfx__make_sampler(sokol__gfx__SamplerDesc* desc);
void sokol__gfx__begin_pass(const sokol__gfx__Pass* const_pass);
void sokol__gfx__end_pass(void);
void sokol__gfx__commit(void);
void C__sg_pipeline_free(struct sg_pipeline* p);
void C__sg_attachments_free(struct sg_attachments* a);
void sokol__gfx__Shader_free(sokol__gfx__Shader* s);
void sokol__gfx__Buffer_free(sokol__gfx__Buffer* b);
void sokol__gfx__Image_free(sokol__gfx__Image* i);
sokol__gfx__PassAction sokol__gfx__create_clear_pass_action(f32 r, f32 g, f32 b, f32 a);
_result_sokol__gfx__PixelFormat sokol__gfx__PixelFormat__static__from_T_int(int input);
string os__getenv(string key);
_option_string os__getenv_opt(string key);
int os__fd_close(int fd);
VV_LOC string os__NotExpected_msg(os__NotExpected err);
VV_LOC int os__NotExpected_code(os__NotExpected err);
VV_LOC _result_int os__fread(voidptr ptr, int item_size, int items, FILE* stream);
string os__FileNotOpenedError_msg(os__FileNotOpenedError err);
string os__SizeOfTypeIs0Error_msg(os__SizeOfTypeIs0Error err);
_result_Array_u8 os__read_bytes(string path);
VV_LOC _result_int os__find_cfile_size(FILE* fp);
VV_LOC _result_strings__Builder os__slurp_file_in_builder(FILE* fp);
_result_FILE_ptr os__vfopen(string path, string mode);
int os__fileno(voidptr cfile);
VV_LOC voidptr os__vpopen(string path);
VV_LOC multi_return_int_bool os__posix_wait4_to_exit_status(int waitret);
string os__posix_get_error_msg(int code);
VV_LOC int os__vpclose(voidptr f);
bool os__exists(string path);
IError os__error_posix(os__SystemError e);
void os__Result_free(os__Result* result);
string os__file_name(string path);
string os__ExecutableNotFoundError_msg(os__ExecutableNotFoundError err);
bool os__is_file(string path);
os__Result os__execute(string cmd);
void os__Process_close(os__Process* p);
void os__Process_free(os__Process* p);
_result_os__Stat os__stat(string path);
os__FileType os__Stat_get_filetype(os__Stat st);
bool os__is_dir(string path);
sokol__gfx__Desc sokol__sapp__create_desc(void);
sokol__gfx__Pass sokol__sapp__create_default_pass(sokol__gfx__PassAction action);
sokol__gfx__Environment sokol__sapp__glue_environment(void);
sokol__gfx__Swapchain sokol__sapp__glue_swapchain(void);
int sokol__sapp__width(void);
int sokol__sapp__height(void);
int sokol__sapp__color_format(void);
int sokol__sapp__depth_format(void);
int sokol__sapp__sample_count(void);
f32 sokol__sapp__dpi_scale(void);
f64 sokol__sapp__frame_duration(void);
void sokol__sapp__run(sokol__sapp__Desc* desc);
voidptr sokol__sapp__metal_get_device(void);
voidptr sokol__sapp__metal_get_current_drawable(void);
voidptr sokol__sapp__metal_get_depth_stencil_texture(void);
voidptr sokol__sapp__metal_get_msaa_color_texture(void);
string C__sapp_event_str(sapp_event* e);
_result_void sokol__sapp__screenshot_png(string path);
sokol__sapp__Screenshot* sokol__sapp__screenshot_window(void);
void sokol__sapp__Screenshot_free(sokol__sapp__Screenshot* ss);
void sokol__sapp__Screenshot_destroy(sokol__sapp__Screenshot* ss);
void sokol__sgl__setup(sokol__sgl__Desc* desc);
f32 sokol__sgl__rad(f32 deg);
sokol__sgl__Pipeline sokol__sgl__make_pipeline(sokol__gfx__PipelineDesc* desc);
void sokol__sgl__defaults(void);
void sokol__sgl__viewport(int x, int y, int w, int h, bool origin_top_left);
void sokol__sgl__enable_texture(void);
void sokol__sgl__disable_texture(void);
void sokol__sgl__texture(sokol__gfx__Image img, sokol__gfx__Sampler smp);
void sokol__sgl__load_pipeline(sokol__sgl__Pipeline pip);
void sokol__sgl__matrix_mode_modelview(void);
void sokol__sgl__matrix_mode_projection(void);
void sokol__sgl__rotate(f32 angle_rad, f32 x, f32 y, f32 z);
void sokol__sgl__translate(f32 x, f32 y, f32 z);
void sokol__sgl__ortho(f32 l, f32 r, f32 b, f32 t, f32 n, f32 f);
void sokol__sgl__perspective(f32 fov_y, f32 aspect, f32 z_near, f32 z_far);
void sokol__sgl__c3f(f32 r, f32 g, f32 b);
void sokol__sgl__c4b(u8 r, u8 g, u8 b, u8 a);
void sokol__sgl__begin_quads(void);
void sokol__sgl__v2f(f32 x, f32 y);
void sokol__sgl__v3f_t2f(f32 x, f32 y, f32 z, f32 u, f32 v);
void sokol__sgl__end(void);
void sokol__sgl__draw(void);
string os__font__default(void);
string os__font__get_path_variant(string font_path, os__font__Variant variant);
VV_LOC void os__font__mut_replace(string* s, string find, string replacement);
VV_LOC void os__font__mut_plus(string* s, string tail);
VV_LOC void os__font__mut_assign(string* s, string value);
fontstash__Context* sokol__sfons__create(int width, int height, int flags);
u32 sokol__sfons__rgba(u8 r, u8 g, u8 b, u8 a);
void sokol__sfons__flush(fontstash__Context* ctx);
void gg__Context_draw_rect_filled(gg__Context* ctx, f32 x, f32 y, f32 w, f32 h, gx__Color c);
VV_LOC void gg__PipelineContainer_init_pipeline(gg__PipelineContainer* container);
VV_LOC void gg__gg_init_sokol_window(voidptr user_data);
VV_LOC void gg__gg_frame_fn(gg__Context* ctx);
VV_LOC void gg__gg_event_fn(voidptr ce, voidptr user_data);
VV_LOC void gg__gg_cleanup_fn(voidptr user_data);
gg__Context* gg__new_context(gg__Config cfg);
void gg__Context_run(gg__Context* ctx);
void gg__Context_set_bg_color(gg__Context* ctx, gx__Color c);
void gg__Context_refresh_ui(gg__Context* ctx);
void gg__Context_begin(gg__Context* ctx);
sokol__gfx__Pass gg__create_default_pass(sokol__gfx__PassAction action);
void gg__Context_end(gg__Context* ctx, gg__EndOptions options);
void gg__Context_show_fps(gg__Context* ctx);
VV_LOC void gg__Context_set_scale(gg__Context* ctx);
f32 gg__dpi_scale(void);
gg__Size gg__window_size_real_pixels(void);

// added by module `gg`, file: gg_darwin.c.v:3:

#if defined(__has_include)

#if __has_include("/Users/oniichan/Downloads/v/vlib/gg/gg_darwin.m")
#include "/Users/oniichan/Downloads/v/vlib/gg/gg_darwin.m"
#else
#error VERROR_MESSAGE Header file "/Users/oniichan/Downloads/v/vlib/gg/gg_darwin.m", needed for module `gg` was not found. Please install the corresponding development headers.
#endif

#else
#include "/Users/oniichan/Downloads/v/vlib/gg/gg_darwin.m"
#endif

gg__Image* gg__Image_init_sokol_image(gg__Image* img);
VV_LOC gg__SSRecorderSettings* gg__new_gg_recorder_settings(void);
VV_LOC void gg__clear_atlas_callback(voidptr uptr, int __v_error, int _val);
VV_LOC _option_gg__FT_ptr gg__new_ft(gg__FTConfig c);
void gg__Context_set_text_cfg(gg__Context* ctx, gx__TextCfg cfg);
void gg__Context_draw_text(gg__Context* ctx, int x, int y, string text_, gx__TextCfg cfg);
void gg__FT_flush(gg__FT* ft);
int gg__Context_text_width(gg__Context* ctx, string s);
multi_return_int_int gg__Context_text_size(gg__Context* ctx, string s);
VV_LOC multi_return_sokol__gfx__Image_sokol__gfx__Sampler main__create_texture(int w, int h, u8* buf);
VV_LOC void main__cube_t(f32 r, f32 g, f32 b);
VV_LOC void main__draw_texture_cubes(main__App app);
VV_LOC void main__frame(main__App* app);
VV_LOC void main__my_init(main__App* app);
VV_LOC void main__my_event_manager(gg__Event* ev, main__App* app);
VV_LOC void main__main(void);
static string sokol__sapp__EventType_str(sokol__sapp__EventType it);

// V global/const non-precomputed definitions:
string _const_strconv__digit_pairs; // a string literal, inited later
string _const_strconv__base_digits; // a string literal, inited later
string _const_digit_pairs; // a string literal, inited later
const u32 _const_math__bits__de_bruijn32 = 125613361; // precomputed2
Array_fixed_u8_32 _const_math__bits__de_bruijn32tab = {((u8)(0)), 1, 28, 2, 29, 14, 24, 3, 30, 22, 20, 15, 25, 17, 4, 8, 
31, 27, 13, 23, 21, 19, 16, 7, 26, 12, 18, 6, 11, 5, 10, 9}; // fixed array const
const u64 _const_math__bits__de_bruijn64 = 285870213051353865U; // precomputed2
Array_fixed_u8_64 _const_math__bits__de_bruijn64tab = {((u8)(0)), 1, 56, 2, 57, 49, 28, 3, 61, 58, 42, 50, 38, 29, 17, 4, 
62, 47, 59, 36, 45, 43, 51, 22, 53, 39, 33, 30, 24, 18, 12, 5, 
63, 55, 48, 27, 60, 41, 37, 16, 46, 35, 44, 21, 52, 32, 23, 11, 
54, 26, 40, 15, 34, 20, 31, 10, 25, 14, 19, 9, 13, 8, 7, 6}; // fixed array const
const u64 _const_math__bits__two32 = 4294967296U; // precomputed2
const u64 _const_math__bits__mask32 = 4294967295U; // precomputed2
const u32 _const_strconv__single_plus_zero = 0; // precomputed2
const u32 _const_strconv__single_minus_zero = 2147483648; // precomputed2
const u32 _const_strconv__single_plus_infinity = 2139095040; // precomputed2
const u32 _const_strconv__single_minus_infinity = 4286578688; // precomputed2
const u64 _const_strconv__double_plus_zero = 0U; // precomputed2
const u64 _const_strconv__double_minus_zero = 9223372036854775808U; // precomputed2
const u64 _const_strconv__double_plus_infinity = 9218868437227405312U; // precomputed2
const u64 _const_strconv__double_minus_infinity = 18442240474082181120U; // precomputed2
Array_fixed_u32_10 _const_strconv__ten_pow_table_32 = {((u32)(1U)), ((u32)(10U)), ((u32)(100U)), ((u32)(1000U)), ((u32)(10000U)), ((u32)(100000U)), ((u32)(1000000U)), ((u32)(10000000U)), ((u32)(100000000U)), ((u32)(1000000000U))}; // fixed array const
const u32 _const_strconv__mantbits32 = 23; // precomputed2
const u32 _const_strconv__expbits32 = 8; // precomputed2
Array_fixed_u64_20 _const_strconv__ten_pow_table_64 = {((u64)(1U)), ((u64)(10U)), ((u64)(100U)), ((u64)(1000U)), ((u64)(10000U)), ((u64)(100000U)), ((u64)(1000000U)), ((u64)(10000000U)), ((u64)(100000000U)), ((u64)(1000000000U)), ((u64)(10000000000U)), ((u64)(100000000000U)), ((u64)(1000000000000U)), ((u64)(10000000000000U)), ((u64)(100000000000000U)), ((u64)(1000000000000000U)), ((u64)(10000000000000000U)), ((u64)(100000000000000000U)), ((u64)(1000000000000000000U)), ((u64)(10000000000000000000U))}; // fixed array const
const u32 _const_strconv__mantbits64 = 52; // precomputed2
const u32 _const_strconv__expbits64 = 11; // precomputed2
Array_fixed_f64_36 _const_strconv__dec_round = {((f64)(0.5)), 0.05, 0.005, 0.0005, 0.00005, 0.000005, 0.0000005, 0.00000005, 0.000000005, 0.0000000005, 0.00000000005, 0.000000000005, 0.0000000000005, 0.00000000000005, 0.000000000000005, 0.0000000000000005, 
0.00000000000000005, 0.000000000000000005, 0.0000000000000000005, 0.00000000000000000005, 0.000000000000000000005, 0.0000000000000000000005, 0.00000000000000000000005, 0.000000000000000000000005, 0.0000000000000000000000005, 0.00000000000000000000000005, 0.000000000000000000000000005, 0.0000000000000000000000000005, 0.00000000000000000000000000005, 0.000000000000000000000000000005, 0.0000000000000000000000000000005, 0.00000000000000000000000000000005, 0.000000000000000000000000000000005, 0.0000000000000000000000000000000005, 0.00000000000000000000000000000000005, 0.000000000000000000000000000000000005}; // fixed array const
Array_fixed_u64_47 _const_strconv__pow5_split_32 = {((u64)(1152921504606846976U)), ((u64)(1441151880758558720U)), ((u64)(1801439850948198400U)), ((u64)(2251799813685248000U)), ((u64)(1407374883553280000U)), ((u64)(1759218604441600000U)), ((u64)(2199023255552000000U)), ((u64)(1374389534720000000U)), ((u64)(1717986918400000000U)), ((u64)(2147483648000000000U)), ((u64)(1342177280000000000U)), ((u64)(1677721600000000000U)), ((u64)(2097152000000000000U)), ((u64)(1310720000000000000U)), ((u64)(1638400000000000000U)), ((u64)(2048000000000000000U)), 
((u64)(1280000000000000000U)), ((u64)(1600000000000000000U)), ((u64)(2000000000000000000U)), ((u64)(1250000000000000000U)), ((u64)(1562500000000000000U)), ((u64)(1953125000000000000U)), ((u64)(1220703125000000000U)), ((u64)(1525878906250000000U)), ((u64)(1907348632812500000U)), ((u64)(1192092895507812500U)), ((u64)(1490116119384765625U)), ((u64)(1862645149230957031U)), ((u64)(1164153218269348144U)), ((u64)(1455191522836685180U)), ((u64)(1818989403545856475U)), ((u64)(2273736754432320594U)), 
((u64)(1421085471520200371U)), ((u64)(1776356839400250464U)), ((u64)(2220446049250313080U)), ((u64)(1387778780781445675U)), ((u64)(1734723475976807094U)), ((u64)(2168404344971008868U)), ((u64)(1355252715606880542U)), ((u64)(1694065894508600678U)), ((u64)(2117582368135750847U)), ((u64)(1323488980084844279U)), ((u64)(1654361225106055349U)), ((u64)(2067951531382569187U)), ((u64)(1292469707114105741U)), ((u64)(1615587133892632177U)), ((u64)(2019483917365790221U))}; // fixed array const
Array_fixed_u64_31 _const_strconv__pow5_inv_split_32 = {((u64)(576460752303423489U)), ((u64)(461168601842738791U)), ((u64)(368934881474191033U)), ((u64)(295147905179352826U)), ((u64)(472236648286964522U)), ((u64)(377789318629571618U)), ((u64)(302231454903657294U)), ((u64)(483570327845851670U)), ((u64)(386856262276681336U)), ((u64)(309485009821345069U)), ((u64)(495176015714152110U)), ((u64)(396140812571321688U)), ((u64)(316912650057057351U)), ((u64)(507060240091291761U)), ((u64)(405648192073033409U)), ((u64)(324518553658426727U)), 
((u64)(519229685853482763U)), ((u64)(415383748682786211U)), ((u64)(332306998946228969U)), ((u64)(531691198313966350U)), ((u64)(425352958651173080U)), ((u64)(340282366920938464U)), ((u64)(544451787073501542U)), ((u64)(435561429658801234U)), ((u64)(348449143727040987U)), ((u64)(557518629963265579U)), ((u64)(446014903970612463U)), ((u64)(356811923176489971U)), ((u64)(570899077082383953U)), ((u64)(456719261665907162U)), ((u64)(365375409332725730U))}; // fixed array const
Array_fixed_u64_652 _const_strconv__pow5_split_64_x = {((u64)(0x0000000000000000U)), ((u64)(0x0100000000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x0140000000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x0190000000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01f4000000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x0138800000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x0186a00000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01e8480000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01312d0000000000U)), 
((u64)(0x0000000000000000U)), ((u64)(0x017d784000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01dcd65000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x012a05f200000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x0174876e80000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01d1a94a20000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x012309ce54000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x016bcc41e9000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01c6bf5263400000U)), 
((u64)(0x0000000000000000U)), ((u64)(0x011c37937e080000U)), ((u64)(0x0000000000000000U)), ((u64)(0x016345785d8a0000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01bc16d674ec8000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01158e460913d000U)), ((u64)(0x0000000000000000U)), ((u64)(0x015af1d78b58c400U)), ((u64)(0x0000000000000000U)), ((u64)(0x01b1ae4d6e2ef500U)), ((u64)(0x0000000000000000U)), ((u64)(0x010f0cf064dd5920U)), ((u64)(0x0000000000000000U)), ((u64)(0x0152d02c7e14af68U)), 
((u64)(0x0000000000000000U)), ((u64)(0x01a784379d99db42U)), ((u64)(0x4000000000000000U)), ((u64)(0x0108b2a2c2802909U)), ((u64)(0x9000000000000000U)), ((u64)(0x014adf4b7320334bU)), ((u64)(0x7400000000000000U)), ((u64)(0x019d971e4fe8401eU)), ((u64)(0x0880000000000000U)), ((u64)(0x01027e72f1f12813U)), ((u64)(0xcaa0000000000000U)), ((u64)(0x01431e0fae6d7217U)), ((u64)(0xbd48000000000000U)), ((u64)(0x0193e5939a08ce9dU)), ((u64)(0x2c9a000000000000U)), ((u64)(0x01f8def8808b0245U)), 
((u64)(0x3be0400000000000U)), ((u64)(0x013b8b5b5056e16bU)), ((u64)(0x0ad8500000000000U)), ((u64)(0x018a6e32246c99c6U)), ((u64)(0x8d8e640000000000U)), ((u64)(0x01ed09bead87c037U)), ((u64)(0xb878fe8000000000U)), ((u64)(0x013426172c74d822U)), ((u64)(0x66973e2000000000U)), ((u64)(0x01812f9cf7920e2bU)), ((u64)(0x403d0da800000000U)), ((u64)(0x01e17b84357691b6U)), ((u64)(0xe826288900000000U)), ((u64)(0x012ced32a16a1b11U)), ((u64)(0x622fb2ab40000000U)), ((u64)(0x0178287f49c4a1d6U)), 
((u64)(0xfabb9f5610000000U)), ((u64)(0x01d6329f1c35ca4bU)), ((u64)(0x7cb54395ca000000U)), ((u64)(0x0125dfa371a19e6fU)), ((u64)(0x5be2947b3c800000U)), ((u64)(0x016f578c4e0a060bU)), ((u64)(0x32db399a0ba00000U)), ((u64)(0x01cb2d6f618c878eU)), ((u64)(0xdfc9040047440000U)), ((u64)(0x011efc659cf7d4b8U)), ((u64)(0x17bb450059150000U)), ((u64)(0x0166bb7f0435c9e7U)), ((u64)(0xddaa16406f5a4000U)), ((u64)(0x01c06a5ec5433c60U)), ((u64)(0x8a8a4de845986800U)), ((u64)(0x0118427b3b4a05bcU)), 
((u64)(0xad2ce16256fe8200U)), ((u64)(0x015e531a0a1c872bU)), ((u64)(0x987819baecbe2280U)), ((u64)(0x01b5e7e08ca3a8f6U)), ((u64)(0x1f4b1014d3f6d590U)), ((u64)(0x0111b0ec57e6499aU)), ((u64)(0xa71dd41a08f48af4U)), ((u64)(0x01561d276ddfdc00U)), ((u64)(0xd0e549208b31adb1U)), ((u64)(0x01aba4714957d300U)), ((u64)(0x828f4db456ff0c8eU)), ((u64)(0x010b46c6cdd6e3e0U)), ((u64)(0xa33321216cbecfb2U)), ((u64)(0x014e1878814c9cd8U)), ((u64)(0xcbffe969c7ee839eU)), ((u64)(0x01a19e96a19fc40eU)), 
((u64)(0x3f7ff1e21cf51243U)), ((u64)(0x0105031e2503da89U)), ((u64)(0x8f5fee5aa43256d4U)), ((u64)(0x014643e5ae44d12bU)), ((u64)(0x7337e9f14d3eec89U)), ((u64)(0x0197d4df19d60576U)), ((u64)(0x1005e46da08ea7abU)), ((u64)(0x01fdca16e04b86d4U)), ((u64)(0x8a03aec4845928cbU)), ((u64)(0x013e9e4e4c2f3444U)), ((u64)(0xac849a75a56f72fdU)), ((u64)(0x018e45e1df3b0155U)), ((u64)(0x17a5c1130ecb4fbdU)), ((u64)(0x01f1d75a5709c1abU)), ((u64)(0xeec798abe93f11d6U)), ((u64)(0x013726987666190aU)), 
((u64)(0xaa797ed6e38ed64bU)), ((u64)(0x0184f03e93ff9f4dU)), ((u64)(0x1517de8c9c728bdeU)), ((u64)(0x01e62c4e38ff8721U)), ((u64)(0xad2eeb17e1c7976bU)), ((u64)(0x012fdbb0e39fb474U)), ((u64)(0xd87aa5ddda397d46U)), ((u64)(0x017bd29d1c87a191U)), ((u64)(0x4e994f5550c7dc97U)), ((u64)(0x01dac74463a989f6U)), ((u64)(0xf11fd195527ce9deU)), ((u64)(0x0128bc8abe49f639U)), ((u64)(0x6d67c5faa71c2456U)), ((u64)(0x0172ebad6ddc73c8U)), ((u64)(0x88c1b77950e32d6cU)), ((u64)(0x01cfa698c95390baU)), 
((u64)(0x957912abd28dfc63U)), ((u64)(0x0121c81f7dd43a74U)), ((u64)(0xbad75756c7317b7cU)), ((u64)(0x016a3a275d494911U)), ((u64)(0x298d2d2c78fdda5bU)), ((u64)(0x01c4c8b1349b9b56U)), ((u64)(0xd9f83c3bcb9ea879U)), ((u64)(0x011afd6ec0e14115U)), ((u64)(0x50764b4abe865297U)), ((u64)(0x0161bcca7119915bU)), ((u64)(0x2493de1d6e27e73dU)), ((u64)(0x01ba2bfd0d5ff5b2U)), ((u64)(0x56dc6ad264d8f086U)), ((u64)(0x01145b7e285bf98fU)), ((u64)(0x2c938586fe0f2ca8U)), ((u64)(0x0159725db272f7f3U)), 
((u64)(0xf7b866e8bd92f7d2U)), ((u64)(0x01afcef51f0fb5efU)), ((u64)(0xfad34051767bdae3U)), ((u64)(0x010de1593369d1b5U)), ((u64)(0x79881065d41ad19cU)), ((u64)(0x015159af80444623U)), ((u64)(0x57ea147f49218603U)), ((u64)(0x01a5b01b605557acU)), ((u64)(0xb6f24ccf8db4f3c1U)), ((u64)(0x01078e111c3556cbU)), ((u64)(0xa4aee003712230b2U)), ((u64)(0x014971956342ac7eU)), ((u64)(0x4dda98044d6abcdfU)), ((u64)(0x019bcdfabc13579eU)), ((u64)(0xf0a89f02b062b60bU)), ((u64)(0x010160bcb58c16c2U)), 
((u64)(0xacd2c6c35c7b638eU)), ((u64)(0x0141b8ebe2ef1c73U)), ((u64)(0x98077874339a3c71U)), ((u64)(0x01922726dbaae390U)), ((u64)(0xbe0956914080cb8eU)), ((u64)(0x01f6b0f092959c74U)), ((u64)(0xf6c5d61ac8507f38U)), ((u64)(0x013a2e965b9d81c8U)), ((u64)(0x34774ba17a649f07U)), ((u64)(0x0188ba3bf284e23bU)), ((u64)(0x01951e89d8fdc6c8U)), ((u64)(0x01eae8caef261acaU)), ((u64)(0x40fd3316279e9c3dU)), ((u64)(0x0132d17ed577d0beU)), ((u64)(0xd13c7fdbb186434cU)), ((u64)(0x017f85de8ad5c4edU)), 
((u64)(0x458b9fd29de7d420U)), ((u64)(0x01df67562d8b3629U)), ((u64)(0xcb7743e3a2b0e494U)), ((u64)(0x012ba095dc7701d9U)), ((u64)(0x3e5514dc8b5d1db9U)), ((u64)(0x017688bb5394c250U)), ((u64)(0x4dea5a13ae346527U)), ((u64)(0x01d42aea2879f2e4U)), ((u64)(0xb0b2784c4ce0bf38U)), ((u64)(0x01249ad2594c37ceU)), ((u64)(0x5cdf165f6018ef06U)), ((u64)(0x016dc186ef9f45c2U)), ((u64)(0xf416dbf7381f2ac8U)), ((u64)(0x01c931e8ab871732U)), ((u64)(0xd88e497a83137abdU)), ((u64)(0x011dbf316b346e7fU)), 
((u64)(0xceb1dbd923d8596cU)), ((u64)(0x01652efdc6018a1fU)), ((u64)(0xc25e52cf6cce6fc7U)), ((u64)(0x01be7abd3781eca7U)), ((u64)(0xd97af3c1a40105dcU)), ((u64)(0x01170cb642b133e8U)), ((u64)(0x0fd9b0b20d014754U)), ((u64)(0x015ccfe3d35d80e3U)), ((u64)(0xd3d01cde90419929U)), ((u64)(0x01b403dcc834e11bU)), ((u64)(0x6462120b1a28ffb9U)), ((u64)(0x01108269fd210cb1U)), ((u64)(0xbd7a968de0b33fa8U)), ((u64)(0x0154a3047c694fddU)), ((u64)(0x2cd93c3158e00f92U)), ((u64)(0x01a9cbc59b83a3d5U)), 
((u64)(0x3c07c59ed78c09bbU)), ((u64)(0x010a1f5b81324665U)), ((u64)(0x8b09b7068d6f0c2aU)), ((u64)(0x014ca732617ed7feU)), ((u64)(0x2dcc24c830cacf34U)), ((u64)(0x019fd0fef9de8dfeU)), ((u64)(0xdc9f96fd1e7ec180U)), ((u64)(0x0103e29f5c2b18beU)), ((u64)(0x93c77cbc661e71e1U)), ((u64)(0x0144db473335deeeU)), ((u64)(0x38b95beb7fa60e59U)), ((u64)(0x01961219000356aaU)), ((u64)(0xc6e7b2e65f8f91efU)), ((u64)(0x01fb969f40042c54U)), ((u64)(0xfc50cfcffbb9bb35U)), ((u64)(0x013d3e2388029bb4U)), 
((u64)(0x3b6503c3faa82a03U)), ((u64)(0x018c8dac6a0342a2U)), ((u64)(0xca3e44b4f9523484U)), ((u64)(0x01efb1178484134aU)), ((u64)(0xbe66eaf11bd360d2U)), ((u64)(0x0135ceaeb2d28c0eU)), ((u64)(0x6e00a5ad62c83907U)), ((u64)(0x0183425a5f872f12U)), ((u64)(0x0980cf18bb7a4749U)), ((u64)(0x01e412f0f768fad7U)), ((u64)(0x65f0816f752c6c8dU)), ((u64)(0x012e8bd69aa19cc6U)), ((u64)(0xff6ca1cb527787b1U)), ((u64)(0x017a2ecc414a03f7U)), ((u64)(0xff47ca3e2715699dU)), ((u64)(0x01d8ba7f519c84f5U)), 
((u64)(0xbf8cde66d86d6202U)), ((u64)(0x0127748f9301d319U)), ((u64)(0x2f7016008e88ba83U)), ((u64)(0x017151b377c247e0U)), ((u64)(0x3b4c1b80b22ae923U)), ((u64)(0x01cda62055b2d9d8U)), ((u64)(0x250f91306f5ad1b6U)), ((u64)(0x012087d4358fc827U)), ((u64)(0xee53757c8b318623U)), ((u64)(0x0168a9c942f3ba30U)), ((u64)(0x29e852dbadfde7acU)), ((u64)(0x01c2d43b93b0a8bdU)), ((u64)(0x3a3133c94cbeb0ccU)), ((u64)(0x0119c4a53c4e6976U)), ((u64)(0xc8bd80bb9fee5cffU)), ((u64)(0x016035ce8b6203d3U)), 
((u64)(0xbaece0ea87e9f43eU)), ((u64)(0x01b843422e3a84c8U)), ((u64)(0x74d40c9294f238a7U)), ((u64)(0x01132a095ce492fdU)), ((u64)(0xd2090fb73a2ec6d1U)), ((u64)(0x0157f48bb41db7bcU)), ((u64)(0x068b53a508ba7885U)), ((u64)(0x01adf1aea12525acU)), ((u64)(0x8417144725748b53U)), ((u64)(0x010cb70d24b7378bU)), ((u64)(0x651cd958eed1ae28U)), ((u64)(0x014fe4d06de5056eU)), ((u64)(0xfe640faf2a8619b2U)), ((u64)(0x01a3de04895e46c9U)), ((u64)(0x3efe89cd7a93d00fU)), ((u64)(0x01066ac2d5daec3eU)), 
((u64)(0xcebe2c40d938c413U)), ((u64)(0x014805738b51a74dU)), ((u64)(0x426db7510f86f518U)), ((u64)(0x019a06d06e261121U)), ((u64)(0xc9849292a9b4592fU)), ((u64)(0x0100444244d7cab4U)), ((u64)(0xfbe5b73754216f7aU)), ((u64)(0x01405552d60dbd61U)), ((u64)(0x7adf25052929cb59U)), ((u64)(0x01906aa78b912cbaU)), ((u64)(0x1996ee4673743e2fU)), ((u64)(0x01f485516e7577e9U)), ((u64)(0xaffe54ec0828a6ddU)), ((u64)(0x0138d352e5096af1U)), ((u64)(0x1bfdea270a32d095U)), ((u64)(0x018708279e4bc5aeU)), 
((u64)(0xa2fd64b0ccbf84baU)), ((u64)(0x01e8ca3185deb719U)), ((u64)(0x05de5eee7ff7b2f4U)), ((u64)(0x01317e5ef3ab3270U)), ((u64)(0x0755f6aa1ff59fb1U)), ((u64)(0x017dddf6b095ff0cU)), ((u64)(0x092b7454a7f3079eU)), ((u64)(0x01dd55745cbb7ecfU)), ((u64)(0x65bb28b4e8f7e4c3U)), ((u64)(0x012a5568b9f52f41U)), ((u64)(0xbf29f2e22335ddf3U)), ((u64)(0x0174eac2e8727b11U)), ((u64)(0x2ef46f9aac035570U)), ((u64)(0x01d22573a28f19d6U)), ((u64)(0xdd58c5c0ab821566U)), ((u64)(0x0123576845997025U)), 
((u64)(0x54aef730d6629ac0U)), ((u64)(0x016c2d4256ffcc2fU)), ((u64)(0x29dab4fd0bfb4170U)), ((u64)(0x01c73892ecbfbf3bU)), ((u64)(0xfa28b11e277d08e6U)), ((u64)(0x011c835bd3f7d784U)), ((u64)(0x38b2dd65b15c4b1fU)), ((u64)(0x0163a432c8f5cd66U)), ((u64)(0xc6df94bf1db35de7U)), ((u64)(0x01bc8d3f7b3340bfU)), ((u64)(0xdc4bbcf772901ab0U)), ((u64)(0x0115d847ad000877U)), ((u64)(0xd35eac354f34215cU)), ((u64)(0x015b4e5998400a95U)), ((u64)(0x48365742a30129b4U)), ((u64)(0x01b221effe500d3bU)), 
((u64)(0x0d21f689a5e0ba10U)), ((u64)(0x010f5535fef20845U)), ((u64)(0x506a742c0f58e894U)), ((u64)(0x01532a837eae8a56U)), ((u64)(0xe4851137132f22b9U)), ((u64)(0x01a7f5245e5a2cebU)), ((u64)(0x6ed32ac26bfd75b4U)), ((u64)(0x0108f936baf85c13U)), ((u64)(0x4a87f57306fcd321U)), ((u64)(0x014b378469b67318U)), ((u64)(0x5d29f2cfc8bc07e9U)), ((u64)(0x019e056584240fdeU)), ((u64)(0xfa3a37c1dd7584f1U)), ((u64)(0x0102c35f729689eaU)), ((u64)(0xb8c8c5b254d2e62eU)), ((u64)(0x014374374f3c2c65U)), 
((u64)(0x26faf71eea079fb9U)), ((u64)(0x01945145230b377fU)), ((u64)(0xf0b9b4e6a48987a8U)), ((u64)(0x01f965966bce055eU)), ((u64)(0x5674111026d5f4c9U)), ((u64)(0x013bdf7e0360c35bU)), ((u64)(0x2c111554308b71fbU)), ((u64)(0x018ad75d8438f432U)), ((u64)(0xb7155aa93cae4e7aU)), ((u64)(0x01ed8d34e547313eU)), ((u64)(0x326d58a9c5ecf10cU)), ((u64)(0x013478410f4c7ec7U)), ((u64)(0xff08aed437682d4fU)), ((u64)(0x01819651531f9e78U)), ((u64)(0x3ecada89454238a3U)), ((u64)(0x01e1fbe5a7e78617U)), 
((u64)(0x873ec895cb496366U)), ((u64)(0x012d3d6f88f0b3ceU)), ((u64)(0x290e7abb3e1bbc3fU)), ((u64)(0x01788ccb6b2ce0c2U)), ((u64)(0xb352196a0da2ab4fU)), ((u64)(0x01d6affe45f818f2U)), ((u64)(0xb0134fe24885ab11U)), ((u64)(0x01262dfeebbb0f97U)), ((u64)(0x9c1823dadaa715d6U)), ((u64)(0x016fb97ea6a9d37dU)), ((u64)(0x031e2cd19150db4bU)), ((u64)(0x01cba7de5054485dU)), ((u64)(0x21f2dc02fad2890fU)), ((u64)(0x011f48eaf234ad3aU)), ((u64)(0xaa6f9303b9872b53U)), ((u64)(0x01671b25aec1d888U)), 
((u64)(0xd50b77c4a7e8f628U)), ((u64)(0x01c0e1ef1a724eaaU)), ((u64)(0xc5272adae8f199d9U)), ((u64)(0x01188d357087712aU)), ((u64)(0x7670f591a32e004fU)), ((u64)(0x015eb082cca94d75U)), ((u64)(0xd40d32f60bf98063U)), ((u64)(0x01b65ca37fd3a0d2U)), ((u64)(0xc4883fd9c77bf03eU)), ((u64)(0x0111f9e62fe44483U)), ((u64)(0xb5aa4fd0395aec4dU)), ((u64)(0x0156785fbbdd55a4U)), ((u64)(0xe314e3c447b1a760U)), ((u64)(0x01ac1677aad4ab0dU)), ((u64)(0xaded0e5aaccf089cU)), ((u64)(0x010b8e0acac4eae8U)), 
((u64)(0xd96851f15802cac3U)), ((u64)(0x014e718d7d7625a2U)), ((u64)(0x8fc2666dae037d74U)), ((u64)(0x01a20df0dcd3af0bU)), ((u64)(0x39d980048cc22e68U)), ((u64)(0x010548b68a044d67U)), ((u64)(0x084fe005aff2ba03U)), ((u64)(0x01469ae42c8560c1U)), ((u64)(0x4a63d8071bef6883U)), ((u64)(0x0198419d37a6b8f1U)), ((u64)(0x9cfcce08e2eb42a4U)), ((u64)(0x01fe52048590672dU)), ((u64)(0x821e00c58dd309a7U)), ((u64)(0x013ef342d37a407cU)), ((u64)(0xa2a580f6f147cc10U)), ((u64)(0x018eb0138858d09bU)), 
((u64)(0x8b4ee134ad99bf15U)), ((u64)(0x01f25c186a6f04c2U)), ((u64)(0x97114cc0ec80176dU)), ((u64)(0x0137798f428562f9U)), ((u64)(0xfcd59ff127a01d48U)), ((u64)(0x018557f31326bbb7U)), ((u64)(0xfc0b07ed7188249aU)), ((u64)(0x01e6adefd7f06aa5U)), ((u64)(0xbd86e4f466f516e0U)), ((u64)(0x01302cb5e6f642a7U)), ((u64)(0xace89e3180b25c98U)), ((u64)(0x017c37e360b3d351U)), ((u64)(0x1822c5bde0def3beU)), ((u64)(0x01db45dc38e0c826U)), ((u64)(0xcf15bb96ac8b5857U)), ((u64)(0x01290ba9a38c7d17U)), 
((u64)(0xc2db2a7c57ae2e6dU)), ((u64)(0x01734e940c6f9c5dU)), ((u64)(0x3391f51b6d99ba08U)), ((u64)(0x01d022390f8b8375U)), ((u64)(0x403b393124801445U)), ((u64)(0x01221563a9b73229U)), ((u64)(0x904a077d6da01956U)), ((u64)(0x016a9abc9424feb3U)), ((u64)(0x745c895cc9081facU)), ((u64)(0x01c5416bb92e3e60U)), ((u64)(0x48b9d5d9fda513cbU)), ((u64)(0x011b48e353bce6fcU)), ((u64)(0x5ae84b507d0e58beU)), ((u64)(0x01621b1c28ac20bbU)), ((u64)(0x31a25e249c51eeeeU)), ((u64)(0x01baa1e332d728eaU)), 
((u64)(0x5f057ad6e1b33554U)), ((u64)(0x0114a52dffc67992U)), ((u64)(0xf6c6d98c9a2002aaU)), ((u64)(0x0159ce797fb817f6U)), ((u64)(0xb4788fefc0a80354U)), ((u64)(0x01b04217dfa61df4U)), ((u64)(0xf0cb59f5d8690214U)), ((u64)(0x010e294eebc7d2b8U)), ((u64)(0x2cfe30734e83429aU)), ((u64)(0x0151b3a2a6b9c767U)), ((u64)(0xf83dbc9022241340U)), ((u64)(0x01a6208b50683940U)), ((u64)(0x9b2695da15568c08U)), ((u64)(0x0107d457124123c8U)), ((u64)(0xc1f03b509aac2f0aU)), ((u64)(0x0149c96cd6d16cbaU)), 
((u64)(0x726c4a24c1573acdU)), ((u64)(0x019c3bc80c85c7e9U)), ((u64)(0xe783ae56f8d684c0U)), ((u64)(0x0101a55d07d39cf1U)), ((u64)(0x616499ecb70c25f0U)), ((u64)(0x01420eb449c8842eU)), ((u64)(0xf9bdc067e4cf2f6cU)), ((u64)(0x019292615c3aa539U)), ((u64)(0x782d3081de02fb47U)), ((u64)(0x01f736f9b3494e88U)), ((u64)(0x4b1c3e512ac1dd0cU)), ((u64)(0x013a825c100dd115U)), ((u64)(0x9de34de57572544fU)), ((u64)(0x018922f31411455aU)), ((u64)(0x455c215ed2cee963U)), ((u64)(0x01eb6bafd91596b1U)), 
((u64)(0xcb5994db43c151deU)), ((u64)(0x0133234de7ad7e2eU)), ((u64)(0x7e2ffa1214b1a655U)), ((u64)(0x017fec216198ddbaU)), ((u64)(0x1dbbf89699de0febU)), ((u64)(0x01dfe729b9ff1529U)), ((u64)(0xb2957b5e202ac9f3U)), ((u64)(0x012bf07a143f6d39U)), ((u64)(0x1f3ada35a8357c6fU)), ((u64)(0x0176ec98994f4888U)), ((u64)(0x270990c31242db8bU)), ((u64)(0x01d4a7bebfa31aaaU)), ((u64)(0x5865fa79eb69c937U)), ((u64)(0x0124e8d737c5f0aaU)), ((u64)(0xee7f791866443b85U)), ((u64)(0x016e230d05b76cd4U)), 
((u64)(0x2a1f575e7fd54a66U)), ((u64)(0x01c9abd04725480aU)), ((u64)(0x5a53969b0fe54e80U)), ((u64)(0x011e0b622c774d06U)), ((u64)(0xf0e87c41d3dea220U)), ((u64)(0x01658e3ab7952047U)), ((u64)(0xed229b5248d64aa8U)), ((u64)(0x01bef1c9657a6859U)), ((u64)(0x3435a1136d85eea9U)), ((u64)(0x0117571ddf6c8138U)), ((u64)(0x4143095848e76a53U)), ((u64)(0x015d2ce55747a186U)), ((u64)(0xd193cbae5b2144e8U)), ((u64)(0x01b4781ead1989e7U)), ((u64)(0xe2fc5f4cf8f4cb11U)), ((u64)(0x0110cb132c2ff630U)), 
((u64)(0x1bbb77203731fdd5U)), ((u64)(0x0154fdd7f73bf3bdU)), ((u64)(0x62aa54e844fe7d4aU)), ((u64)(0x01aa3d4df50af0acU)), ((u64)(0xbdaa75112b1f0e4eU)), ((u64)(0x010a6650b926d66bU)), ((u64)(0xad15125575e6d1e2U)), ((u64)(0x014cffe4e7708c06U)), ((u64)(0x585a56ead360865bU)), ((u64)(0x01a03fde214caf08U)), ((u64)(0x37387652c41c53f8U)), ((u64)(0x010427ead4cfed65U)), ((u64)(0x850693e7752368f7U)), ((u64)(0x014531e58a03e8beU)), ((u64)(0x264838e1526c4334U)), ((u64)(0x01967e5eec84e2eeU)), 
((u64)(0xafda4719a7075402U)), ((u64)(0x01fc1df6a7a61ba9U)), ((u64)(0x0de86c7008649481U)), ((u64)(0x013d92ba28c7d14aU)), ((u64)(0x9162878c0a7db9a1U)), ((u64)(0x018cf768b2f9c59cU)), ((u64)(0xb5bb296f0d1d280aU)), ((u64)(0x01f03542dfb83703U)), ((u64)(0x5194f9e568323906U)), ((u64)(0x01362149cbd32262U)), ((u64)(0xe5fa385ec23ec747U)), ((u64)(0x0183a99c3ec7eafaU)), ((u64)(0x9f78c67672ce7919U)), ((u64)(0x01e494034e79e5b9U)), ((u64)(0x03ab7c0a07c10bb0U)), ((u64)(0x012edc82110c2f94U)), 
((u64)(0x04965b0c89b14e9cU)), ((u64)(0x017a93a2954f3b79U)), ((u64)(0x45bbf1cfac1da243U)), ((u64)(0x01d9388b3aa30a57U)), ((u64)(0x8b957721cb92856aU)), ((u64)(0x0127c35704a5e676U)), ((u64)(0x2e7ad4ea3e7726c4U)), ((u64)(0x0171b42cc5cf6014U)), ((u64)(0x3a198a24ce14f075U)), ((u64)(0x01ce2137f7433819U)), ((u64)(0xc44ff65700cd1649U)), ((u64)(0x0120d4c2fa8a030fU)), ((u64)(0xb563f3ecc1005bdbU)), ((u64)(0x016909f3b92c83d3U)), ((u64)(0xa2bcf0e7f14072d2U)), ((u64)(0x01c34c70a777a4c8U)), 
((u64)(0x65b61690f6c847c3U)), ((u64)(0x011a0fc668aac6fdU)), ((u64)(0xbf239c35347a59b4U)), ((u64)(0x016093b802d578bcU)), ((u64)(0xeeec83428198f021U)), ((u64)(0x01b8b8a6038ad6ebU)), ((u64)(0x7553d20990ff9615U)), ((u64)(0x01137367c236c653U)), ((u64)(0x52a8c68bf53f7b9aU)), ((u64)(0x01585041b2c477e8U)), ((u64)(0x6752f82ef28f5a81U)), ((u64)(0x01ae64521f7595e2U)), ((u64)(0x8093db1d57999890U)), ((u64)(0x010cfeb353a97dadU)), ((u64)(0xe0b8d1e4ad7ffeb4U)), ((u64)(0x01503e602893dd18U)), 
((u64)(0x18e7065dd8dffe62U)), ((u64)(0x01a44df832b8d45fU)), ((u64)(0x6f9063faa78bfefdU)), ((u64)(0x0106b0bb1fb384bbU)), ((u64)(0x4b747cf9516efebcU)), ((u64)(0x01485ce9e7a065eaU)), ((u64)(0xde519c37a5cabe6bU)), ((u64)(0x019a742461887f64U)), ((u64)(0x0af301a2c79eb703U)), ((u64)(0x01008896bcf54f9fU)), ((u64)(0xcdafc20b798664c4U)), ((u64)(0x0140aabc6c32a386U)), ((u64)(0x811bb28e57e7fdf5U)), ((u64)(0x0190d56b873f4c68U)), ((u64)(0xa1629f31ede1fd72U)), ((u64)(0x01f50ac6690f1f82U)), 
((u64)(0xa4dda37f34ad3e67U)), ((u64)(0x013926bc01a973b1U)), ((u64)(0x0e150c5f01d88e01U)), ((u64)(0x0187706b0213d09eU)), ((u64)(0x919a4f76c24eb181U)), ((u64)(0x01e94c85c298c4c5U)), ((u64)(0x7b0071aa39712ef1U)), ((u64)(0x0131cfd3999f7afbU)), ((u64)(0x59c08e14c7cd7aadU)), ((u64)(0x017e43c8800759baU)), ((u64)(0xf030b199f9c0d958U)), ((u64)(0x01ddd4baa0093028U)), ((u64)(0x961e6f003c1887d7U)), ((u64)(0x012aa4f4a405be19U)), ((u64)(0xfba60ac04b1ea9cdU)), ((u64)(0x01754e31cd072d9fU)), 
((u64)(0xfa8f8d705de65440U)), ((u64)(0x01d2a1be4048f907U)), ((u64)(0xfc99b8663aaff4a8U)), ((u64)(0x0123a516e82d9ba4U)), ((u64)(0x3bc0267fc95bf1d2U)), ((u64)(0x016c8e5ca239028eU)), ((u64)(0xcab0301fbbb2ee47U)), ((u64)(0x01c7b1f3cac74331U)), ((u64)(0x1eae1e13d54fd4ecU)), ((u64)(0x011ccf385ebc89ffU)), ((u64)(0xe659a598caa3ca27U)), ((u64)(0x01640306766bac7eU)), ((u64)(0x9ff00efefd4cbcb1U)), ((u64)(0x01bd03c81406979eU)), ((u64)(0x23f6095f5e4ff5efU)), ((u64)(0x0116225d0c841ec3U)), 
((u64)(0xecf38bb735e3f36aU)), ((u64)(0x015baaf44fa52673U)), ((u64)(0xe8306ea5035cf045U)), ((u64)(0x01b295b1638e7010U)), ((u64)(0x911e4527221a162bU)), ((u64)(0x010f9d8ede39060aU)), ((u64)(0x3565d670eaa09bb6U)), ((u64)(0x015384f295c7478dU)), ((u64)(0x82bf4c0d2548c2a3U)), ((u64)(0x01a8662f3b391970U)), ((u64)(0x51b78f88374d79a6U)), ((u64)(0x01093fdd8503afe6U)), ((u64)(0xe625736a4520d810U)), ((u64)(0x014b8fd4e6449bdfU)), ((u64)(0xdfaed044d6690e14U)), ((u64)(0x019e73ca1fd5c2d7U)), ((u64)(0xebcd422b0601a8ccU)), ((u64)(0x0103085e53e599c6U)), ((u64)(0xa6c092b5c78212ffU)), ((u64)(0x0143ca75e8df0038U)), ((u64)(0xd070b763396297bfU)), ((u64)(0x0194bd136316c046U)), ((u64)(0x848ce53c07bb3dafU)), ((u64)(0x01f9ec583bdc7058U)), ((u64)(0x52d80f4584d5068dU)), ((u64)(0x013c33b72569c637U)), ((u64)(0x278e1316e60a4831U)), ((u64)(0x018b40a4eec437c5U))}; // fixed array const
Array_fixed_u64_584 _const_strconv__pow5_inv_split_64_x = {((u64)(0x0000000000000001U)), ((u64)(0x0400000000000000U)), ((u64)(0x3333333333333334U)), ((u64)(0x0333333333333333U)), ((u64)(0x28f5c28f5c28f5c3U)), ((u64)(0x028f5c28f5c28f5cU)), ((u64)(0xed916872b020c49cU)), ((u64)(0x020c49ba5e353f7cU)), ((u64)(0xaf4f0d844d013a93U)), ((u64)(0x0346dc5d63886594U)), ((u64)(0x8c3f3e0370cdc876U)), ((u64)(0x029f16b11c6d1e10U)), ((u64)(0xd698fe69270b06c5U)), ((u64)(0x0218def416bdb1a6U)), ((u64)(0xf0f4ca41d811a46eU)), ((u64)(0x035afe535795e90aU)), 
((u64)(0xf3f70834acdae9f1U)), ((u64)(0x02af31dc4611873bU)), ((u64)(0x5cc5a02a23e254c1U)), ((u64)(0x0225c17d04dad296U)), ((u64)(0xfad5cd10396a2135U)), ((u64)(0x036f9bfb3af7b756U)), ((u64)(0xfbde3da69454e75eU)), ((u64)(0x02bfaffc2f2c92abU)), ((u64)(0x2fe4fe1edd10b918U)), ((u64)(0x0232f33025bd4223U)), ((u64)(0x4ca19697c81ac1bfU)), ((u64)(0x0384b84d092ed038U)), ((u64)(0x3d4e1213067bce33U)), ((u64)(0x02d09370d4257360U)), ((u64)(0x643e74dc052fd829U)), ((u64)(0x024075f3dceac2b3U)), 
((u64)(0x6d30baf9a1e626a7U)), ((u64)(0x039a5652fb113785U)), ((u64)(0x2426fbfae7eb5220U)), ((u64)(0x02e1dea8c8da92d1U)), ((u64)(0x1cebfcc8b9890e80U)), ((u64)(0x024e4bba3a487574U)), ((u64)(0x94acc7a78f41b0ccU)), ((u64)(0x03b07929f6da5586U)), ((u64)(0xaa23d2ec729af3d7U)), ((u64)(0x02f394219248446bU)), ((u64)(0xbb4fdbf05baf2979U)), ((u64)(0x025c768141d369efU)), ((u64)(0xc54c931a2c4b758dU)), ((u64)(0x03c7240202ebdcb2U)), ((u64)(0x9dd6dc14f03c5e0bU)), ((u64)(0x0305b66802564a28U)), 
((u64)(0x4b1249aa59c9e4d6U)), ((u64)(0x026af8533511d4edU)), ((u64)(0x44ea0f76f60fd489U)), ((u64)(0x03de5a1ebb4fbb15U)), ((u64)(0x6a54d92bf80caa07U)), ((u64)(0x0318481895d96277U)), ((u64)(0x21dd7a89933d54d2U)), ((u64)(0x0279d346de4781f9U)), ((u64)(0x362f2a75b8622150U)), ((u64)(0x03f61ed7ca0c0328U)), ((u64)(0xf825bb91604e810dU)), ((u64)(0x032b4bdfd4d668ecU)), ((u64)(0xc684960de6a5340bU)), ((u64)(0x0289097fdd7853f0U)), ((u64)(0xd203ab3e521dc33cU)), ((u64)(0x02073accb12d0ff3U)), 
((u64)(0xe99f7863b696052cU)), ((u64)(0x033ec47ab514e652U)), ((u64)(0x87b2c6b62bab3757U)), ((u64)(0x02989d2ef743eb75U)), ((u64)(0xd2f56bc4efbc2c45U)), ((u64)(0x0213b0f25f69892aU)), ((u64)(0x1e55793b192d13a2U)), ((u64)(0x0352b4b6ff0f41deU)), ((u64)(0x4b77942f475742e8U)), ((u64)(0x02a8909265a5ce4bU)), ((u64)(0xd5f9435905df68baU)), ((u64)(0x022073a8515171d5U)), ((u64)(0x565b9ef4d6324129U)), ((u64)(0x03671f73b54f1c89U)), ((u64)(0xdeafb25d78283421U)), ((u64)(0x02b8e5f62aa5b06dU)), 
((u64)(0x188c8eb12cecf681U)), ((u64)(0x022d84c4eeeaf38bU)), ((u64)(0x8dadb11b7b14bd9bU)), ((u64)(0x037c07a17e44b8deU)), ((u64)(0x7157c0e2c8dd647cU)), ((u64)(0x02c99fb46503c718U)), ((u64)(0x8ddfcd823a4ab6caU)), ((u64)(0x023ae629ea696c13U)), ((u64)(0x1632e269f6ddf142U)), ((u64)(0x0391704310a8acecU)), ((u64)(0x44f581ee5f17f435U)), ((u64)(0x02dac035a6ed5723U)), ((u64)(0x372ace584c1329c4U)), ((u64)(0x024899c4858aac1cU)), ((u64)(0xbeaae3c079b842d3U)), ((u64)(0x03a75c6da27779c6U)), 
((u64)(0x6555830061603576U)), ((u64)(0x02ec49f14ec5fb05U)), ((u64)(0xb7779c004de6912bU)), ((u64)(0x0256a18dd89e626aU)), ((u64)(0xf258f99a163db512U)), ((u64)(0x03bdcf495a9703ddU)), ((u64)(0x5b7a614811caf741U)), ((u64)(0x02fe3f6de212697eU)), ((u64)(0xaf951aa00e3bf901U)), ((u64)(0x0264ff8b1b41edfeU)), ((u64)(0x7f54f7667d2cc19bU)), ((u64)(0x03d4cc11c5364997U)), ((u64)(0x32aa5f8530f09ae3U)), ((u64)(0x0310a3416a91d479U)), ((u64)(0xf55519375a5a1582U)), ((u64)(0x0273b5cdeedb1060U)), 
((u64)(0xbbbb5b8bc3c3559dU)), ((u64)(0x03ec56164af81a34U)), ((u64)(0x2fc916096969114aU)), ((u64)(0x03237811d593482aU)), ((u64)(0x596dab3ababa743cU)), ((u64)(0x0282c674aadc39bbU)), ((u64)(0x478aef622efb9030U)), ((u64)(0x0202385d557cfafcU)), ((u64)(0xd8de4bd04b2c19e6U)), ((u64)(0x0336c0955594c4c6U)), ((u64)(0xad7ea30d08f014b8U)), ((u64)(0x029233aaaadd6a38U)), ((u64)(0x24654f3da0c01093U)), ((u64)(0x020e8fbbbbe454faU)), ((u64)(0x3a3bb1fc346680ebU)), ((u64)(0x034a7f92c63a2190U)), 
((u64)(0x94fc8e635d1ecd89U)), ((u64)(0x02a1ffa89e94e7a6U)), ((u64)(0xaa63a51c4a7f0ad4U)), ((u64)(0x021b32ed4baa52ebU)), ((u64)(0xdd6c3b607731aaedU)), ((u64)(0x035eb7e212aa1e45U)), ((u64)(0x1789c919f8f488bdU)), ((u64)(0x02b22cb4dbbb4b6bU)), ((u64)(0xac6e3a7b2d906d64U)), ((u64)(0x022823c3e2fc3c55U)), ((u64)(0x13e390c515b3e23aU)), ((u64)(0x03736c6c9e606089U)), ((u64)(0xdcb60d6a77c31b62U)), ((u64)(0x02c2bd23b1e6b3a0U)), ((u64)(0x7d5e7121f968e2b5U)), ((u64)(0x0235641c8e52294dU)), 
((u64)(0xc8971b698f0e3787U)), ((u64)(0x0388a02db0837548U)), ((u64)(0xa078e2bad8d82c6cU)), ((u64)(0x02d3b357c0692aa0U)), ((u64)(0xe6c71bc8ad79bd24U)), ((u64)(0x0242f5dfcd20eee6U)), ((u64)(0x0ad82c7448c2c839U)), ((u64)(0x039e5632e1ce4b0bU)), ((u64)(0x3be023903a356cfaU)), ((u64)(0x02e511c24e3ea26fU)), ((u64)(0x2fe682d9c82abd95U)), ((u64)(0x0250db01d8321b8cU)), ((u64)(0x4ca4048fa6aac8eeU)), ((u64)(0x03b4919c8d1cf8e0U)), ((u64)(0x3d5003a61eef0725U)), ((u64)(0x02f6dae3a4172d80U)), 
((u64)(0x9773361e7f259f51U)), ((u64)(0x025f1582e9ac2466U)), ((u64)(0x8beb89ca6508fee8U)), ((u64)(0x03cb559e42ad070aU)), ((u64)(0x6fefa16eb73a6586U)), ((u64)(0x0309114b688a6c08U)), ((u64)(0xf3261abef8fb846bU)), ((u64)(0x026da76f86d52339U)), ((u64)(0x51d691318e5f3a45U)), ((u64)(0x03e2a57f3e21d1f6U)), ((u64)(0x0e4540f471e5c837U)), ((u64)(0x031bb798fe8174c5U)), ((u64)(0xd8376729f4b7d360U)), ((u64)(0x027c92e0cb9ac3d0U)), ((u64)(0xf38bd84321261effU)), ((u64)(0x03fa849adf5e061aU)), 
((u64)(0x293cad0280eb4bffU)), ((u64)(0x032ed07be5e4d1afU)), ((u64)(0xedca240200bc3cccU)), ((u64)(0x028bd9fcb7ea4158U)), ((u64)(0xbe3b50019a3030a4U)), ((u64)(0x02097b309321cde0U)), ((u64)(0xc9f88002904d1a9fU)), ((u64)(0x03425eb41e9c7c9aU)), ((u64)(0x3b2d3335403daee6U)), ((u64)(0x029b7ef67ee396e2U)), ((u64)(0x95bdc291003158b8U)), ((u64)(0x0215ff2b98b6124eU)), ((u64)(0x892f9db4cd1bc126U)), ((u64)(0x035665128df01d4aU)), ((u64)(0x07594af70a7c9a85U)), ((u64)(0x02ab840ed7f34aa2U)), 
((u64)(0x6c476f2c0863aed1U)), ((u64)(0x0222d00bdff5d54eU)), ((u64)(0x13a57eacda3917b4U)), ((u64)(0x036ae67966562217U)), ((u64)(0x0fb7988a482dac90U)), ((u64)(0x02bbeb9451de81acU)), ((u64)(0xd95fad3b6cf156daU)), ((u64)(0x022fefa9db1867bcU)), ((u64)(0xf565e1f8ae4ef15cU)), ((u64)(0x037fe5dc91c0a5faU)), ((u64)(0x911e4e608b725ab0U)), ((u64)(0x02ccb7e3a7cd5195U)), ((u64)(0xda7ea51a0928488dU)), ((u64)(0x023d5fe9530aa7aaU)), ((u64)(0xf7310829a8407415U)), ((u64)(0x039566421e7772aaU)), 
((u64)(0x2c2739baed005cdeU)), ((u64)(0x02ddeb68185f8eefU)), ((u64)(0xbcec2e2f24004a4bU)), ((u64)(0x024b22b9ad193f25U)), ((u64)(0x94ad16b1d333aa11U)), ((u64)(0x03ab6ac2ae8ecb6fU)), ((u64)(0xaa241227dc2954dbU)), ((u64)(0x02ef889bbed8a2bfU)), ((u64)(0x54e9a81fe35443e2U)), ((u64)(0x02593a163246e899U)), ((u64)(0x2175d9cc9eed396aU)), ((u64)(0x03c1f689ea0b0dc2U)), ((u64)(0xe7917b0a18bdc788U)), ((u64)(0x03019207ee6f3e34U)), ((u64)(0xb9412f3b46fe393aU)), ((u64)(0x0267a8065858fe90U)), 
((u64)(0xf535185ed7fd285cU)), ((u64)(0x03d90cd6f3c1974dU)), ((u64)(0xc42a79e57997537dU)), ((u64)(0x03140a458fce12a4U)), ((u64)(0x03552e512e12a931U)), ((u64)(0x02766e9e0ca4dbb7U)), ((u64)(0x9eeeb081e3510eb4U)), ((u64)(0x03f0b0fce107c5f1U)), ((u64)(0x4bf226ce4f740bc3U)), ((u64)(0x0326f3fd80d304c1U)), ((u64)(0xa3281f0b72c33c9cU)), ((u64)(0x02858ffe00a8d09aU)), ((u64)(0x1c2018d5f568fd4aU)), ((u64)(0x020473319a20a6e2U)), ((u64)(0xf9ccf48988a7fba9U)), ((u64)(0x033a51e8f69aa49cU)), 
((u64)(0xfb0a5d3ad3b99621U)), ((u64)(0x02950e53f87bb6e3U)), ((u64)(0x2f3b7dc8a96144e7U)), ((u64)(0x0210d8432d2fc583U)), ((u64)(0xe52bfc7442353b0cU)), ((u64)(0x034e26d1e1e608d1U)), ((u64)(0xb756639034f76270U)), ((u64)(0x02a4ebdb1b1e6d74U)), ((u64)(0x2c451c735d92b526U)), ((u64)(0x021d897c15b1f12aU)), ((u64)(0x13a1c71efc1deea3U)), ((u64)(0x0362759355e981ddU)), ((u64)(0x761b05b2634b2550U)), ((u64)(0x02b52adc44bace4aU)), ((u64)(0x91af37c1e908eaa6U)), ((u64)(0x022a88b036fbd83bU)), 
((u64)(0x82b1f2cfdb417770U)), ((u64)(0x03774119f192f392U)), ((u64)(0xcef4c23fe29ac5f3U)), ((u64)(0x02c5cdae5adbf60eU)), ((u64)(0x3f2a34ffe87bd190U)), ((u64)(0x0237d7beaf165e72U)), ((u64)(0x984387ffda5fb5b2U)), ((u64)(0x038c8c644b56fd83U)), ((u64)(0xe0360666484c915bU)), ((u64)(0x02d6d6b6a2abfe02U)), ((u64)(0x802b3851d3707449U)), ((u64)(0x024578921bbccb35U)), ((u64)(0x99dec082ebe72075U)), ((u64)(0x03a25a835f947855U)), ((u64)(0xae4bcd358985b391U)), ((u64)(0x02e8486919439377U)), 
((u64)(0xbea30a913ad15c74U)), ((u64)(0x02536d20e102dc5fU)), ((u64)(0xfdd1aa81f7b560b9U)), ((u64)(0x03b8ae9b019e2d65U)), ((u64)(0x97daeece5fc44d61U)), ((u64)(0x02fa2548ce182451U)), ((u64)(0xdfe258a51969d781U)), ((u64)(0x0261b76d71ace9daU)), ((u64)(0x996a276e8f0fbf34U)), ((u64)(0x03cf8be24f7b0fc4U)), ((u64)(0xe121b9253f3fcc2aU)), ((u64)(0x030c6fe83f95a636U)), ((u64)(0xb41afa8432997022U)), ((u64)(0x02705986994484f8U)), ((u64)(0xecf7f739ea8f19cfU)), ((u64)(0x03e6f5a4286da18dU)), 
((u64)(0x23f99294bba5ae40U)), ((u64)(0x031f2ae9b9f14e0bU)), ((u64)(0x4ffadbaa2fb7be99U)), ((u64)(0x027f5587c7f43e6fU)), ((u64)(0x7ff7c5dd1925fdc2U)), ((u64)(0x03feef3fa6539718U)), ((u64)(0xccc637e4141e649bU)), ((u64)(0x033258ffb842df46U)), ((u64)(0xd704f983434b83afU)), ((u64)(0x028ead9960357f6bU)), ((u64)(0x126a6135cf6f9c8cU)), ((u64)(0x020bbe144cf79923U)), ((u64)(0x83dd685618b29414U)), ((u64)(0x0345fced47f28e9eU)), ((u64)(0x9cb12044e08edcddU)), ((u64)(0x029e63f1065ba54bU)), 
((u64)(0x16f419d0b3a57d7dU)), ((u64)(0x02184ff405161dd6U)), ((u64)(0x8b20294dec3bfbfbU)), ((u64)(0x035a19866e89c956U)), ((u64)(0x3c19baa4bcfcc996U)), ((u64)(0x02ae7ad1f207d445U)), ((u64)(0xc9ae2eea30ca3adfU)), ((u64)(0x02252f0e5b39769dU)), ((u64)(0x0f7d17dd1add2afdU)), ((u64)(0x036eb1b091f58a96U)), ((u64)(0x3f97464a7be42264U)), ((u64)(0x02bef48d41913babU)), ((u64)(0xcc790508631ce850U)), ((u64)(0x02325d3dce0dc955U)), ((u64)(0xe0c1a1a704fb0d4dU)), ((u64)(0x0383c862e3494222U)), 
((u64)(0x4d67b4859d95a43eU)), ((u64)(0x02cfd3824f6dce82U)), ((u64)(0x711fc39e17aae9cbU)), ((u64)(0x023fdc683f8b0b9bU)), ((u64)(0xe832d2968c44a945U)), ((u64)(0x039960a6cc11ac2bU)), ((u64)(0xecf575453d03ba9eU)), ((u64)(0x02e11a1f09a7bcefU)), ((u64)(0x572ac4376402fbb1U)), ((u64)(0x024dae7f3aec9726U)), ((u64)(0x58446d256cd192b5U)), ((u64)(0x03af7d985e47583dU)), ((u64)(0x79d0575123dadbc4U)), ((u64)(0x02f2cae04b6c4697U)), ((u64)(0x94a6ac40e97be303U)), ((u64)(0x025bd5803c569edfU)), 
((u64)(0x8771139b0f2c9e6cU)), ((u64)(0x03c62266c6f0fe32U)), ((u64)(0x9f8da948d8f07ebdU)), ((u64)(0x0304e85238c0cb5bU)), ((u64)(0xe60aedd3e0c06564U)), ((u64)(0x026a5374fa33d5e2U)), ((u64)(0xa344afb9679a3bd2U)), ((u64)(0x03dd5254c3862304U)), ((u64)(0xe903bfc78614fca8U)), ((u64)(0x031775109c6b4f36U)), ((u64)(0xba6966393810ca20U)), ((u64)(0x02792a73b055d8f8U)), ((u64)(0x2a423d2859b4769aU)), ((u64)(0x03f510b91a22f4c1U)), ((u64)(0xee9b642047c39215U)), ((u64)(0x032a73c7481bf700U)), 
((u64)(0xbee2b680396941aaU)), ((u64)(0x02885c9f6ce32c00U)), ((u64)(0xff1bc53361210155U)), ((u64)(0x0206b07f8a4f5666U)), ((u64)(0x31c6085235019bbbU)), ((u64)(0x033de73276e5570bU)), ((u64)(0x27d1a041c4014963U)), ((u64)(0x0297ec285f1ddf3cU)), ((u64)(0xeca7b367d0010782U)), ((u64)(0x021323537f4b18fcU)), ((u64)(0xadd91f0c8001a59dU)), ((u64)(0x0351d21f3211c194U)), ((u64)(0xf17a7f3d3334847eU)), ((u64)(0x02a7db4c280e3476U)), ((u64)(0x279532975c2a0398U)), ((u64)(0x021fe2a3533e905fU)), 
((u64)(0xd8eeb75893766c26U)), ((u64)(0x0366376bb8641a31U)), ((u64)(0x7a5892ad42c52352U)), ((u64)(0x02b82c562d1ce1c1U)), ((u64)(0xfb7a0ef102374f75U)), ((u64)(0x022cf044f0e3e7cdU)), ((u64)(0xc59017e8038bb254U)), ((u64)(0x037b1a07e7d30c7cU)), ((u64)(0x37a67986693c8eaaU)), ((u64)(0x02c8e19feca8d6caU)), ((u64)(0xf951fad1edca0bbbU)), ((u64)(0x023a4e198a20abd4U)), ((u64)(0x28832ae97c76792bU)), ((u64)(0x03907cf5a9cddfbbU)), ((u64)(0x2068ef21305ec756U)), ((u64)(0x02d9fd9154a4b2fcU)), 
((u64)(0x19ed8c1a8d189f78U)), ((u64)(0x0247fe0ddd508f30U)), ((u64)(0x5caf4690e1c0ff26U)), ((u64)(0x03a66349621a7eb3U)), ((u64)(0x4a25d20d81673285U)), ((u64)(0x02eb82a11b48655cU)), ((u64)(0x3b5174d79ab8f537U)), ((u64)(0x0256021a7c39eab0U)), ((u64)(0x921bee25c45b21f1U)), ((u64)(0x03bcd02a605caab3U)), ((u64)(0xdb498b5169e2818eU)), ((u64)(0x02fd735519e3bbc2U)), ((u64)(0x15d46f7454b53472U)), ((u64)(0x02645c4414b62fcfU)), ((u64)(0xefba4bed545520b6U)), ((u64)(0x03d3c6d35456b2e4U)), 
((u64)(0xf2fb6ff110441a2bU)), ((u64)(0x030fd242a9def583U)), ((u64)(0x8f2f8cc0d9d014efU)), ((u64)(0x02730e9bbb18c469U)), ((u64)(0xb1e5ae015c80217fU)), ((u64)(0x03eb4a92c4f46d75U)), ((u64)(0xc1848b344a001accU)), ((u64)(0x0322a20f03f6bdf7U)), ((u64)(0xce03a2903b3348a3U)), ((u64)(0x02821b3f365efe5fU)), ((u64)(0xd802e873628f6d4fU)), ((u64)(0x0201af65c518cb7fU)), ((u64)(0x599e40b89db2487fU)), ((u64)(0x0335e56fa1c14599U)), ((u64)(0xe14b66fa17c1d399U)), ((u64)(0x029184594e3437adU)), 
((u64)(0x81091f2e7967dc7aU)), ((u64)(0x020e037aa4f692f1U)), ((u64)(0x9b41cb7d8f0c93f6U)), ((u64)(0x03499f2aa18a84b5U)), ((u64)(0xaf67d5fe0c0a0ff8U)), ((u64)(0x02a14c221ad536f7U)), ((u64)(0xf2b977fe70080cc7U)), ((u64)(0x021aa34e7bddc592U)), ((u64)(0x1df58cca4cd9ae0bU)), ((u64)(0x035dd2172c9608ebU)), ((u64)(0xe4c470a1d7148b3cU)), ((u64)(0x02b174df56de6d88U)), ((u64)(0x83d05a1b1276d5caU)), ((u64)(0x022790b2abe5246dU)), ((u64)(0x9fb3c35e83f1560fU)), ((u64)(0x0372811ddfd50715U)), 
((u64)(0xb2f635e5365aab3fU)), ((u64)(0x02c200e4b310d277U)), ((u64)(0xf591c4b75eaeef66U)), ((u64)(0x0234cd83c273db92U)), ((u64)(0xef4fa125644b18a3U)), ((u64)(0x0387af39371fc5b7U)), ((u64)(0x8c3fb41de9d5ad4fU)), ((u64)(0x02d2f2942c196af9U)), ((u64)(0x3cffc34b2177bdd9U)), ((u64)(0x02425ba9bce12261U)), ((u64)(0x94cc6bab68bf9628U)), ((u64)(0x039d5f75fb01d09bU)), ((u64)(0x10a38955ed6611b9U)), ((u64)(0x02e44c5e6267da16U)), ((u64)(0xda1c6dde5784dafbU)), ((u64)(0x02503d184eb97b44U)), 
((u64)(0xf693e2fd58d49191U)), ((u64)(0x03b394f3b128c53aU)), ((u64)(0xc5431bfde0aa0e0eU)), ((u64)(0x02f610c2f4209dc8U)), ((u64)(0x6a9c1664b3bb3e72U)), ((u64)(0x025e73cf29b3b16dU)), ((u64)(0x10f9bd6dec5eca4fU)), ((u64)(0x03ca52e50f85e8afU)), ((u64)(0xda616457f04bd50cU)), ((u64)(0x03084250d937ed58U)), ((u64)(0xe1e783798d09773dU)), ((u64)(0x026d01da475ff113U)), ((u64)(0x030c058f480f252eU)), ((u64)(0x03e19c9072331b53U)), ((u64)(0x68d66ad906728425U)), ((u64)(0x031ae3a6c1c27c42U)), 
((u64)(0x8711ef14052869b7U)), ((u64)(0x027be952349b969bU)), ((u64)(0x0b4fe4ecd50d75f2U)), ((u64)(0x03f97550542c242cU)), ((u64)(0xa2a650bd773df7f5U)), ((u64)(0x032df7737689b689U)), ((u64)(0xb551da312c31932aU)), ((u64)(0x028b2c5c5ed49207U)), ((u64)(0x5ddb14f4235adc22U)), ((u64)(0x0208f049e576db39U)), ((u64)(0x2fc4ee536bc49369U)), ((u64)(0x034180763bf15ec2U)), ((u64)(0xbfd0bea92303a921U)), ((u64)(0x029acd2b63277f01U)), ((u64)(0x9973cbba8269541aU)), ((u64)(0x021570ef8285ff34U)), 
((u64)(0x5bec792a6a42202aU)), ((u64)(0x0355817f373ccb87U)), ((u64)(0xe3239421ee9b4cefU)), ((u64)(0x02aacdff5f63d605U)), ((u64)(0xb5b6101b25490a59U)), ((u64)(0x02223e65e5e97804U)), ((u64)(0x22bce691d541aa27U)), ((u64)(0x0369fd6fd64259a1U)), ((u64)(0xb563eba7ddce21b9U)), ((u64)(0x02bb31264501e14dU)), ((u64)(0xf78322ecb171b494U)), ((u64)(0x022f5a850401810aU)), ((u64)(0x259e9e47824f8753U)), ((u64)(0x037ef73b399c01abU)), ((u64)(0x1e187e9f9b72d2a9U)), ((u64)(0x02cbf8fc2e1667bcU)), 
((u64)(0x4b46cbb2e2c24221U)), ((u64)(0x023cc73024deb963U)), ((u64)(0x120adf849e039d01U)), ((u64)(0x039471e6a1645bd2U)), ((u64)(0xdb3be603b19c7d9aU)), ((u64)(0x02dd27ebb4504974U)), ((u64)(0x7c2feb3627b0647cU)), ((u64)(0x024a865629d9d45dU)), ((u64)(0x2d197856a5e7072cU)), ((u64)(0x03aa7089dc8fba2fU)), ((u64)(0x8a7ac6abb7ec05bdU)), ((u64)(0x02eec06e4a0c94f2U)), ((u64)(0xd52f05562cbcd164U)), ((u64)(0x025899f1d4d6dd8eU)), ((u64)(0x21e4d556adfae8a0U)), ((u64)(0x03c0f64fbaf1627eU)), 
((u64)(0xe7ea444557fbed4dU)), ((u64)(0x0300c50c958de864U)), ((u64)(0xecbb69d1132ff10aU)), ((u64)(0x0267040a113e5383U)), ((u64)(0xadf8a94e851981aaU)), ((u64)(0x03d8067681fd526cU)), ((u64)(0x8b2d543ed0e13488U)), ((u64)(0x0313385ece6441f0U)), ((u64)(0xd5bddcff0d80f6d3U)), ((u64)(0x0275c6b23eb69b26U)), ((u64)(0x892fc7fe7c018aebU)), ((u64)(0x03efa45064575ea4U)), ((u64)(0x3a8c9ffec99ad589U)), ((u64)(0x03261d0d1d12b21dU)), ((u64)(0xc8707fff07af113bU)), ((u64)(0x0284e40a7da88e7dU)), 
((u64)(0x39f39998d2f2742fU)), ((u64)(0x0203e9a1fe2071feU)), ((u64)(0x8fec28f484b7204bU)), ((u64)(0x033975cffd00b663U)), ((u64)(0xd989ba5d36f8e6a2U)), ((u64)(0x02945e3ffd9a2b82U)), ((u64)(0x47a161e42bfa521cU)), ((u64)(0x02104b66647b5602U)), ((u64)(0x0c35696d132a1cf9U)), ((u64)(0x034d4570a0c5566aU)), ((u64)(0x09c454574288172dU)), ((u64)(0x02a4378d4d6aab88U)), ((u64)(0xa169dd129ba0128bU)), ((u64)(0x021cf93dd7888939U)), ((u64)(0x0242fb50f9001dabU)), ((u64)(0x03618ec958da7529U)), 
((u64)(0x9b68c90d940017bcU)), ((u64)(0x02b4723aad7b90edU)), ((u64)(0x4920a0d7a999ac96U)), ((u64)(0x0229f4fbbdfc73f1U)), ((u64)(0x750101590f5c4757U)), ((u64)(0x037654c5fcc71fe8U)), ((u64)(0x2a6734473f7d05dfU)), ((u64)(0x02c5109e63d27fedU)), ((u64)(0xeeb8f69f65fd9e4cU)), ((u64)(0x0237407eb641fff0U)), ((u64)(0xe45b24323cc8fd46U)), ((u64)(0x038b9a6456cfffe7U)), ((u64)(0xb6af502830a0ca9fU)), ((u64)(0x02d6151d123fffecU)), ((u64)(0xf88c402026e7087fU)), ((u64)(0x0244ddb0db666656U)), 
((u64)(0x2746cd003e3e73feU)), ((u64)(0x03a162b4923d708bU)), ((u64)(0x1f6bd73364fec332U)), ((u64)(0x02e7822a0e978d3cU)), ((u64)(0xe5efdf5c50cbcf5bU)), ((u64)(0x0252ce880bac70fcU)), ((u64)(0x3cb2fefa1adfb22bU)), ((u64)(0x03b7b0d9ac471b2eU)), ((u64)(0x308f3261af195b56U)), ((u64)(0x02f95a47bd05af58U)), ((u64)(0x5a0c284e25ade2abU)), ((u64)(0x0261150630d15913U)), ((u64)(0x29ad0d49d5e30445U)), ((u64)(0x03ce8809e7b55b52U)), ((u64)(0x548a7107de4f369dU)), ((u64)(0x030ba007ec9115dbU)), ((u64)(0xdd3b8d9fe50c2bb1U)), ((u64)(0x026fb3398a0dab15U)), ((u64)(0x952c15cca1ad12b5U)), ((u64)(0x03e5eb8f434911bcU)), ((u64)(0x775677d6e7bda891U)), ((u64)(0x031e560c35d40e30U)), ((u64)(0xc5dec645863153a7U)), ((u64)(0x027eab3cf7dcd826U))}; // fixed array const
bool v_memory_panic = false; // global 6

int g_main_argc = ((int)(0)); // global 6

voidptr g_main_argv = ((void*)0); // global 6

voidptr g_live_reload_info; // global 6

i64 _const_min_i64; // inited later
const f64 _const_max_load_factor = 0.8; // precomputed2
const u32 _const_hash_mask = 16777215; // precomputed2
const u32 _const_probe_inc = 16777216; // precomputed2
IError _const_none__; // inited later
Array_fixed_i32_1264 _const_rune_maps = {((i32)(0xB5)), 0xB5, 743, 0, 0xC0, 0xD6, 0, 32, 0xD8, 0xDE, 0, 32, 0xE0, 0xF6, -32, 0, 
0xF8, 0xFE, -32, 0, 0xFF, 0xFF, 121, 0, 0x100, 0x12F, -3, -3, 0x130, 0x130, 0, -199, 
0x131, 0x131, -232, 0, 0x132, 0x137, -3, -3, 0x139, 0x148, -3, -3, 0x14A, 0x177, -3, -3, 
0x178, 0x178, 0, -121, 0x179, 0x17E, -3, -3, 0x17F, 0x17F, -300, 0, 0x180, 0x180, 195, 0, 
0x181, 0x181, 0, 210, 0x182, 0x185, -3, -3, 0x186, 0x186, 0, 206, 0x187, 0x188, -3, -3, 
0x189, 0x18A, 0, 205, 0x18B, 0x18C, -3, -3, 0x18E, 0x18E, 0, 79, 0x18F, 0x18F, 0, 202, 
0x190, 0x190, 0, 203, 0x191, 0x192, -3, -3, 0x193, 0x193, 0, 205, 0x194, 0x194, 0, 207, 
0x195, 0x195, 97, 0, 0x196, 0x196, 0, 211, 0x197, 0x197, 0, 209, 0x198, 0x199, -3, -3, 
0x19A, 0x19A, 163, 0, 0x19C, 0x19C, 0, 211, 0x19D, 0x19D, 0, 213, 0x19E, 0x19E, 130, 0, 
0x19F, 0x19F, 0, 214, 0x1A0, 0x1A5, -3, -3, 0x1A6, 0x1A6, 0, 218, 0x1A7, 0x1A8, -3, -3, 
0x1A9, 0x1A9, 0, 218, 0x1AC, 0x1AD, -3, -3, 0x1AE, 0x1AE, 0, 218, 0x1AF, 0x1B0, -3, -3, 
0x1B1, 0x1B2, 0, 217, 0x1B3, 0x1B6, -3, -3, 0x1B7, 0x1B7, 0, 219, 0x1B8, 0x1B9, -3, -3, 
0x1BC, 0x1BD, -3, -3, 0x1BF, 0x1BF, 56, 0, 0x1C4, 0x1CC, -2, -2, 0x1CD, 0x1DC, -3, -3, 
0x1DD, 0x1DD, -79, 0, 0x1DE, 0x1EF, -3, -3, 0x1F1, 0x1F3, -2, -2, 0x1F4, 0x1F5, -3, -3, 
0x1F6, 0x1F6, 0, -97, 0x1F7, 0x1F7, 0, -56, 0x1F8, 0x21F, -3, -3, 0x220, 0x220, 0, -130, 
0x222, 0x233, -3, -3, 0x23A, 0x23A, 0, 10795, 0x23B, 0x23C, -3, -3, 0x23D, 0x23D, 0, -163, 
0x23E, 0x23E, 0, 10792, 0x23F, 0x240, 10815, 0, 0x241, 0x242, -3, -3, 0x243, 0x243, 0, -195, 
0x244, 0x244, 0, 69, 0x245, 0x245, 0, 71, 0x246, 0x24F, -3, -3, 0x250, 0x250, 10783, 0, 
0x251, 0x251, 10780, 0, 0x252, 0x252, 10782, 0, 0x253, 0x253, -210, 0, 0x254, 0x254, -206, 0, 
0x256, 0x257, -205, 0, 0x259, 0x259, -202, 0, 0x25B, 0x25B, -203, 0, 0x25C, 0x25C, 42319, 0, 
0x260, 0x260, -205, 0, 0x261, 0x261, 42315, 0, 0x263, 0x263, -207, 0, 0x265, 0x265, 42280, 0, 
0x266, 0x266, 42308, 0, 0x268, 0x268, -209, 0, 0x269, 0x269, -211, 0, 0x26A, 0x26A, 42308, 0, 
0x26B, 0x26B, 10743, 0, 0x26C, 0x26C, 42305, 0, 0x26F, 0x26F, -211, 0, 0x271, 0x271, 10749, 0, 
0x272, 0x272, -213, 0, 0x275, 0x275, -214, 0, 0x27D, 0x27D, 10727, 0, 0x280, 0x280, -218, 0, 
0x282, 0x282, 42307, 0, 0x283, 0x283, -218, 0, 0x287, 0x287, 42282, 0, 0x288, 0x288, -218, 0, 
0x289, 0x289, -69, 0, 0x28A, 0x28B, -217, 0, 0x28C, 0x28C, -71, 0, 0x292, 0x292, -219, 0, 
0x29D, 0x29D, 42261, 0, 0x29E, 0x29E, 42258, 0, 0x345, 0x345, 84, 0, 0x370, 0x373, -3, -3, 
0x376, 0x377, -3, -3, 0x37B, 0x37D, 130, 0, 0x37F, 0x37F, 0, 116, 0x386, 0x386, 0, 38, 
0x388, 0x38A, 0, 37, 0x38C, 0x38C, 0, 64, 0x38E, 0x38F, 0, 63, 0x391, 0x3A1, 0, 32, 
0x3A3, 0x3AB, 0, 32, 0x3AC, 0x3AC, -38, 0, 0x3AD, 0x3AF, -37, 0, 0x3B1, 0x3C1, -32, 0, 
0x3C2, 0x3C2, -31, 0, 0x3C3, 0x3CB, -32, 0, 0x3CC, 0x3CC, -64, 0, 0x3CD, 0x3CE, -63, 0, 
0x3CF, 0x3CF, 0, 8, 0x3D0, 0x3D0, -62, 0, 0x3D1, 0x3D1, -57, 0, 0x3D5, 0x3D5, -47, 0, 
0x3D6, 0x3D6, -54, 0, 0x3D7, 0x3D7, -8, 0, 0x3D8, 0x3EF, -3, -3, 0x3F0, 0x3F0, -86, 0, 
0x3F1, 0x3F1, -80, 0, 0x3F2, 0x3F2, 7, 0, 0x3F3, 0x3F3, -116, 0, 0x3F4, 0x3F4, 0, -60, 
0x3F5, 0x3F5, -96, 0, 0x3F7, 0x3F8, -3, -3, 0x3F9, 0x3F9, 0, -7, 0x3FA, 0x3FB, -3, -3, 
0x3FD, 0x3FF, 0, -130, 0x400, 0x40F, 0, 80, 0x410, 0x42F, 0, 32, 0x430, 0x44F, -32, 0, 
0x450, 0x45F, -80, 0, 0x460, 0x481, -3, -3, 0x48A, 0x4BF, -3, -3, 0x4C0, 0x4C0, 0, 15, 
0x4C1, 0x4CE, -3, -3, 0x4CF, 0x4CF, -15, 0, 0x4D0, 0x52F, -3, -3, 0x531, 0x556, 0, 48, 
0x561, 0x586, -48, 0, 0x10A0, 0x10C5, 0, 7264, 0x10C7, 0x10C7, 0, 7264, 0x10CD, 0x10CD, 0, 7264, 
0x10D0, 0x10FA, 3008, 0, 0x10FD, 0x10FF, 3008, 0, 0x13A0, 0x13EF, 0, 38864, 0x13F0, 0x13F5, 0, 8, 
0x13F8, 0x13FD, -8, 0, 0x1C80, 0x1C80, -6254, 0, 0x1C81, 0x1C81, -6253, 0, 0x1C82, 0x1C82, -6244, 0, 
0x1C83, 0x1C84, -6242, 0, 0x1C85, 0x1C85, -6243, 0, 0x1C86, 0x1C86, -6236, 0, 0x1C87, 0x1C87, -6181, 0, 
0x1C88, 0x1C88, 35266, 0, 0x1C90, 0x1CBA, 0, -3008, 0x1CBD, 0x1CBF, 0, -3008, 0x1D79, 0x1D79, 35332, 0, 
0x1D7D, 0x1D7D, 3814, 0, 0x1D8E, 0x1D8E, 35384, 0, 0x1E00, 0x1E95, -3, -3, 0x1E9B, 0x1E9B, -59, 0, 
0x1E9E, 0x1E9E, 0, -7615, 0x1EA0, 0x1EFF, -3, -3, 0x1F00, 0x1F07, 8, 0, 0x1F08, 0x1F0F, 0, -8, 
0x1F10, 0x1F15, 8, 0, 0x1F18, 0x1F1D, 0, -8, 0x1F20, 0x1F27, 8, 0, 0x1F28, 0x1F2F, 0, -8, 
0x1F30, 0x1F37, 8, 0, 0x1F38, 0x1F3F, 0, -8, 0x1F40, 0x1F45, 8, 0, 0x1F48, 0x1F4D, 0, -8, 
0x1F51, 0x1F51, 8, 0, 0x1F53, 0x1F53, 8, 0, 0x1F55, 0x1F55, 8, 0, 0x1F57, 0x1F57, 8, 0, 
0x1F59, 0x1F59, 0, -8, 0x1F5B, 0x1F5B, 0, -8, 0x1F5D, 0x1F5D, 0, -8, 0x1F5F, 0x1F5F, 0, -8, 
0x1F60, 0x1F67, 8, 0, 0x1F68, 0x1F6F, 0, -8, 0x1F70, 0x1F71, 74, 0, 0x1F72, 0x1F75, 86, 0, 
0x1F76, 0x1F77, 100, 0, 0x1F78, 0x1F79, 128, 0, 0x1F7A, 0x1F7B, 112, 0, 0x1F7C, 0x1F7D, 126, 0, 
0x1F80, 0x1F87, 8, 0, 0x1F88, 0x1F8F, 0, -8, 0x1F90, 0x1F97, 8, 0, 0x1F98, 0x1F9F, 0, -8, 
0x1FA0, 0x1FA7, 8, 0, 0x1FA8, 0x1FAF, 0, -8, 0x1FB0, 0x1FB1, 8, 0, 0x1FB3, 0x1FB3, 9, 0, 
0x1FB8, 0x1FB9, 0, -8, 0x1FBA, 0x1FBB, 0, -74, 0x1FBC, 0x1FBC, 0, -9, 0x1FBE, 0x1FBE, -7205, 0, 
0x1FC3, 0x1FC3, 9, 0, 0x1FC8, 0x1FCB, 0, -86, 0x1FCC, 0x1FCC, 0, -9, 0x1FD0, 0x1FD1, 8, 0, 
0x1FD8, 0x1FD9, 0, -8, 0x1FDA, 0x1FDB, 0, -100, 0x1FE0, 0x1FE1, 8, 0, 0x1FE5, 0x1FE5, 7, 0, 
0x1FE8, 0x1FE9, 0, -8, 0x1FEA, 0x1FEB, 0, -112, 0x1FEC, 0x1FEC, 0, -7, 0x1FF3, 0x1FF3, 9, 0, 
0x1FF8, 0x1FF9, 0, -128, 0x1FFA, 0x1FFB, 0, -126, 0x1FFC, 0x1FFC, 0, -9, 0x2126, 0x2126, 0, -7517, 
0x212A, 0x212A, 0, -8383, 0x212B, 0x212B, 0, -8262, 0x2132, 0x2132, 0, 28, 0x214E, 0x214E, -28, 0, 
0x2160, 0x216F, 0, 16, 0x2170, 0x217F, -16, 0, 0x2183, 0x2184, -3, -3, 0x24B6, 0x24CF, 0, 26, 
0x24D0, 0x24E9, -26, 0, 0x2C00, 0x2C2F, 0, 48, 0x2C30, 0x2C5F, -48, 0, 0x2C60, 0x2C61, -3, -3, 
0x2C62, 0x2C62, 0, -10743, 0x2C63, 0x2C63, 0, -3814, 0x2C64, 0x2C64, 0, -10727, 0x2C65, 0x2C65, -10795, 0, 
0x2C66, 0x2C66, -10792, 0, 0x2C67, 0x2C6C, -3, -3, 0x2C6D, 0x2C6D, 0, -10780, 0x2C6E, 0x2C6E, 0, -10749, 
0x2C6F, 0x2C6F, 0, -10783, 0x2C70, 0x2C70, 0, -10782, 0x2C72, 0x2C73, -3, -3, 0x2C75, 0x2C76, -3, -3, 
0x2C7E, 0x2C7F, 0, -10815, 0x2C80, 0x2CE3, -3, -3, 0x2CEB, 0x2CEE, -3, -3, 0x2CF2, 0x2CF3, -3, -3, 
0x2D00, 0x2D25, -7264, 0, 0x2D27, 0x2D27, -7264, 0, 0x2D2D, 0x2D2D, -7264, 0, 0xA640, 0xA66D, -3, -3, 
0xA680, 0xA69B, -3, -3, 0xA722, 0xA72F, -3, -3, 0xA732, 0xA76F, -3, -3, 0xA779, 0xA77C, -3, -3, 
0xA77D, 0xA77D, 0, -35332, 0xA77E, 0xA787, -3, -3, 0xA78B, 0xA78C, -3, -3, 0xA78D, 0xA78D, 0, -42280, 
0xA790, 0xA793, -3, -3, 0xA794, 0xA794, 48, 0, 0xA796, 0xA7A9, -3, -3, 0xA7AA, 0xA7AA, 0, -42308, 
0xA7AB, 0xA7AB, 0, -42319, 0xA7AC, 0xA7AC, 0, -42315, 0xA7AD, 0xA7AD, 0, -42305, 0xA7AE, 0xA7AE, 0, -42308, 
0xA7B0, 0xA7B0, 0, -42258, 0xA7B1, 0xA7B1, 0, -42282, 0xA7B2, 0xA7B2, 0, -42261, 0xA7B3, 0xA7B3, 0, 928, 
0xA7B4, 0xA7C3, -3, -3, 0xA7C4, 0xA7C4, 0, -48, 0xA7C5, 0xA7C5, 0, -42307, 0xA7C6, 0xA7C6, 0, -35384, 
0xA7C7, 0xA7CA, -3, -3, 0xA7D0, 0xA7D1, -3, -3, 0xA7D6, 0xA7D9, -3, -3, 0xA7F5, 0xA7F6, -3, -3, 
0xAB53, 0xAB53, -928, 0, 0xAB70, 0xABBF, -38864, 0, 0xFF21, 0xFF3A, 0, 32, 0xFF41, 0xFF5A, -32, 0, 
0x10400, 0x10427, 0, 40, 0x10428, 0x1044F, -40, 0, 0x104B0, 0x104D3, 0, 40, 0x104D8, 0x104FB, -40, 0, 
0x10570, 0x1057A, 0, 39, 0x1057C, 0x1058A, 0, 39, 0x1058C, 0x10592, 0, 39, 0x10594, 0x10595, 0, 39, 
0x10597, 0x105A1, -39, 0, 0x105A3, 0x105B1, -39, 0, 0x105B3, 0x105B9, -39, 0, 0x105BB, 0x105BC, -39, 0, 
0x10C80, 0x10CB2, 0, 64, 0x10CC0, 0x10CF2, -64, 0, 0x118A0, 0x118BF, 0, 32, 0x118C0, 0x118DF, -32, 0, 
0x16E40, 0x16E5F, 0, 32, 0x16E60, 0x16E7F, -32, 0, 0x1E900, 0x1E921, 0, 34, 0x1E922, 0x1E943, -34, 0}; // fixed array const
time__Duration _const_time__nanosecond; // inited later
time__Duration _const_time__infinite; // inited later
u64 _const_time__start_time; // inited later
mach_timebase_info_data_t _const_time__time_base; // inited later
gx__Color _const_gx__black; // inited later
gx__Color _const_gx__white; // inited later
gx__Color _const_gx__yellow; // inited later
gx__HorizontalAlign _const_gx__align_right; // inited later
sapp_desc g_desc; // global 6

sokol__gfx__PassAction _const_gg__dontcare_pass; // inited later
gg__SSRecorderSettings* _const_gg__recorder_settings; // inited later
int _const_gg__buff_size; // inited later
time__Duration _const_time__microsecond; // inited later
gx__Color _const_main__bg_color; // inited later
time__Duration _const_time__millisecond; // inited later
time__Duration _const_time__second; // inited later
time__Duration _const_time__minute; // inited later
time__Duration _const_time__hour; // inited later

// V interface table:
static IError I_None___to_Interface_IError(None__* x);
const int _IError_None___index = 0;
static IError I_voidptr_to_Interface_IError(voidptr* x);
const int _IError_voidptr_index = 1;
static IError I_Error_to_Interface_IError(Error* x);
const int _IError_Error_index = 2;
static IError I_MessageError_to_Interface_IError(MessageError* x);
const int _IError_MessageError_index = 3;
static IError I_time__TimeParseError_to_Interface_IError(time__TimeParseError* x);
const int _IError_time__TimeParseError_index = 4;
static IError I_os__Eof_to_Interface_IError(os__Eof* x);
const int _IError_os__Eof_index = 5;
static IError I_os__NotExpected_to_Interface_IError(os__NotExpected* x);
const int _IError_os__NotExpected_index = 6;
static IError I_os__FileNotOpenedError_to_Interface_IError(os__FileNotOpenedError* x);
const int _IError_os__FileNotOpenedError_index = 7;
static IError I_os__SizeOfTypeIs0Error_to_Interface_IError(os__SizeOfTypeIs0Error* x);
const int _IError_os__SizeOfTypeIs0Error_index = 8;
static IError I_os__ExecutableNotFoundError_to_Interface_IError(os__ExecutableNotFoundError* x);
const int _IError_os__ExecutableNotFoundError_index = 9;

static inline int None___code_Interface_IError_method_wrapper(None__* err) {
	return Error_code(err->Error);
}
static inline string None___msg_Interface_IError_method_wrapper(None__* err) {
	return Error_msg(err->Error);
}
static inline int Error_code_Interface_IError_method_wrapper(Error* err) {
	return Error_code(*err);
}
static inline string Error_msg_Interface_IError_method_wrapper(Error* err) {
	return Error_msg(*err);
}
static inline int MessageError_code_Interface_IError_method_wrapper(MessageError* err) {
	return MessageError_code(*err);
}
static inline string MessageError_msg_Interface_IError_method_wrapper(MessageError* err) {
	return MessageError_msg(*err);
}
static inline int time__TimeParseError_code_Interface_IError_method_wrapper(time__TimeParseError* err) {
	return Error_code(err->Error);
}
static inline string time__TimeParseError_msg_Interface_IError_method_wrapper(time__TimeParseError* err) {
	return time__TimeParseError_msg(*err);
}
static inline int os__Eof_code_Interface_IError_method_wrapper(os__Eof* err) {
	return Error_code(err->Error);
}
static inline string os__Eof_msg_Interface_IError_method_wrapper(os__Eof* err) {
	return Error_msg(err->Error);
}
static inline int os__NotExpected_code_Interface_IError_method_wrapper(os__NotExpected* err) {
	return os__NotExpected_code(*err);
}
static inline string os__NotExpected_msg_Interface_IError_method_wrapper(os__NotExpected* err) {
	return os__NotExpected_msg(*err);
}
static inline int os__FileNotOpenedError_code_Interface_IError_method_wrapper(os__FileNotOpenedError* err) {
	return Error_code(err->Error);
}
static inline string os__FileNotOpenedError_msg_Interface_IError_method_wrapper(os__FileNotOpenedError* err) {
	return os__FileNotOpenedError_msg(*err);
}
static inline int os__SizeOfTypeIs0Error_code_Interface_IError_method_wrapper(os__SizeOfTypeIs0Error* err) {
	return Error_code(err->Error);
}
static inline string os__SizeOfTypeIs0Error_msg_Interface_IError_method_wrapper(os__SizeOfTypeIs0Error* err) {
	return os__SizeOfTypeIs0Error_msg(*err);
}
static inline int os__ExecutableNotFoundError_code_Interface_IError_method_wrapper(os__ExecutableNotFoundError* err) {
	return Error_code(err->Error);
}
static inline string os__ExecutableNotFoundError_msg_Interface_IError_method_wrapper(os__ExecutableNotFoundError* err) {
	return os__ExecutableNotFoundError_msg(*err);
}

struct _IError_interface_methods {
	int (*_method_code)(void* _);
	string (*_method_msg)(void* _);
};

struct _IError_interface_methods IError_name_table[10] = {
	{
		._method_code = (void*) None___code_Interface_IError_method_wrapper,
		._method_msg = (void*) None___msg_Interface_IError_method_wrapper,
	},
	{
		._method_code = (void*) 0,
		._method_msg = (void*) 0,
	},
	{
		._method_code = (void*) Error_code_Interface_IError_method_wrapper,
		._method_msg = (void*) Error_msg_Interface_IError_method_wrapper,
	},
	{
		._method_code = (void*) MessageError_code_Interface_IError_method_wrapper,
		._method_msg = (void*) MessageError_msg_Interface_IError_method_wrapper,
	},
	{
		._method_code = (void*) time__TimeParseError_code_Interface_IError_method_wrapper,
		._method_msg = (void*) time__TimeParseError_msg_Interface_IError_method_wrapper,
	},
	{
		._method_code = (void*) os__Eof_code_Interface_IError_method_wrapper,
		._method_msg = (void*) os__Eof_msg_Interface_IError_method_wrapper,
	},
	{
		._method_code = (void*) os__NotExpected_code_Interface_IError_method_wrapper,
		._method_msg = (void*) os__NotExpected_msg_Interface_IError_method_wrapper,
	},
	{
		._method_code = (void*) os__FileNotOpenedError_code_Interface_IError_method_wrapper,
		._method_msg = (void*) os__FileNotOpenedError_msg_Interface_IError_method_wrapper,
	},
	{
		._method_code = (void*) os__SizeOfTypeIs0Error_code_Interface_IError_method_wrapper,
		._method_msg = (void*) os__SizeOfTypeIs0Error_msg_Interface_IError_method_wrapper,
	},
	{
		._method_code = (void*) os__ExecutableNotFoundError_code_Interface_IError_method_wrapper,
		._method_msg = (void*) os__ExecutableNotFoundError_msg_Interface_IError_method_wrapper,
	},
};


static inline IError I_None___to_Interface_IError(None__* x) {
return (IError) {
		._None__ = x,
		._typ = _IError_None___index,
	};
}

static inline IError I_voidptr_to_Interface_IError(voidptr* x) {
return (IError) {
		._voidptr = x,
		._typ = _IError_voidptr_index,
	};
}

static inline IError I_Error_to_Interface_IError(Error* x) {
return (IError) {
		._Error = x,
		._typ = _IError_Error_index,
	};
}

static inline IError I_MessageError_to_Interface_IError(MessageError* x) {
return (IError) {
		._MessageError = x,
		._typ = _IError_MessageError_index,
	};
}

static inline IError I_time__TimeParseError_to_Interface_IError(time__TimeParseError* x) {
return (IError) {
		._time__TimeParseError = x,
		._typ = _IError_time__TimeParseError_index,
	};
}

static inline IError I_os__Eof_to_Interface_IError(os__Eof* x) {
return (IError) {
		._os__Eof = x,
		._typ = _IError_os__Eof_index,
	};
}

static inline IError I_os__NotExpected_to_Interface_IError(os__NotExpected* x) {
return (IError) {
		._os__NotExpected = x,
		._typ = _IError_os__NotExpected_index,
	};
}

static inline IError I_os__FileNotOpenedError_to_Interface_IError(os__FileNotOpenedError* x) {
return (IError) {
		._os__FileNotOpenedError = x,
		._typ = _IError_os__FileNotOpenedError_index,
	};
}

static inline IError I_os__SizeOfTypeIs0Error_to_Interface_IError(os__SizeOfTypeIs0Error* x) {
return (IError) {
		._os__SizeOfTypeIs0Error = x,
		._typ = _IError_os__SizeOfTypeIs0Error_index,
	};
}

static inline IError I_os__ExecutableNotFoundError_to_Interface_IError(os__ExecutableNotFoundError* x) {
return (IError) {
		._os__ExecutableNotFoundError = x,
		._typ = _IError_os__ExecutableNotFoundError_index,
	};
}


// end of V out (header)

// V auto str functions:
static string sokol__sapp__EventType_str(sokol__sapp__EventType it) { /* gen_str_for_enum */
	switch(it) {
		case sokol__sapp__EventType__invalid: return _S("invalid");
		case sokol__sapp__EventType__key_down: return _S("key_down");
		case sokol__sapp__EventType__key_up: return _S("key_up");
		case sokol__sapp__EventType__char: return _S("char");
		case sokol__sapp__EventType__mouse_down: return _S("mouse_down");
		case sokol__sapp__EventType__mouse_up: return _S("mouse_up");
		case sokol__sapp__EventType__mouse_scroll: return _S("mouse_scroll");
		case sokol__sapp__EventType__mouse_move: return _S("mouse_move");
		case sokol__sapp__EventType__mouse_enter: return _S("mouse_enter");
		case sokol__sapp__EventType__mouse_leave: return _S("mouse_leave");
		case sokol__sapp__EventType__touches_began: return _S("touches_began");
		case sokol__sapp__EventType__touches_moved: return _S("touches_moved");
		case sokol__sapp__EventType__touches_ended: return _S("touches_ended");
		case sokol__sapp__EventType__touches_cancelled: return _S("touches_cancelled");
		case sokol__sapp__EventType__resized: return _S("resized");
		case sokol__sapp__EventType__iconified: return _S("iconified");
		case sokol__sapp__EventType__restored: return _S("restored");
		case sokol__sapp__EventType__focused: return _S("focused");
		case sokol__sapp__EventType__unfocused: return _S("unfocused");
		case sokol__sapp__EventType__suspended: return _S("suspended");
		case sokol__sapp__EventType__resumed: return _S("resumed");
		case sokol__sapp__EventType__quit_requested: return _S("quit_requested");
		case sokol__sapp__EventType__clipboard_pasted: return _S("clipboard_pasted");
		case sokol__sapp__EventType__files_dropped: return _S("files_dropped");
		case sokol__sapp__EventType__num: return _S("num");
		default: return _S("unknown enum value");
	}
}

// V auto functions:
static bool Array_u8_contains(Array_u8 a, u8 v) {
	for (int i = 0; i < a.len; ++i) {
		if (((u8*)a.data)[i] == v) {
			return true;
		}
	}
	return false;
}


// >> typeof() support for sum types / interfaces
static char * v_typeof_interface_IError(int sidx) {
	if (sidx == _IError_None___index) return "None__";
	if (sidx == _IError_voidptr_index) return "voidptr";
	if (sidx == _IError_Error_index) return "Error";
	if (sidx == _IError_MessageError_index) return "MessageError";
	if (sidx == _IError_time__TimeParseError_index) return "time.TimeParseError";
	if (sidx == _IError_os__Eof_index) return "os.Eof";
	if (sidx == _IError_os__NotExpected_index) return "os.NotExpected";
	if (sidx == _IError_os__FileNotOpenedError_index) return "os.FileNotOpenedError";
	if (sidx == _IError_os__SizeOfTypeIs0Error_index) return "os.SizeOfTypeIs0Error";
	if (sidx == _IError_os__ExecutableNotFoundError_index) return "os.ExecutableNotFoundError";
	return "unknown IError";
}

int v_typeof_interface_idx_IError(int sidx) {
	if (sidx == _IError_None___index) return 80;
	if (sidx == _IError_voidptr_index) return 2;
	if (sidx == _IError_Error_index) return 81;
	if (sidx == _IError_MessageError_index) return 83;
	if (sidx == _IError_time__TimeParseError_index) return 433;
	if (sidx == _IError_os__Eof_index) return 456;
	if (sidx == _IError_os__NotExpected_index) return 457;
	if (sidx == _IError_os__FileNotOpenedError_index) return 459;
	if (sidx == _IError_os__SizeOfTypeIs0Error_index) return 460;
	if (sidx == _IError_os__ExecutableNotFoundError_index) return 479;
	return 30;
}
// << typeof() support for sum types

strings__Builder strings__new_builder(int initial_size) {
	strings__Builder res = ((__new_array_with_default(0, initial_size, sizeof(u8), 0)));
	ArrayFlags_set(&res.flags, ArrayFlags__noslices);
	return res;
}
Array_u8 strings__Builder_reuse_as_plain_u8_array(strings__Builder* b) {
	ArrayFlags_clear(&b->flags, ArrayFlags__noslices);
	return *b;
}
void strings__Builder_write_ptr(strings__Builder* b, u8* ptr, int len) {
	if (len == 0) {
		return;
	}
	array_push_many(b, ptr, len);
}
void strings__Builder_write_rune(strings__Builder* b, rune r) {
	Array_fixed_u8_5 buffer = {0};
	string res = utf32_to_str_no_malloc(((u32)(r)), &buffer[0]);
	if (res.len == 0) {
		return;
	}
	array_push_many(b, res.str, res.len);
}
void strings__Builder_write_runes(strings__Builder* b, Array_rune runes) {
	Array_fixed_u8_5 buffer = {0};
	for (int _t1 = 0; _t1 < runes.len; ++_t1) {
		rune r = ((rune*)runes.data)[_t1];
		string res = utf32_to_str_no_malloc(((u32)(r)), &buffer[0]);
		if (res.len == 0) {
			continue;
		}
		array_push_many(b, res.str, res.len);
	}
}
inline void strings__Builder_write_u8(strings__Builder* b, u8 data) {
	array_push((array*)b, _MOV((u8[]){ data }));
}
inline void strings__Builder_write_byte(strings__Builder* b, u8 data) {
	array_push((array*)b, _MOV((u8[]){ data }));
}
void strings__Builder_write_decimal(strings__Builder* b, i64 n) {
	if (n == 0) {
		strings__Builder_write_u8(b, 0x30);
		return;
	}
	Array_fixed_u8_25 buf = {0};
	i64 _t1; /* if prepend */
	if (n < 0) {
		_t1 = -n;
	} else {
		_t1 = n;
	}
	i64 x = _t1;
	int i = 24;
	for (;;) {
		if (!(x != 0)) break;
		i64 nextx = (i64)(x / 10);
		i64 r = (i64)(x % 10);
		buf[i] = (u8)(((u8)(r)) + 0x30);
		x = nextx;
		i--;
	}
	if (n < 0) {
		buf[i] = '-';
		i--;
	}
	strings__Builder_write_ptr(b, &buf[(int)(i + 1)], (int)(24 - i));
}
_result_int strings__Builder_write(strings__Builder* b, Array_u8 data) {
	if (data.len == 0) {
		_result_int _t1 = {0};
		_result_ok(&(int[]) { 0 }, (_result*)(&_t1), sizeof(int));
		return _t1;
	}
	_PUSH_MANY(b, (data), _t2, strings__Builder);
	_result_int _t3 = {0};
	_result_ok(&(int[]) { data.len }, (_result*)(&_t3), sizeof(int));
	return _t3;
}
void strings__Builder_drain_builder(strings__Builder* b, strings__Builder* other, int other_new_cap) {
	if (other->len > 0) {
		_PUSH_MANY(b, (*other), _t1, strings__Builder);
	}
	strings__Builder_free(other);
	*other = strings__new_builder(other_new_cap);
}
inline u8 strings__Builder_byte_at(strings__Builder* b, int n) {
	return (*(u8*)array_get(*(((Array_u8*)(b))), n));
}
inline void strings__Builder_write_string(strings__Builder* b, string s) {
	if (s.len == 0) {
		return;
	}
	array_push_many(b, s.str, s.len);
}
inline void strings__Builder_write_string2(strings__Builder* b, string s1, string s2) {
	if (s1.len != 0) {
		array_push_many(b, s1.str, s1.len);
	}
	if (s2.len != 0) {
		array_push_many(b, s2.str, s2.len);
	}
}
void strings__Builder_go_back(strings__Builder* b, int n) {
	array_trim(b, (int)(b->len - n));
}
inline string strings__Builder_spart(strings__Builder* b, int start_pos, int n) {
	{
		u8* x = malloc_noscan((int)(n + 1));
		vmemcpy(x, ((u8*)(b->data)) + start_pos, n);
		x[n] = 0;
		return tos(x, n);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
string strings__Builder_cut_last(strings__Builder* b, int n) {
	int cut_pos = (int)(b->len - n);
	string res = strings__Builder_spart(b, cut_pos, n);
	array_trim(b, cut_pos);
	return res;
}
string strings__Builder_cut_to(strings__Builder* b, int pos) {
	if (pos > b->len) {
		return _S("");
	}
	return strings__Builder_cut_last(b, (int)(b->len - pos));
}
void strings__Builder_go_back_to(strings__Builder* b, int pos) {
	array_trim(b, pos);
}
inline void strings__Builder_writeln(strings__Builder* b, string s) {
	if ((s).len != 0) {
		array_push_many(b, s.str, s.len);
	}
	array_push((array*)b, _MOV((u8[]){ ((u8)('\n')) }));
}
inline void strings__Builder_writeln2(strings__Builder* b, string s1, string s2) {
	if ((s1).len != 0) {
		array_push_many(b, s1.str, s1.len);
	}
	array_push((array*)b, _MOV((u8[]){ ((u8)('\n')) }));
	if ((s2).len != 0) {
		array_push_many(b, s2.str, s2.len);
	}
	array_push((array*)b, _MOV((u8[]){ ((u8)('\n')) }));
}
string strings__Builder_last_n(strings__Builder* b, int n) {
	if (n > b->len) {
		return _S("");
	}
	return strings__Builder_spart(b, (int)(b->len - n), n);
}
string strings__Builder_after(strings__Builder* b, int n) {
	if (n >= b->len) {
		return _S("");
	}
	return strings__Builder_spart(b, n, (int)(b->len - n));
}
string strings__Builder_str(strings__Builder* b) {
	array_push((array*)b, _MOV((u8[]){ ((u8)(0)) }));
	u8* bcopy = ((u8*)(memdup_noscan(b->data, b->len)));
	string s = u8_vstring_with_len(bcopy, (int)(b->len - 1));
	array_clear(b);
	return s;
}
void strings__Builder_ensure_cap(strings__Builder* b, int n) {
	if (n <= b->cap) {
		return;
	}
	u8* new_data = vcalloc((int)(n * b->element_size));
	if (b->data != ((void*)0)) {
		vmemcpy(new_data, b->data, (int)(b->len * b->element_size));
		if (ArrayFlags_has(&b->flags, ArrayFlags__noslices)) {
			_v_free(b->data);
		}
	}
	{
		b->data = new_data;
		b->offset = 0;
		b->cap = n;
	}
}
void strings__Builder_grow_len(strings__Builder* b, int n) {
	if (n <= 0) {
		return;
	}
	int new_len = (int)(b->len + n);
	strings__Builder_ensure_cap(b, new_len);
	{
		b->len = new_len;
	}
}
void strings__Builder_free(strings__Builder* b) {
	if (b->data != 0) {
		_v_free(b->data);
		{
			b->data = ((void*)0);
		}
	}
}
int math__bits__trailing_zeros_32(u32 x) {
	if (x == 0U) {
		return 32;
	}
	return ((int)(_const_math__bits__de_bruijn32tab[((u32)(((x & -x)) * _const_math__bits__de_bruijn32) >> (27))]));
}
int math__bits__trailing_zeros_64(u64 x) {
	if (x == 0U) {
		return 64;
	}
	return ((int)(_const_math__bits__de_bruijn64tab[((u64)(((x & -x)) * _const_math__bits__de_bruijn64) >> (58))]));
}
multi_return_u64_u64 math__bits__mul_64(u64 x, u64 y) {
	u64 x0 = (x & _const_math__bits__mask32);
	u64 x1 = (x >> 32U);
	u64 y0 = (y & _const_math__bits__mask32);
	u64 y1 = (y >> 32U);
	u64 w0 = (u64)(x0 * y0);
	u64 t = (u64)((u64)(x1 * y0) + ((w0 >> 32U)));
	u64 w1 = (t & _const_math__bits__mask32);
	u64 w2 = (t >> 32U);
	w1 += (u64)(x0 * y1);
	u64 hi = (u64)((u64)((u64)(x1 * y1) + w2) + ((w1 >> 32U)));
	u64 lo = (u64)(x * y);
	return (multi_return_u64_u64){.arg0=hi, .arg1=lo};
}
string strconv__Dec32_get_string_32(strconv__Dec32 d, bool neg, int i_n_digit, int i_pad_digit) {
	int n_digit = (int)(i_n_digit + 1);
	int pad_digit = (int)(i_pad_digit + 1);
	u32 out = d.m;
	int out_len = strconv__dec_digits(out);
	int out_len_original = out_len;
	int fw_zeros = 0;
	if (pad_digit > out_len) {
		fw_zeros = (int)(pad_digit - out_len);
	}
	Array_u8 buf = __new_array_with_default(((int)((int)((int)((int)(out_len + 5) + 1) + 1))), 0, sizeof(u8), 0);
	int i = 0;
	if (neg) {
		if (buf.data != 0) {
			((u8*)buf.data)[i] = '-';
		}
		i++;
	}
	int disp = 0;
	if (out_len <= 1) {
		disp = 1;
	}
	if (n_digit < out_len) {
		out += (u32)(_const_strconv__ten_pow_table_32[(int)((int)(out_len - n_digit) - 1)] * 5U);
		out /= _const_strconv__ten_pow_table_32[(int)(out_len - n_digit)];
		out_len = n_digit;
	}
	int y = (int)(i + out_len);
	int x = 0;
	for (;;) {
		if (!(x < ((int)((int)(out_len - disp) - 1)))) break;
		((u8*)buf.data)[(int)(y - x)] = (rune)('0' + ((u8)((u32)(out % 10U))));
		out /= 10U;
		i++;
		x++;
	}
	if (i_n_digit == 0) {
		{
			((u8*)buf.data)[i] = 0;
			return tos(((u8*)(&((u8*)buf.data)[0])), i);
		}
	}
	if (out_len >= 1) {
		((u8*)buf.data)[(int)(y - x)] = '.';
		x++;
		i++;
	}
	if ((int)(y - x) >= 0) {
		((u8*)buf.data)[(int)(y - x)] = (rune)('0' + ((u8)((u32)(out % 10U))));
		i++;
	}
	for (;;) {
		if (!(fw_zeros > 0)) break;
		((u8*)buf.data)[i] = '0';
		i++;
		fw_zeros--;
	}
	((u8*)buf.data)[i] = 'e';
	i++;
	int exp = (int)((int)(d.e + out_len_original) - 1);
	if (exp < 0) {
		((u8*)buf.data)[i] = '-';
		i++;
		exp = -exp;
	} else {
		((u8*)buf.data)[i] = '+';
		i++;
	}
	int d1 = (int)(exp % 10);
	int d0 = (int)(exp / 10);
	((u8*)buf.data)[i] = (rune)('0' + ((u8)(d0)));
	i++;
	((u8*)buf.data)[i] = (rune)('0' + ((u8)(d1)));
	i++;
	((u8*)buf.data)[i] = 0;
	return tos(((u8*)(&((u8*)buf.data)[0])), i);
}
VV_LOC multi_return_strconv__Dec32_bool strconv__f32_to_decimal_exact_int(u32 i_mant, u32 exp) {
	strconv__Dec32 d = ((strconv__Dec32){.m = 0,.e = 0,});
	u32 e = (u32)(exp - 127U);
	if (e > _const_strconv__mantbits32) {
		return (multi_return_strconv__Dec32_bool){.arg0=d, .arg1=false};
	}
	u32 shift = (u32)(_const_strconv__mantbits32 - e);
	u32 mant = (i_mant | 0x00800000U);
	d.m = (mant >> shift);
	if (((d.m << shift)) != mant) {
		return (multi_return_strconv__Dec32_bool){.arg0=d, .arg1=false};
	}
	for (;;) {
		if (!(((u32)(d.m % 10U)) == 0U)) break;
		d.m /= 10U;
		d.e++;
	}
	return (multi_return_strconv__Dec32_bool){.arg0=d, .arg1=true};
}
VV_LOC strconv__Dec32 strconv__f32_to_decimal(u32 mant, u32 exp) {
	int e2 = 0;
	u32 m2 = ((u32)(0U));
	if (exp == 0U) {
		e2 = (int)((int)(-126 - ((int)(_const_strconv__mantbits32))) - 2);
		m2 = mant;
	} else {
		e2 = (int)((int)((int)(((int)(exp)) - 127) - ((int)(_const_strconv__mantbits32))) - 2);
		m2 = (((((u32)(1U)) << _const_strconv__mantbits32)) | mant);
	}
	bool even = ((m2 & 1U)) == 0U;
	bool accept_bounds = even;
	u32 mv = ((u32)((u32)(4 * m2)));
	u32 mp = ((u32)((u32)((u32)(4 * m2) + 2U)));
	u32 mm_shift = strconv__bool_to_u32(mant != 0U || exp <= 1U);
	u32 mm = ((u32)((u32)((u32)((u32)(4 * m2) - 1U) - mm_shift)));
	u32 vr = ((u32)(0U));
	u32 vp = ((u32)(0U));
	u32 vm = ((u32)(0U));
	int e10 = 0;
	bool vm_is_trailing_zeros = false;
	bool vr_is_trailing_zeros = false;
	u8 last_removed_digit = ((u8)(0));
	if (e2 >= 0) {
		u32 q = strconv__log10_pow2(e2);
		e10 = ((int)(q));
		int k = (int)((int)(59 + strconv__pow5_bits(((int)(q)))) - 1);
		int i = (int)((int)(-e2 + ((int)(q))) + k);
		vr = strconv__mul_pow5_invdiv_pow2(mv, q, i);
		vp = strconv__mul_pow5_invdiv_pow2(mp, q, i);
		vm = strconv__mul_pow5_invdiv_pow2(mm, q, i);
		if (q != 0U && (u32)(((u32)(vp - 1U)) / 10U) <= (u32)(vm / 10U)) {
			int l = (int)((int)(59 + strconv__pow5_bits(((int)((u32)(q - 1U))))) - 1);
			last_removed_digit = ((u8)((u32)(strconv__mul_pow5_invdiv_pow2(mv, (u32)(q - 1U), (int)((int)(-e2 + ((int)((u32)(q - 1U)))) + l)) % 10U)));
		}
		if (q <= 9U) {
			if ((u32)(mv % 5U) == 0U) {
				vr_is_trailing_zeros = strconv__multiple_of_power_of_five_32(mv, q);
			} else if (accept_bounds) {
				vm_is_trailing_zeros = strconv__multiple_of_power_of_five_32(mm, q);
			} else if (strconv__multiple_of_power_of_five_32(mp, q)) {
				vp--;
			}
		}
	} else {
		u32 q = strconv__log10_pow5(-e2);
		e10 = (int)(((int)(q)) + e2);
		int i = (int)(-e2 - ((int)(q)));
		int k = (int)(strconv__pow5_bits(i) - 61);
		int j = (int)(((int)(q)) - k);
		vr = strconv__mul_pow5_div_pow2(mv, ((u32)(i)), j);
		vp = strconv__mul_pow5_div_pow2(mp, ((u32)(i)), j);
		vm = strconv__mul_pow5_div_pow2(mm, ((u32)(i)), j);
		if (q != 0U && ((u32)(((u32)(vp - 1U)) / 10U)) <= (u32)(vm / 10U)) {
			j = (int)((int)(((int)(q)) - 1) - ((int)(strconv__pow5_bits((int)(i + 1)) - 61)));
			last_removed_digit = ((u8)((u32)(strconv__mul_pow5_div_pow2(mv, ((u32)((int)(i + 1))), j) % 10U)));
		}
		if (q <= 1U) {
			vr_is_trailing_zeros = true;
			if (accept_bounds) {
				vm_is_trailing_zeros = mm_shift == 1U;
			} else {
				vp--;
			}
		} else if (q < 31U) {
			vr_is_trailing_zeros = strconv__multiple_of_power_of_two_32(mv, (u32)(q - 1U));
		}
	}
	int removed = 0;
	u32 out = ((u32)(0U));
	if (vm_is_trailing_zeros || vr_is_trailing_zeros) {
		for (;;) {
			if (!((u32)(vp / 10U) > (u32)(vm / 10U))) break;
			vm_is_trailing_zeros = vm_is_trailing_zeros && ((u32)(vm % 10U)) == 0U;
			vr_is_trailing_zeros = vr_is_trailing_zeros && last_removed_digit == 0;
			last_removed_digit = ((u8)((u32)(vr % 10U)));
			vr /= 10U;
			vp /= 10U;
			vm /= 10U;
			removed++;
		}
		if (vm_is_trailing_zeros) {
			for (;;) {
				if (!((u32)(vm % 10U) == 0U)) break;
				vr_is_trailing_zeros = vr_is_trailing_zeros && last_removed_digit == 0;
				last_removed_digit = ((u8)((u32)(vr % 10U)));
				vr /= 10U;
				vp /= 10U;
				vm /= 10U;
				removed++;
			}
		}
		if (vr_is_trailing_zeros && last_removed_digit == 5 && ((u32)(vr % 2U)) == 0U) {
			last_removed_digit = 4;
		}
		out = vr;
		if ((vr == vm && (!accept_bounds || !vm_is_trailing_zeros)) || last_removed_digit >= 5) {
			out++;
		}
	} else {
		for (;;) {
			if (!((u32)(vp / 10U) > (u32)(vm / 10U))) break;
			last_removed_digit = ((u8)((u32)(vr % 10U)));
			vr /= 10U;
			vp /= 10U;
			vm /= 10U;
			removed++;
		}
		out = (u32)(vr + strconv__bool_to_u32(vr == vm || last_removed_digit >= 5));
	}
	return ((strconv__Dec32){.m = out,.e = (int)(e10 + removed),});
}
string strconv__f32_to_str(f32 f, int n_digit) {
	strconv__Uf32 u1 = ((strconv__Uf32){0});
	u1.f = f;
	u32 u = u1.u;
	bool neg = ((u >> ((u32)(_const_strconv__mantbits32 + _const_strconv__expbits32)))) != 0U;
	u32 mant = (u & ((u32)(((((u32)(1U)) << _const_strconv__mantbits32)) - ((u32)(1U)))));
	u32 exp = (((u >> _const_strconv__mantbits32)) & ((u32)(((((u32)(1U)) << _const_strconv__expbits32)) - ((u32)(1U)))));
	if (exp == 255U || (exp == 0U && mant == 0U)) {
		return strconv__get_string_special(neg, exp == 0U, mant == 0U);
	}
	multi_return_strconv__Dec32_bool mr_8566 = strconv__f32_to_decimal_exact_int(mant, exp);
	strconv__Dec32 d = mr_8566.arg0;
	bool ok = mr_8566.arg1;
	if (!ok) {
		d = strconv__f32_to_decimal(mant, exp);
	}
	return strconv__Dec32_get_string_32(d, neg, n_digit, 0);
}
VV_LOC string strconv__Dec64_get_string_64(strconv__Dec64 d, bool neg, int i_n_digit, int i_pad_digit) {
	int _t1; /* if prepend */
	if (i_n_digit < 1) {
		_t1 = 1;
	} else {
		_t1 = (int)(i_n_digit + 1);
	}
	int n_digit = _t1;
	int pad_digit = (int)(i_pad_digit + 1);
	u64 out = d.m;
	int d_exp = d.e;
	int out_len = strconv__dec_digits(out);
	int out_len_original = out_len;
	int fw_zeros = 0;
	if (pad_digit > out_len) {
		fw_zeros = (int)(pad_digit - out_len);
	}
	Array_u8 buf = __new_array_with_default(((int)((int)((int)((int)(out_len + 6) + 1) + 1) + fw_zeros)), 0, sizeof(u8), 0);
	int i = 0;
	if (neg) {
		((u8*)buf.data)[i] = '-';
		i++;
	}
	int disp = 0;
	if (out_len <= 1) {
		disp = 1;
	}
	if (n_digit < out_len) {
		out += (u64)(_const_strconv__ten_pow_table_64[(int)((int)(out_len - n_digit) - 1)] * 5U);
		out /= _const_strconv__ten_pow_table_64[(int)(out_len - n_digit)];
		u64 out_div = (u64)(d.m / _const_strconv__ten_pow_table_64[(int)(out_len - n_digit)]);
		if (out_div < out && strconv__dec_digits(out_div) < strconv__dec_digits(out)) {
			d_exp++;
			n_digit++;
		}
		out_len = n_digit;
	}
	int y = (int)(i + out_len);
	int x = 0;
	for (;;) {
		if (!(x < ((int)((int)(out_len - disp) - 1)))) break;
		((u8*)buf.data)[(int)(y - x)] = (rune)('0' + ((u8)((u64)(out % 10U))));
		out /= 10U;
		i++;
		x++;
	}
	if (out_len >= 1) {
		((u8*)buf.data)[(int)(y - x)] = '.';
		x++;
		i++;
	}
	if ((int)(y - x) >= 0) {
		((u8*)buf.data)[(int)(y - x)] = (rune)('0' + ((u8)((u64)(out % 10U))));
		i++;
	}
	for (;;) {
		if (!(fw_zeros > 0)) break;
		((u8*)buf.data)[i] = '0';
		i++;
		fw_zeros--;
	}
	((u8*)buf.data)[i] = 'e';
	i++;
	int exp = (int)((int)(d_exp + out_len_original) - 1);
	if (exp < 0) {
		((u8*)buf.data)[i] = '-';
		i++;
		exp = -exp;
	} else {
		((u8*)buf.data)[i] = '+';
		i++;
	}
	int d2 = (int)(exp % 10);
	exp /= 10;
	int d1 = (int)(exp % 10);
	int d0 = (int)(exp / 10);
	if (d0 > 0) {
		((u8*)buf.data)[i] = (rune)('0' + ((u8)(d0)));
		i++;
	}
	((u8*)buf.data)[i] = (rune)('0' + ((u8)(d1)));
	i++;
	((u8*)buf.data)[i] = (rune)('0' + ((u8)(d2)));
	i++;
	((u8*)buf.data)[i] = 0;
	return tos(((u8*)(&((u8*)buf.data)[0])), i);
}
VV_LOC multi_return_strconv__Dec64_bool strconv__f64_to_decimal_exact_int(u64 i_mant, u64 exp) {
	strconv__Dec64 d = ((strconv__Dec64){.m = 0,.e = 0,});
	u64 e = (u64)(exp - 1023U);
	if (e > _const_strconv__mantbits64) {
		return (multi_return_strconv__Dec64_bool){.arg0=d, .arg1=false};
	}
	u64 shift = (u64)(_const_strconv__mantbits64 - e);
	u64 mant = (i_mant | ((u64)(0x0010000000000000U)));
	d.m = (mant >> shift);
	if (((d.m << shift)) != mant) {
		return (multi_return_strconv__Dec64_bool){.arg0=d, .arg1=false};
	}
	for (;;) {
		if (!(((u64)(d.m % 10U)) == 0U)) break;
		d.m /= 10U;
		d.e++;
	}
	return (multi_return_strconv__Dec64_bool){.arg0=d, .arg1=true};
}
VV_LOC strconv__Dec64 strconv__f64_to_decimal(u64 mant, u64 exp) {
	int e2 = 0;
	u64 m2 = ((u64)(0U));
	if (exp == 0U) {
		e2 = (int)((int)(-1022 - ((int)(_const_strconv__mantbits64))) - 2);
		m2 = mant;
	} else {
		e2 = (int)((int)((int)(((int)(exp)) - 1023) - ((int)(_const_strconv__mantbits64))) - 2);
		m2 = (((((u64)(1U)) << _const_strconv__mantbits64)) | mant);
	}
	bool even = ((m2 & 1U)) == 0U;
	bool accept_bounds = even;
	u64 mv = ((u64)((u64)(4 * m2)));
	u64 mm_shift = strconv__bool_to_u64(mant != 0U || exp <= 1U);
	u64 vr = ((u64)(0U));
	u64 vp = ((u64)(0U));
	u64 vm = ((u64)(0U));
	int e10 = 0;
	bool vm_is_trailing_zeros = false;
	bool vr_is_trailing_zeros = false;
	if (e2 >= 0) {
		u32 q = (u32)(strconv__log10_pow2(e2) - strconv__bool_to_u32(e2 > 3));
		e10 = ((int)(q));
		int k = (int)((int)(122 + strconv__pow5_bits(((int)(q)))) - 1);
		int i = (int)((int)(-e2 + ((int)(q))) + k);
		strconv__Uint128 mul = *(((strconv__Uint128*)(&_const_strconv__pow5_inv_split_64_x[v_fixed_index((u32)(q * 2U), 584)])));
		vr = strconv__mul_shift_64((u64)(((u64)(4U)) * m2), mul, i);
		vp = strconv__mul_shift_64((u64)((u64)(((u64)(4U)) * m2) + ((u64)(2U))), mul, i);
		vm = strconv__mul_shift_64((u64)((u64)((u64)(((u64)(4U)) * m2) - ((u64)(1U))) - mm_shift), mul, i);
		if (q <= 21U) {
			if ((u64)(mv % 5U) == 0U) {
				vr_is_trailing_zeros = strconv__multiple_of_power_of_five_64(mv, q);
			} else if (accept_bounds) {
				vm_is_trailing_zeros = strconv__multiple_of_power_of_five_64((u64)((u64)(mv - 1U) - mm_shift), q);
			} else if (strconv__multiple_of_power_of_five_64((u64)(mv + 2U), q)) {
				vp--;
			}
		}
	} else {
		u32 q = (u32)(strconv__log10_pow5(-e2) - strconv__bool_to_u32(-e2 > 1));
		e10 = (int)(((int)(q)) + e2);
		int i = (int)(-e2 - ((int)(q)));
		int k = (int)(strconv__pow5_bits(i) - 121);
		int j = (int)(((int)(q)) - k);
		strconv__Uint128 mul = *(((strconv__Uint128*)(&_const_strconv__pow5_split_64_x[v_fixed_index((int)(i * 2), 652)])));
		vr = strconv__mul_shift_64((u64)(((u64)(4U)) * m2), mul, j);
		vp = strconv__mul_shift_64((u64)((u64)(((u64)(4U)) * m2) + ((u64)(2U))), mul, j);
		vm = strconv__mul_shift_64((u64)((u64)((u64)(((u64)(4U)) * m2) - ((u64)(1U))) - mm_shift), mul, j);
		if (q <= 1U) {
			vr_is_trailing_zeros = true;
			if (accept_bounds) {
				vm_is_trailing_zeros = (mm_shift == 1U);
			} else {
				vp--;
			}
		} else if (q < 63U) {
			vr_is_trailing_zeros = strconv__multiple_of_power_of_two_64(mv, (u32)(q - 1U));
		}
	}
	int removed = 0;
	u8 last_removed_digit = ((u8)(0));
	u64 out = ((u64)(0U));
	if (vm_is_trailing_zeros || vr_is_trailing_zeros) {
		for (;;) {
			u64 vp_div_10 = (u64)(vp / 10U);
			u64 vm_div_10 = (u64)(vm / 10U);
			if (vp_div_10 <= vm_div_10) {
				break;
			}
			u64 vm_mod_10 = (u64)(vm % 10U);
			u64 vr_div_10 = (u64)(vr / 10U);
			u64 vr_mod_10 = (u64)(vr % 10U);
			vm_is_trailing_zeros = vm_is_trailing_zeros && vm_mod_10 == 0U;
			vr_is_trailing_zeros = vr_is_trailing_zeros && last_removed_digit == 0;
			last_removed_digit = ((u8)(vr_mod_10));
			vr = vr_div_10;
			vp = vp_div_10;
			vm = vm_div_10;
			removed++;
		}
		if (vm_is_trailing_zeros) {
			for (;;) {
				u64 vm_div_10 = (u64)(vm / 10U);
				u64 vm_mod_10 = (u64)(vm % 10U);
				if (vm_mod_10 != 0U) {
					break;
				}
				u64 vp_div_10 = (u64)(vp / 10U);
				u64 vr_div_10 = (u64)(vr / 10U);
				u64 vr_mod_10 = (u64)(vr % 10U);
				vr_is_trailing_zeros = vr_is_trailing_zeros && last_removed_digit == 0;
				last_removed_digit = ((u8)(vr_mod_10));
				vr = vr_div_10;
				vp = vp_div_10;
				vm = vm_div_10;
				removed++;
			}
		}
		if (vr_is_trailing_zeros && last_removed_digit == 5 && ((u64)(vr % 2U)) == 0U) {
			last_removed_digit = 4;
		}
		out = vr;
		if ((vr == vm && (!accept_bounds || !vm_is_trailing_zeros)) || last_removed_digit >= 5) {
			out++;
		}
	} else {
		bool round_up = false;
		for (;;) {
			if (!((u64)(vp / 100U) > (u64)(vm / 100U))) break;
			round_up = ((u64)(vr % 100U)) >= 50U;
			vr /= 100U;
			vp /= 100U;
			vm /= 100U;
			removed += 2;
		}
		for (;;) {
			if (!((u64)(vp / 10U) > (u64)(vm / 10U))) break;
			round_up = ((u64)(vr % 10U)) >= 5U;
			vr /= 10U;
			vp /= 10U;
			vm /= 10U;
			removed++;
		}
		out = (u64)(vr + strconv__bool_to_u64(vr == vm || round_up));
	}
	return ((strconv__Dec64){.m = out,.e = (int)(e10 + removed),});
}
string strconv__f64_to_str(f64 f, int n_digit) {
	strconv__Uf64 u1 = ((strconv__Uf64){0});
	u1.f = f;
	u64 u = u1.u;
	bool neg = ((u >> ((u32)(_const_strconv__mantbits64 + _const_strconv__expbits64)))) != 0U;
	u64 mant = (u & ((u64)(((((u64)(1U)) << _const_strconv__mantbits64)) - ((u64)(1U)))));
	u64 exp = (((u >> _const_strconv__mantbits64)) & ((u64)(((((u64)(1U)) << _const_strconv__expbits64)) - ((u64)(1U)))));
	if (exp == 2047U || (exp == 0U && mant == 0U)) {
		return strconv__get_string_special(neg, exp == 0U, mant == 0U);
	}
	multi_return_strconv__Dec64_bool mr_9551 = strconv__f64_to_decimal_exact_int(mant, exp);
	strconv__Dec64 d = mr_9551.arg0;
	bool ok = mr_9551.arg1;
	if (!ok) {
		d = strconv__f64_to_decimal(mant, exp);
	}
	return strconv__Dec64_get_string_64(d, neg, n_digit, 0);
}
string strconv__f64_to_str_pad(f64 f, int n_digit) {
	strconv__Uf64 u1 = ((strconv__Uf64){0});
	u1.f = f;
	u64 u = u1.u;
	bool neg = ((u >> ((u32)(_const_strconv__mantbits64 + _const_strconv__expbits64)))) != 0U;
	u64 mant = (u & ((u64)(((((u64)(1U)) << _const_strconv__mantbits64)) - ((u64)(1U)))));
	u64 exp = (((u >> _const_strconv__mantbits64)) & ((u64)(((((u64)(1U)) << _const_strconv__expbits64)) - ((u64)(1U)))));
	if (exp == 2047U || (exp == 0U && mant == 0U)) {
		return strconv__get_string_special(neg, exp == 0U, mant == 0U);
	}
	multi_return_strconv__Dec64_bool mr_10332 = strconv__f64_to_decimal_exact_int(mant, exp);
	strconv__Dec64 d = mr_10332.arg0;
	bool ok = mr_10332.arg1;
	if (!ok) {
		d = strconv__f64_to_decimal(mant, exp);
	}
	return strconv__Dec64_get_string_64(d, neg, n_digit, n_digit);
}
void strconv__format_str_sb(string s, strconv__BF_param p, strings__Builder* sb) {
	if (p.len0 <= 0) {
		strings__Builder_write_string(sb, s);
		return;
	}
	int dif = (int)(p.len0 - utf8_str_visible_length(s));
	if (dif <= 0) {
		strings__Builder_write_string(sb, s);
		return;
	}
	if (p.align == strconv__Align_text__right) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(sb, p.pad_ch);
		}
	}
	strings__Builder_write_string(sb, s);
	if (p.align == strconv__Align_text__left) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(sb, p.pad_ch);
		}
	}
}
void strconv__format_dec_sb(u64 d, strconv__BF_param p, strings__Builder* res) {
	int n_char = strconv__dec_digits(d);
	int _t1; /* if prepend */
	if (!p.positive || p.sign_flag) {
		_t1 = 1;
	} else {
		_t1 = 0;
	}
	int sign_len = _t1;
	int number_len = (int)(sign_len + n_char);
	int dif = (int)(p.len0 - number_len);
	bool sign_written = false;
	if (p.align == strconv__Align_text__right) {
		if (p.pad_ch == '0') {
			if (p.positive) {
				if (p.sign_flag) {
					strings__Builder_write_u8(res, '+');
					sign_written = true;
				}
			} else {
				strings__Builder_write_u8(res, '-');
				sign_written = true;
			}
		}
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(res, p.pad_ch);
		}
	}
	if (!sign_written) {
		if (p.positive) {
			if (p.sign_flag) {
				strings__Builder_write_u8(res, '+');
			}
		} else {
			strings__Builder_write_u8(res, '-');
		}
	}
	Array_fixed_u8_32 buf = {0};
	int i = 20;
	u64 n = d;
	u64 d_i = ((u64)(0U));
	if (n > 0U) {
		for (;;) {
			if (!(n > 0U)) break;
			u64 n1 = (u64)(n / 100U);
			d_i = (((u64)(n - ((u64)(n1 * 100U)))) << 1U);
			n = n1;
			{
				buf[i] = _const_strconv__digit_pairs.str[d_i];
			}
			i--;
			d_i++;
			{
				buf[i] = _const_strconv__digit_pairs.str[d_i];
			}
			i--;
		}
		i++;
		if (d_i < 20U) {
			i++;
		}
		strings__Builder_write_ptr(res, &buf[i], n_char);
	} else {
		strings__Builder_write_u8(res, '0');
	}
	if (p.align == strconv__Align_text__left) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(res, p.pad_ch);
		}
	}
	return;
}
string strconv__f64_to_str_lnd1(f64 f, int dec_digit) {
	{
		string s = strconv__f64_to_str((f64)(f + _const_strconv__dec_round[dec_digit]), 18);
		if (s.len > 2 && (s.str[ 0] == 'n' || s.str[ 1] == 'i')) {
			return s;
		}
		bool m_sgn_flag = false;
		int sgn = 1;
		Array_fixed_u8_26 b = {0};
		int d_pos = 1;
		int i = 0;
		int i1 = 0;
		int exp = 0;
		int exp_sgn = 1;
		int dot_res_sp = -1;
		for (int _t2 = 0; _t2 < s.len; ++_t2) {
			u8 c = s.str[_t2];

			if (c == ('-')) {
				sgn = -1;
				i++;
			}
			else if (c == ('+')) {
				sgn = 1;
				i++;
			}
			else if ((c >= '0' && c <= '9')) {
				b[i1] = c;
				i1++;
				i++;
			}
			else if (c == ('.')) {
				if (sgn > 0) {
					d_pos = i;
				} else {
					d_pos = (int)(i - 1);
				}
				i++;
			}
			else if (c == ('e')) {
				i++;
				break;
			}
			else {
				string_free(&s);
				return _S("[Float conversion error!!]");
			}
		}
		b[i1] = 0;
		if (s.str[ i] == '-') {
			exp_sgn = -1;
			i++;
		} else if (s.str[ i] == '+') {
			exp_sgn = 1;
			i++;
		}
		int c = i;
		for (;;) {
			if (!(c < s.len)) break;
			exp = (int)((int)(exp * 10) + ((int)((rune)(s.str[ c] - '0'))));
			c++;
		}
		Array_u8 res = __new_array_with_default((int)(exp + 40), 0, sizeof(u8), &(u8[]){0});
		int r_i = 0;
		string_free(&s);
		if (sgn == 1) {
			if (m_sgn_flag) {
				((u8*)res.data)[r_i] = '+';
				r_i++;
			}
		} else {
			((u8*)res.data)[r_i] = '-';
			r_i++;
		}
		i = 0;
		if (exp_sgn >= 0) {
			for (;;) {
				if (!(b[i] != 0)) break;
				((u8*)res.data)[r_i] = b[i];
				r_i++;
				i++;
				if (i >= d_pos && exp >= 0) {
					if (exp == 0) {
						dot_res_sp = r_i;
						((u8*)res.data)[r_i] = '.';
						r_i++;
					}
					exp--;
				}
			}
			for (;;) {
				if (!(exp >= 0)) break;
				((u8*)res.data)[r_i] = '0';
				r_i++;
				exp--;
			}
		} else {
			bool dot_p = true;
			for (;;) {
				if (!(exp > 0)) break;
				((u8*)res.data)[r_i] = '0';
				r_i++;
				exp--;
				if (dot_p) {
					dot_res_sp = r_i;
					((u8*)res.data)[r_i] = '.';
					r_i++;
					dot_p = false;
				}
			}
			for (;;) {
				if (!(b[i] != 0)) break;
				((u8*)res.data)[r_i] = b[i];
				r_i++;
				i++;
			}
		}
		if (dec_digit <= 0) {
			if (dot_res_sp < 0) {
				dot_res_sp = (int)(i + 1);
			}
			string tmp_res = string_clone(tos(res.data, dot_res_sp));
			array_free(&res);
			return tmp_res;
		}
		if (dot_res_sp >= 0) {
			r_i = (int)((int)(dot_res_sp + dec_digit) + 1);
			((u8*)res.data)[r_i] = 0;
			for (int c1 = 1; c1 < (int)(dec_digit + 1); ++c1) {
				if (((u8*)res.data)[(int)(r_i - c1)] == 0) {
					((u8*)res.data)[(int)(r_i - c1)] = '0';
				}
			}
			string tmp_res = string_clone(tos(res.data, r_i));
			array_free(&res);
			return tmp_res;
		} else {
			if (dec_digit > 0) {
				int c1 = 0;
				((u8*)res.data)[r_i] = '.';
				r_i++;
				for (;;) {
					if (!(c1 < dec_digit)) break;
					((u8*)res.data)[r_i] = '0';
					r_i++;
					c1++;
				}
				((u8*)res.data)[r_i] = 0;
			}
			string tmp_res = string_clone(tos(res.data, r_i));
			array_free(&res);
			return tmp_res;
		}
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
string strconv__format_fl(f64 f, strconv__BF_param p) {
	{
		string fs = strconv__f64_to_str_lnd1((f >= ((f64)(0.0)) ? (f) : (-f)), p.len1);
		if (fs.str[ 0] == '[') {
			return fs;
		}
		if (p.rm_tail_zero) {
			string tmp = fs;
			fs = strconv__remove_tail_zeros(fs);
			string_free(&tmp);
		}
		Array_fixed_u8_512 buf = {0};
		Array_fixed_u8_512 out = {0};
		int buf_i = 0;
		int out_i = 0;
		int sign_len_diff = 0;
		if (p.pad_ch == '0') {
			if (p.positive) {
				if (p.sign_flag) {
					out[out_i] = '+';
					out_i++;
					sign_len_diff = -1;
				}
			} else {
				out[out_i] = '-';
				out_i++;
				sign_len_diff = -1;
			}
		} else {
			if (p.positive) {
				if (p.sign_flag) {
					buf[buf_i] = '+';
					buf_i++;
				}
			} else {
				buf[buf_i] = '-';
				buf_i++;
			}
		}
		vmemcpy(&buf[buf_i], fs.str, fs.len);
		buf_i += fs.len;
		int dif = (int)((int)(p.len0 - buf_i) + sign_len_diff);
		if (p.align == strconv__Align_text__right) {
			for (int i1 = 0; i1 < dif; i1++) {
				out[out_i] = p.pad_ch;
				out_i++;
			}
		}
		vmemcpy(&out[out_i], &buf[0], buf_i);
		out_i += buf_i;
		if (p.align == strconv__Align_text__left) {
			for (int i1 = 0; i1 < dif; i1++) {
				out[out_i] = p.pad_ch;
				out_i++;
			}
		}
		out[out_i] = 0;
		string tmp = fs;
		fs = tos_clone(&out[0]);
		string_free(&tmp);
		return fs;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
string strconv__format_es(f64 f, strconv__BF_param p) {
	{
		string fs = strconv__f64_to_str_pad((f > 0 ? (f) : (-f)), p.len1);
		if (p.rm_tail_zero) {
			string tmp = fs;
			fs = strconv__remove_tail_zeros(fs);
			string_free(&tmp);
		}
		Array_fixed_u8_512 buf = {0};
		Array_fixed_u8_512 out = {0};
		int buf_i = 0;
		int out_i = 0;
		int sign_len_diff = 0;
		if (p.pad_ch == '0') {
			if (p.positive) {
				if (p.sign_flag) {
					out[out_i] = '+';
					out_i++;
					sign_len_diff = -1;
				}
			} else {
				out[out_i] = '-';
				out_i++;
				sign_len_diff = -1;
			}
		} else {
			if (p.positive) {
				if (p.sign_flag) {
					buf[buf_i] = '+';
					buf_i++;
				}
			} else {
				buf[buf_i] = '-';
				buf_i++;
			}
		}
		vmemcpy(&buf[buf_i], fs.str, fs.len);
		buf_i += fs.len;
		int dif = (int)((int)(p.len0 - buf_i) + sign_len_diff);
		if (p.align == strconv__Align_text__right) {
			for (int i1 = 0; i1 < dif; i1++) {
				out[out_i] = p.pad_ch;
				out_i++;
			}
		}
		vmemcpy(&out[out_i], &buf[0], buf_i);
		out_i += buf_i;
		if (p.align == strconv__Align_text__left) {
			for (int i1 = 0; i1 < dif; i1++) {
				out[out_i] = p.pad_ch;
				out_i++;
			}
		}
		out[out_i] = 0;
		string tmp = fs;
		fs = tos_clone(&out[0]);
		string_free(&tmp);
		return fs;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
string strconv__remove_tail_zeros(string s) {
	{
		u8* buf = malloc_noscan((int)(s.len + 1));
		int i_d = 0;
		int i_s = 0;
		for (;;) {
			if (!(i_s < s.len && !(s.str[ i_s] == '-' || s.str[ i_s] == '+') && (s.str[ i_s] > '9' || s.str[ i_s] < '0'))) break;
			buf[i_d] = s.str[ i_s];
			i_s++;
			i_d++;
		}
		if (i_s < s.len && (s.str[ i_s] == '-' || s.str[ i_s] == '+')) {
			buf[i_d] = s.str[ i_s];
			i_s++;
			i_d++;
		}
		for (;;) {
			if (!(i_s < s.len && s.str[ i_s] >= '0' && s.str[ i_s] <= '9')) break;
			buf[i_d] = s.str[ i_s];
			i_s++;
			i_d++;
		}
		if (i_s < s.len && s.str[ i_s] == '.') {
			int i_s1 = (int)(i_s + 1);
			int sum = 0;
			int i_s2 = i_s1;
			for (;;) {
				if (!(i_s1 < s.len && s.str[ i_s1] >= '0' && s.str[ i_s1] <= '9')) break;
				sum += (u8)(s.str[ i_s1] - ((u8)('0')));
				if (s.str[ i_s1] != '0') {
					i_s2 = i_s1;
				}
				i_s1++;
			}
			if (sum > 0) {
				for (int c_i = i_s; c_i < (int)(i_s2 + 1); ++c_i) {
					buf[i_d] = s.str[ c_i];
					i_d++;
				}
			}
			i_s = i_s1;
		}
		if (i_s < s.len && s.str[ i_s] != '.') {
			for (;;) {
				buf[i_d] = s.str[ i_s];
				i_s++;
				i_d++;
				if (i_s >= s.len) {
					break;
				}
			}
		}
		buf[i_d] = 0;
		return tos(buf, i_d);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
inline string strconv__ftoa_64(f64 f) {
	return strconv__f64_to_str(f, 17);
}
inline string strconv__ftoa_32(f32 f) {
	return strconv__f32_to_str(f, 8);
}
string strconv__format_int(i64 n, int radix) {
	{
		if (radix < 2 || radix > 36) {
			panic_n(_S("invalid radix, it should be => 2 and <= 36, actual:"), radix);
			VUNREACHABLE();
		}
		if (n == 0) {
			return _S("0");
		}
		i64 n_copy = n;
		bool have_minus = false;
		if (n < 0) {
			have_minus = true;
			n_copy = -n_copy;
		}
		string res = _S("");
		for (;;) {
			if (!(n_copy != 0)) break;
			string tmp_0 = res;
			int bdx = ((int)((i64)(n_copy % radix)));
			string tmp_1 = u8_ascii_str(_const_strconv__base_digits.str[ bdx]);
			res = string__plus(tmp_1, res);
			string_free(&tmp_0);
			string_free(&tmp_1);
			n_copy /= radix;
		}
		if (have_minus) {
			string final_res = string__plus(_S("-"), res);
			string_free(&res);
			return final_res;
		}
		return res;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
string strconv__format_uint(u64 n, int radix) {
	{
		if (radix < 2 || radix > 36) {
			panic_n(_S("invalid radix, it should be => 2 and <= 36, actual:"), radix);
			VUNREACHABLE();
		}
		if (n == 0U) {
			return _S("0");
		}
		u64 n_copy = n;
		string res = _S("");
		u64 uradix = ((u64)(radix));
		for (;;) {
			if (!(n_copy != 0U)) break;
			string tmp_0 = res;
			string tmp_1 = u8_ascii_str(_const_strconv__base_digits.str[ (u64)(n_copy % uradix)]);
			res = string__plus(tmp_1, res);
			string_free(&tmp_0);
			string_free(&tmp_1);
			n_copy /= uradix;
		}
		return res;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
string strconv__f32_to_str_l(f32 f) {
	string s = strconv__f32_to_str(f, 6);
	string res = strconv__fxx_to_str_l_parse(s);
	string_free(&s);
	return res;
}
string strconv__f32_to_str_l_with_dot(f32 f) {
	string s = strconv__f32_to_str(f, 6);
	string res = strconv__fxx_to_str_l_parse_with_dot(s);
	string_free(&s);
	return res;
}
string strconv__f64_to_str_l(f64 f) {
	string s = strconv__f64_to_str(f, 18);
	string res = strconv__fxx_to_str_l_parse(s);
	string_free(&s);
	return res;
}
string strconv__f64_to_str_l_with_dot(f64 f) {
	string s = strconv__f64_to_str(f, 18);
	string res = strconv__fxx_to_str_l_parse_with_dot(s);
	string_free(&s);
	return res;
}
string strconv__fxx_to_str_l_parse(string s) {
	if (s.len > 2 && (s.str[ 0] == 'n' || s.str[ 1] == 'i')) {
		return string_clone(s);
	}
	bool m_sgn_flag = false;
	int sgn = 1;
	Array_fixed_u8_26 b = {0};
	int d_pos = 1;
	int i = 0;
	int i1 = 0;
	int exp = 0;
	int exp_sgn = 1;
	for (int _t2 = 0; _t2 < s.len; ++_t2) {
		u8 c = s.str[_t2];
		if (c == '-') {
			sgn = -1;
			i++;
		} else if (c == '+') {
			sgn = 1;
			i++;
		} else if (c >= '0' && c <= '9') {
			b[i1] = c;
			i1++;
			i++;
		} else if (c == '.') {
			if (sgn > 0) {
				d_pos = i;
			} else {
				d_pos = (int)(i - 1);
			}
			i++;
		} else if (c == 'e') {
			i++;
			break;
		} else {
			return _S("Float conversion error!!");
		}
	}
	b[i1] = 0;
	if (s.str[ i] == '-') {
		exp_sgn = -1;
		i++;
	} else if (s.str[ i] == '+') {
		exp_sgn = 1;
		i++;
	}
	int c = i;
	for (;;) {
		if (!(c < s.len)) break;
		exp = (int)((int)(exp * 10) + ((int)((rune)(s.str[ c] - '0'))));
		c++;
	}
	Array_u8 res = __new_array_with_default((int)(exp + 32), 0, sizeof(u8), &(u8[]){0});
	int r_i = 0;
	if (sgn == 1) {
		if (m_sgn_flag) {
			((u8*)res.data)[r_i] = '+';
			r_i++;
		}
	} else {
		((u8*)res.data)[r_i] = '-';
		r_i++;
	}
	i = 0;
	if (exp_sgn >= 0) {
		for (;;) {
			if (!(b[i] != 0)) break;
			((u8*)res.data)[r_i] = b[i];
			r_i++;
			i++;
			if (i >= d_pos && exp >= 0) {
				if (exp == 0) {
					((u8*)res.data)[r_i] = '.';
					r_i++;
				}
				exp--;
			}
		}
		for (;;) {
			if (!(exp >= 0)) break;
			((u8*)res.data)[r_i] = '0';
			r_i++;
			exp--;
		}
	} else {
		bool dot_p = true;
		for (;;) {
			if (!(exp > 0)) break;
			((u8*)res.data)[r_i] = '0';
			r_i++;
			exp--;
			if (dot_p) {
				((u8*)res.data)[r_i] = '.';
				r_i++;
				dot_p = false;
			}
		}
		for (;;) {
			if (!(b[i] != 0)) break;
			((u8*)res.data)[r_i] = b[i];
			r_i++;
			i++;
		}
	}
	if (r_i > 1 && ((u8*)res.data)[(int)(r_i - 1)] == '.') {
		((u8*)res.data)[r_i] = '0';
		r_i++;
	} else if (!(Array_u8_contains(res, '.'))) {
		((u8*)res.data)[r_i] = '.';
		r_i++;
		((u8*)res.data)[r_i] = '0';
		r_i++;
	}
	((u8*)res.data)[r_i] = 0;
	return tos(res.data, r_i);
}
string strconv__fxx_to_str_l_parse_with_dot(string s) {
	if (s.len > 2 && (s.str[ 0] == 'n' || s.str[ 1] == 'i')) {
		return string_clone(s);
	}
	bool m_sgn_flag = false;
	int sgn = 1;
	Array_fixed_u8_26 b = {0};
	int d_pos = 1;
	int i = 0;
	int i1 = 0;
	int exp = 0;
	int exp_sgn = 1;
	for (int _t2 = 0; _t2 < s.len; ++_t2) {
		u8 c = s.str[_t2];
		if (c == '-') {
			sgn = -1;
			i++;
		} else if (c == '+') {
			sgn = 1;
			i++;
		} else if (c >= '0' && c <= '9') {
			b[i1] = c;
			i1++;
			i++;
		} else if (c == '.') {
			if (sgn > 0) {
				d_pos = i;
			} else {
				d_pos = (int)(i - 1);
			}
			i++;
		} else if (c == 'e') {
			i++;
			break;
		} else {
			return _S("Float conversion error!!");
		}
	}
	b[i1] = 0;
	if (s.str[ i] == '-') {
		exp_sgn = -1;
		i++;
	} else if (s.str[ i] == '+') {
		exp_sgn = 1;
		i++;
	}
	int c = i;
	for (;;) {
		if (!(c < s.len)) break;
		exp = (int)((int)(exp * 10) + ((int)((rune)(s.str[ c] - '0'))));
		c++;
	}
	Array_u8 res = __new_array_with_default((int)(exp + 32), 0, sizeof(u8), &(u8[]){0});
	int r_i = 0;
	if (sgn == 1) {
		if (m_sgn_flag) {
			((u8*)res.data)[r_i] = '+';
			r_i++;
		}
	} else {
		((u8*)res.data)[r_i] = '-';
		r_i++;
	}
	i = 0;
	if (exp_sgn >= 0) {
		for (;;) {
			if (!(b[i] != 0)) break;
			((u8*)res.data)[r_i] = b[i];
			r_i++;
			i++;
			if (i >= d_pos && exp >= 0) {
				if (exp == 0) {
					((u8*)res.data)[r_i] = '.';
					r_i++;
				}
				exp--;
			}
		}
		for (;;) {
			if (!(exp >= 0)) break;
			((u8*)res.data)[r_i] = '0';
			r_i++;
			exp--;
		}
	} else {
		bool dot_p = true;
		for (;;) {
			if (!(exp > 0)) break;
			((u8*)res.data)[r_i] = '0';
			r_i++;
			exp--;
			if (dot_p) {
				((u8*)res.data)[r_i] = '.';
				r_i++;
				dot_p = false;
			}
		}
		for (;;) {
			if (!(b[i] != 0)) break;
			((u8*)res.data)[r_i] = b[i];
			r_i++;
			i++;
		}
	}
	if (r_i > 1 && ((u8*)res.data)[(int)(r_i - 1)] == '.') {
		((u8*)res.data)[r_i] = '0';
		r_i++;
	} else if (!(Array_u8_contains(res, '.'))) {
		((u8*)res.data)[r_i] = '.';
		r_i++;
		((u8*)res.data)[r_i] = '0';
		r_i++;
	}
	((u8*)res.data)[r_i] = 0;
	return tos(res.data, r_i);
}
inline VV_LOC u32 strconv__bool_to_u32(bool b) {
	if (b) {
		return ((u32)(1U));
	}
	return ((u32)(0U));
}
inline VV_LOC u64 strconv__bool_to_u64(bool b) {
	if (b) {
		return ((u64)(1U));
	}
	return ((u64)(0U));
}
VV_LOC string strconv__get_string_special(bool neg, bool expZero, bool mantZero) {
	if (!mantZero) {
		return _S("nan");
	}
	if (!expZero) {
		if (neg) {
			return _S("-inf");
		} else {
			return _S("+inf");
		}
	}
	if (neg) {
		return _S("-0e+00");
	}
	return _S("0e+00");
}
VV_LOC u32 strconv__mul_shift_32(u32 m, u64 mul, int ishift) {
	multi_return_u64_u64 mr_750 = math__bits__mul_64(((u64)(m)), mul);
	u64 hi = mr_750.arg0;
	u64 lo = mr_750.arg1;
	u64 shifted_sum = (u64)(((lo >> ((u64)(ishift)))) + ((hi << ((u64)((int)(64 - ishift))))));
	;
	return ((u32)(shifted_sum));
}
inline VV_LOC u32 strconv__mul_pow5_invdiv_pow2(u32 m, u32 q, int j) {
	;
	return strconv__mul_shift_32(m, _const_strconv__pow5_inv_split_32[q], j);
}
inline VV_LOC u32 strconv__mul_pow5_div_pow2(u32 m, u32 i, int j) {
	;
	return strconv__mul_shift_32(m, _const_strconv__pow5_split_32[i], j);
}
VV_LOC u32 strconv__pow5_factor_32(u32 i_v) {
	u32 v = i_v;
	for (u32 n = ((u32)(0U)); true; n++) {
		u32 q = (u32)(v / 5U);
		u32 r = (u32)(v % 5U);
		if (r != 0U) {
			return n;
		}
		v = q;
	}
	return v;
}
VV_LOC bool strconv__multiple_of_power_of_five_32(u32 v, u32 p) {
	return strconv__pow5_factor_32(v) >= p;
}
VV_LOC bool strconv__multiple_of_power_of_two_32(u32 v, u32 p) {
	return ((u32)(math__bits__trailing_zeros_32(v))) >= p;
}
VV_LOC u32 strconv__log10_pow2(int e) {
	;
	;
	return (((u32)(((u32)(e)) * 78913U)) >> 18U);
}
VV_LOC u32 strconv__log10_pow5(int e) {
	;
	;
	return (((u32)(((u32)(e)) * 732923U)) >> 20U);
}
VV_LOC int strconv__pow5_bits(int e) {
	;
	;
	return ((int)((u32)(((((u32)(((u32)(e)) * 1217359U)) >> 19U)) + 1U)));
}
VV_LOC u64 strconv__shift_right_128(strconv__Uint128 v, int shift) {
	;
	return (((v.hi << ((u64)((int)(64 - shift))))) | ((v.lo >> ((u32)(shift)))));
}
VV_LOC u64 strconv__mul_shift_64(u64 m, strconv__Uint128 mul, int shift) {
	multi_return_u64_u64 mr_3253 = math__bits__mul_64(m, mul.hi);
	u64 hihi = mr_3253.arg0;
	u64 hilo = mr_3253.arg1;
	multi_return_u64_u64 mr_3288 = math__bits__mul_64(m, mul.lo);
	u64 lohi = mr_3288.arg0;
	strconv__Uint128 sum = ((strconv__Uint128){.lo = (u64)(lohi + hilo),.hi = hihi,});
	if (sum.lo < lohi) {
		sum.hi++;
	}
	return strconv__shift_right_128(sum, (int)(shift - 64));
}
VV_LOC u32 strconv__pow5_factor_64(u64 v_i) {
	u64 v = v_i;
	for (u32 n = ((u32)(0U)); true; n++) {
		u64 q = (u64)(v / 5U);
		u64 r = (u64)(v % 5U);
		if (r != 0U) {
			return n;
		}
		v = q;
	}
	return ((u32)(0U));
}
VV_LOC bool strconv__multiple_of_power_of_five_64(u64 v, u32 p) {
	return strconv__pow5_factor_64(v) >= p;
}
VV_LOC bool strconv__multiple_of_power_of_two_64(u64 v, u32 p) {
	return ((u32)(math__bits__trailing_zeros_64(v))) >= p;
}
int strconv__dec_digits(u64 n) {
	if (n <= 9999999999U) {
		if (n <= 99999U) {
			if (n <= 99U) {
				if (n <= 9U) {
					return 1;
				} else {
					return 2;
				}
			} else {
				if (n <= 999U) {
					return 3;
				} else {
					if (n <= 9999U) {
						return 4;
					} else {
						return 5;
					}
				}
			}
		} else {
			if (n <= 9999999U) {
				if (n <= 999999U) {
					return 6;
				} else {
					return 7;
				}
			} else {
				if (n <= 99999999U) {
					return 8;
				} else {
					if (n <= 999999999U) {
						return 9;
					}
					return 10;
				}
			}
		}
	} else {
		if (n <= 999999999999999U) {
			if (n <= 999999999999U) {
				if (n <= 99999999999U) {
					return 11;
				} else {
					return 12;
				}
			} else {
				if (n <= 9999999999999U) {
					return 13;
				} else {
					if (n <= 99999999999999U) {
						return 14;
					} else {
						return 15;
					}
				}
			}
		} else {
			if (n <= 99999999999999999U) {
				if (n <= 9999999999999999U) {
					return 16;
				} else {
					return 17;
				}
			} else {
				if (n <= 999999999999999999U) {
					return 18;
				} else {
					if (n <= 9999999999999999999U) {
						return 19;
					}
					return 20;
				}
			}
		}
	}
	return 0;
}
VV_LOC array __new_array(int mylen, int cap, int elm_size) {
	panic_on_negative_len(mylen);
	panic_on_negative_cap(cap);
	int _t1; /* if prepend */
	if (cap < mylen) {
		_t1 = mylen;
	} else {
		_t1 = cap;
	}
	int cap_ = _t1;
	array arr = ((array){.data = (voidptr)vcalloc((u64)(((u64)(cap_)) * ((u64)(elm_size)))),.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	return arr;
}
VV_LOC array __new_array_with_default(int mylen, int cap, int elm_size, voidptr val) {
	panic_on_negative_len(mylen);
	panic_on_negative_cap(cap);
	int _t1; /* if prepend */
	if (cap < mylen) {
		_t1 = mylen;
	} else {
		_t1 = cap;
	}
	int cap_ = _t1;
	array arr = ((array){.data = 0,.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	u64 total_size = (u64)(((u64)(cap_)) * ((u64)(elm_size)));
	if (cap_ > 0 && mylen == 0) {
		arr.data = _v_malloc(__at_least_one(total_size));
	} else {
		arr.data = vcalloc(total_size);
	}
	if (val != 0) {
		u8* eptr = ((u8*)(arr.data));
		{
			if (eptr != ((void*)0)) {
				if (arr.element_size == 1) {
					u8 byte_value = *(((u8*)(val)));
					for (int i = 0; i < arr.len; ++i) {
						eptr[i] = byte_value;
					}
				} else {
					for (int _t2 = 0; _t2 < arr.len; ++_t2) {
						vmemcpy(eptr, val, arr.element_size);
						eptr += arr.element_size;
					}
				}
			}
		}
	}
	return arr;
}
VV_LOC array __new_array_with_multi_default(int mylen, int cap, int elm_size, voidptr val) {
	panic_on_negative_len(mylen);
	panic_on_negative_cap(cap);
	int _t1; /* if prepend */
	if (cap < mylen) {
		_t1 = mylen;
	} else {
		_t1 = cap;
	}
	int cap_ = _t1;
	array arr = ((array){.data = 0,.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	u64 total_size = (u64)(((u64)(cap_)) * ((u64)(elm_size)));
	arr.data = vcalloc(__at_least_one(total_size));
	if (val != 0) {
		u8* eptr = ((u8*)(arr.data));
		{
			if (eptr != ((void*)0)) {
				for (int i = 0; i < arr.len; ++i) {
					vmemcpy(eptr, ((charptr)(val)) + (int)(i * arr.element_size), arr.element_size);
					eptr += arr.element_size;
				}
			}
		}
	}
	return arr;
}
VV_LOC array __new_array_with_array_default(int mylen, int cap, int elm_size, array val, int depth) {
	panic_on_negative_len(mylen);
	panic_on_negative_cap(cap);
	int _t1; /* if prepend */
	if (cap < mylen) {
		_t1 = mylen;
	} else {
		_t1 = cap;
	}
	int cap_ = _t1;
	array arr = ((array){.data = (voidptr)_v_malloc(__at_least_one((u64)(((u64)(cap_)) * ((u64)(elm_size))))),.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	u8* eptr = ((u8*)(arr.data));
	{
		if (eptr != ((void*)0)) {
			for (int _t2 = 0; _t2 < arr.len; ++_t2) {
				array val_clone = array_clone_to_depth(&val, depth);
				vmemcpy(eptr, &val_clone, arr.element_size);
				eptr += arr.element_size;
			}
		}
	}
	return arr;
}
VV_LOC array new_array_from_c_array(int len, int cap, int elm_size, voidptr c_array) {
	panic_on_negative_len(len);
	panic_on_negative_cap(cap);
	int _t1; /* if prepend */
	if (cap < len) {
		_t1 = len;
	} else {
		_t1 = cap;
	}
	int cap_ = _t1;
	array arr = ((array){.data = (voidptr)vcalloc((u64)(((u64)(cap_)) * ((u64)(elm_size)))),.offset = 0,.len = len,.cap = cap_,.flags = 0,.element_size = elm_size,});
	vmemcpy(arr.data, c_array, (u64)(((u64)(len)) * ((u64)(elm_size))));
	return arr;
}
void array_ensure_cap(array* a, int required) {
	if (required <= a->cap) {
		return;
	}
	if (ArrayFlags_has(&a->flags, ArrayFlags__nogrow)) {
		panic_n(_S("array.ensure_cap: array with the flag `.nogrow` cannot grow in size, array required new size:"), required);
		VUNREACHABLE();
	}
	i64 _t1; /* if prepend */
	if (a->cap > 0) {
		_t1 = ((i64)(a->cap));
	} else {
		_t1 = ((i64)(2));
	}
	i64 cap = _t1;
	for (;;) {
		if (!(required > cap)) break;
		cap *= 2;
	}
	if (cap > _const_max_int) {
		if (a->cap < _const_max_int) {
			cap = _const_max_int;
		} else {
			panic_n(_S("array.ensure_cap: array needs to grow to cap (which is > 2^31):"), cap);
			VUNREACHABLE();
		}
	}
	u64 new_size = (u64)(((u64)(cap)) * ((u64)(a->element_size)));
	u8* new_data = _v_malloc(__at_least_one(new_size));
	if (a->data != ((void*)0)) {
		vmemcpy(new_data, a->data, (u64)(((u64)(a->len)) * ((u64)(a->element_size))));
		if (ArrayFlags_has(&a->flags, ArrayFlags__noslices)) {
			_v_free(a->data);
		}
	}
	a->data = new_data;
	a->offset = 0;
	a->cap = ((int)(cap));
}
VV_LOC void array_insert_many(array* a, int i, voidptr val, int size) {
	if (i < 0 || i > a->len) {
		panic_n2(_S("array.insert_many: index out of range (i,a.len):"), i, a->len);
		VUNREACHABLE();
	}
	i64 new_len = (i64)(((i64)(a->len)) + ((i64)(size)));
	if (new_len > _const_max_int) {
		panic_n(_S("array.insert_many: max_int will be exceeded by a.len:"), new_len);
		VUNREACHABLE();
	}
	array_ensure_cap(a, ((int)(new_len)));
	int elem_size = a->element_size;
	{
		voidptr iptr = array_get_unsafe(*a, i);
		vmemmove(array_get_unsafe(*a, (int)(i + size)), iptr, (u64)(((u64)((int)(a->len - i))) * ((u64)(elem_size))));
		vmemcpy(iptr, val, (u64)(((u64)(size)) * ((u64)(elem_size))));
	}
	a->len = ((int)(new_len));
}
VV_LOC void array_prepend_many(array* a, voidptr val, int size) {
	array_insert_many(a, 0, val, size);
}
void array_clear(array* a) {
	a->len = 0;
}
void array_trim(array* a, int index) {
	if (index < a->len) {
		a->len = index;
	}
}
inline VV_LOC voidptr array_get_unsafe(array a, int i) {
	{
		return ((u8*)(a.data)) + (u64)(((u64)(i)) * ((u64)(a.element_size)));
	}
	return 0;
}
VV_LOC voidptr array_get(array a, int i) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i >= a.len) {
			panic_n2(_S("array.get: index out of range (i,a.len):"), i, a.len);
			VUNREACHABLE();
		}
	}
	#endif
	{
		return ((u8*)(a.data)) + (u64)(((u64)(i)) * ((u64)(a.element_size)));
	}
	return 0;
}
VV_LOC voidptr array_get_with_check(array a, int i) {
	if (i < 0 || i >= a.len) {
		return 0;
	}
	{
		return ((u8*)(a.data)) + (u64)(((u64)(i)) * ((u64)(a.element_size)));
	}
	return 0;
}
VV_LOC array array_slice(array a, int start, int _end) {
	int _t1; /* if prepend */
	if (_end == _const_max_int) {
		_t1 = a.len;
	} else {
		_t1 = _end;
	}
	int end = _t1;
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (start > end) {
			_v_panic(string__plus(string__plus(string__plus(_S("array.slice: invalid slice index (start>end):"), i64_str(((i64)(start)))), _S(", ")), i64_str(((i64)(end)))));
			VUNREACHABLE();
		}
		if (end > a.len) {
			_v_panic(string__plus(string__plus(string__plus(string__plus(_S("array.slice: slice bounds out of range ("), i64_str(((i64)(end)))), _S(" >= ")), i64_str(((i64)(a.len)))), _S(")")));
			VUNREACHABLE();
		}
		if (start < 0) {
			_v_panic(string__plus(_S("array.slice: slice bounds out of range (start<0):"), int_str(start)));
			VUNREACHABLE();
		}
	}
	#endif
	u64 offset = (u64)(((u64)(start)) * ((u64)(a.element_size)));
	u8* data = ((u8*)(a.data)) + offset;
	int l = (int)(end - start);
	array res = ((array){.data = (voidptr)data,.offset = (int)(a.offset + ((int)(offset))),.len = l,.cap = l,.flags = 0,.element_size = a.element_size,});
	return res;
}
VV_LOC array array_slice_ni(array a, int _start, int _end) {
	int _t1; /* if prepend */
	if (_end == _const_max_int) {
		_t1 = a.len;
	} else {
		_t1 = _end;
	}
	int end = _t1;
	int start = _start;
	if (start < 0) {
		start = (int)(a.len + start);
		if (start < 0) {
			start = 0;
		}
	}
	if (end < 0) {
		end = (int)(a.len + end);
		if (end < 0) {
			end = 0;
		}
	}
	if (end >= a.len) {
		end = a.len;
	}
	if (start >= a.len || start > end) {
		array res = ((array){.data = a.data,.offset = 0,.len = 0,.cap = 0,.flags = 0,.element_size = a.element_size,});
		return res;
	}
	u64 offset = (u64)(((u64)(start)) * ((u64)(a.element_size)));
	u8* data = ((u8*)(a.data)) + offset;
	int l = (int)(end - start);
	array res = ((array){.data = (voidptr)data,.offset = (int)(a.offset + ((int)(offset))),.len = l,.cap = l,.flags = 0,.element_size = a.element_size,});
	return res;
}
VV_LOC array array_clone_static_to_depth(array a, int depth) {
	return array_clone_to_depth(&a, depth);
}
array array_clone(array* a) {
	return array_clone_to_depth(a, 0);
}
array array_clone_to_depth(array* a, int depth) {
	u64 source_capacity_in_bytes = (u64)(((u64)(a->cap)) * ((u64)(a->element_size)));
	array arr = ((array){.data = (voidptr)vcalloc(source_capacity_in_bytes),.offset = 0,.len = a->len,.cap = a->cap,.flags = 0,.element_size = a->element_size,});
	if (depth > 0 && _us32_eq(sizeof(array),a->element_size) && a->len >= 0 && a->cap >= a->len) {
		array ar = ((array){.data = 0,.offset = 0,.len = 0,.cap = 0,.flags = 0,.element_size = 0,});
		int asize = ((int)(sizeof(array)));
		for (int i = 0; i < a->len; ++i) {
			vmemcpy(&ar, array_get_unsafe(*a, i), asize);
			array ar_clone = array_clone_to_depth(&ar, (int)(depth - 1));
			array_set_unsafe(&arr, i, &ar_clone);
		}
		return arr;
	} else {
		if (a->data != 0 && source_capacity_in_bytes > 0U) {
			vmemcpy(((u8*)(arr.data)), a->data, source_capacity_in_bytes);
		}
		return arr;
	}
	return (array){.data = 0,.offset = 0,.len = 0,.cap = 0,.flags = 0,.element_size = 0,};
}
inline VV_LOC void array_set_unsafe(array* a, int i, voidptr val) {
	vmemcpy(((u8*)(a->data)) + (u64)(((u64)(a->element_size)) * ((u64)(i))), val, a->element_size);
}
VV_LOC void array_set(array* a, int i, voidptr val) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i >= a->len) {
			panic_n2(_S("array.set: index out of range (i,a.len):"), i, a->len);
			VUNREACHABLE();
		}
	}
	#endif
	vmemcpy(((u8*)(a->data)) + (u64)(((u64)(a->element_size)) * ((u64)(i))), val, a->element_size);
}
VV_LOC void array_push(array* a, voidptr val) {
	if (a->len < 0) {
		_v_panic(_S("array.push: negative len"));
		VUNREACHABLE();
	}
	if (a->len >= _const_max_int) {
		_v_panic(_S("array.push: len bigger than max_int"));
		VUNREACHABLE();
	}
	if (a->len >= a->cap) {
		array_ensure_cap(a, (int)(a->len + 1));
	}
	vmemcpy(((u8*)(a->data)) + (u64)(((u64)(a->element_size)) * ((u64)(a->len))), val, a->element_size);
	a->len++;
}
void array_push_many(array* a, voidptr val, int size) {
	if (size <= 0 || val == ((void*)0)) {
		return;
	}
	i64 new_len = (i64)(((i64)(a->len)) + ((i64)(size)));
	if (new_len > _const_max_int) {
		_v_panic(_S("array.push_many: new len exceeds max_int"));
		VUNREACHABLE();
	}
	if (new_len >= a->cap) {
		array_ensure_cap(a, ((int)(new_len)));
	}
	if (a->data == val && a->data != 0) {
		array copy = array_clone(a);
		vmemcpy(((u8*)(a->data)) + (u64)(((u64)(a->element_size)) * ((u64)(a->len))), copy.data, (u64)(((u64)(a->element_size)) * ((u64)(size))));
	} else {
		if (a->data != 0 && val != 0) {
			vmemcpy(((u8*)(a->data)) + (u64)(((u64)(a->element_size)) * ((u64)(a->len))), val, (u64)(((u64)(a->element_size)) * ((u64)(size))));
		}
	}
	a->len = ((int)(new_len));
}
array array_reverse(array a) {
	if (a.len < 2) {
		return a;
	}
	array arr = ((array){.data = (voidptr)vcalloc((u64)(((u64)(a.cap)) * ((u64)(a.element_size)))),.offset = 0,.len = a.len,.cap = a.cap,.flags = 0,.element_size = a.element_size,});
	for (int i = 0; i < a.len; ++i) {
		array_set_unsafe(&arr, i, array_get_unsafe(a, (int)((int)(a.len - 1) - i)));
	}
	return arr;
}
void array_free(array* a) {
	if (ArrayFlags_has(&a->flags, ArrayFlags__nofree)) {
		return;
	}
	u8* mblock_ptr = ((u8*)((u64)(((u64)(a->data)) - ((u64)(a->offset)))));
	if (mblock_ptr != ((void*)0)) {
		_v_free(mblock_ptr);
	}
	{
		a->data = ((void*)0);
		a->offset = 0;
	}
}
void Array_string_free(Array_string* a) {
	for (int _t1 = 0; _t1 < a->len; ++_t1) {
		string* s = ((string*)a->data) + _t1;
		string_free(s);
	}
	array_free((((array*)(a))));
}
string Array_string_str(Array_string a) {
	int sb_len = 4;
	if (a.len > 0) {
		sb_len += ((string*)a.data)[0].len;
		sb_len *= a.len;
	}
	sb_len += 2;
	strings__Builder sb = strings__new_builder(sb_len);
	strings__Builder_write_u8(&sb, '[');
	for (int i = 0; i < a.len; ++i) {
		string val = ((string*)a.data)[i];
		strings__Builder_write_u8(&sb, '\'');
		strings__Builder_write_string(&sb, val);
		strings__Builder_write_u8(&sb, '\'');
		if (i < (int)(a.len - 1)) {
			strings__Builder_write_string(&sb, _S(", "));
		}
	}
	strings__Builder_write_u8(&sb, ']');
	string res = strings__Builder_str(&sb);
	strings__Builder_free(&sb);
	return res;
}
void u8_free(u8* data) {
	_v_free(data);
}
inline VV_LOC void panic_on_negative_len(int len) {
	if (len < 0) {
		panic_n(_S("negative .len:"), len);
		VUNREACHABLE();
	}
}
inline VV_LOC void panic_on_negative_cap(int cap) {
	if (cap < 0) {
		panic_n(_S("negative .cap:"), cap);
		VUNREACHABLE();
	}
}
VV_LOC array __new_array_noscan(int mylen, int cap, int elm_size) {
	return __new_array(mylen, cap, elm_size);
}
VV_LOC array __new_array_with_default_noscan(int mylen, int cap, int elm_size, voidptr val) {
	return __new_array_with_default(mylen, cap, elm_size, val);
}
VV_LOC array __new_array_with_multi_default_noscan(int mylen, int cap, int elm_size, voidptr val) {
	return __new_array_with_multi_default(mylen, cap, elm_size, val);
}
VV_LOC array __new_array_with_array_default_noscan(int mylen, int cap, int elm_size, array val, int depth) {
	return __new_array_with_array_default(mylen, cap, elm_size, val, depth);
}
void print_backtrace(void) {
	#if !defined(CUSTOM_DEFINE_no_backtrace)
	{
		#if defined(_VFREESTANDING)
		{
		}
		#elif defined(_VNATIVE)
		{
		}
		#elif defined(__TINYC__)
		{
		}
		#elif defined(CUSTOM_DEFINE_use_libbacktrace)
		{
		}
		#else
		{
			print_backtrace_skipping_top_frames(2);
		}
		#endif
	}
	#endif
}
bool print_backtrace_skipping_top_frames(int xskipframes) {
	#if defined(CUSTOM_DEFINE_no_backtrace)
	{
	}
	#else
	{
		int skipframes = (int)(xskipframes + 2);
		#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
		{
			return print_backtrace_skipping_top_frames_bsd(skipframes);
		}
		#elif defined(__linux__)
		{
		}
		#else
		{
		}
		#endif
	}
	#endif
	return false;
}
VV_LOC bool print_backtrace_skipping_top_frames_bsd(int skipframes) {
	#if defined(CUSTOM_DEFINE_no_backtrace)
	{
	}
	#else
	{
		#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__)
		{
			Array_fixed_voidptr_100 buffer = {0};
			int nr_ptrs = backtrace(&buffer[0], 100);
			if (nr_ptrs < 2) {
				eprintln(_S("C.backtrace returned less than 2 frames"));
				return false;
			}
			backtrace_symbols_fd(&buffer[skipframes], (int)(nr_ptrs - skipframes), 2);
		}
		#endif
		return true;
	}
	#endif
	return 0;
}
VV_LOC void v_segmentation_fault_handler(i32 signal_number) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		fprintf(stderr, "signal %d: segmentation fault\n", signal_number);
	}
	#endif
	#if defined(CUSTOM_DEFINE_use_libbacktrace)
	{
	}
	#else
	{
		print_backtrace();
	}
	#endif
	_v_exit((i32)(128 + signal_number));
	VUNREACHABLE();
}
VNORETURN void _v_exit(int code) {
	exit(code);
	VUNREACHABLE();
	while(1);
}
VNORETURN void panic_option_not_set(string s) {
	_v_panic(string__plus(string__plus(_S("option not set ("), s), _S(")")));
	VUNREACHABLE();
	while(1);
}
VNORETURN void panic_result_not_set(string s) {
	_v_panic(string__plus(string__plus(_S("result not set ("), s), _S(")")));
	VUNREACHABLE();
	while(1);
}
string vcurrent_hash(void) {
	return _S("8605599");
}
VNORETURN void _v_panic(string s) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		eprint(_S("V panic: "));
		eprintln(s);
		eprint(_S("v hash: "));
		eprintln(vcurrent_hash());
		flush_stdout();
		#if defined(_VNATIVE)
		{
			exit(1);
			VUNREACHABLE();
		}
		#elif defined(CUSTOM_DEFINE_exit_after_panic_message)
		{
		}
		#elif defined(CUSTOM_DEFINE_no_backtrace)
		{
		}
		#else
		{
			#if defined(CUSTOM_DEFINE_use_libbacktrace)
			{
			}
			#else
			{
				print_backtrace_skipping_top_frames(1);
			}
			#endif
			exit(1);
			VUNREACHABLE();
		}
		#endif
	}
	#endif
	exit(1);
	VUNREACHABLE();
	while(1);
}
VNORETURN void panic_n(string s, i64 number1) {
	_v_panic(string__plus(s, i64_str(number1)));
	VUNREACHABLE();
	while(1);
}
VNORETURN void panic_n2(string s, i64 number1, i64 number2) {
	_v_panic(string__plus(string__plus(string__plus(s, i64_str(number1)), _S(", ")), i64_str(number2)));
	VUNREACHABLE();
	while(1);
}
void eprintln(string s) {
	if (s.str == 0) {
		eprintln(_S("eprintln(NIL)"));
		return;
	}
	#if defined(_VFREESTANDING)
	{
	}
	#elif defined(__TARGET_IOS__)
	{
	}
	#else
	{
		flush_stdout();
		flush_stderr();
		_writeln_to_fd(2, s);
		flush_stderr();
	}
	#endif
}
void eprint(string s) {
	if (s.str == 0) {
		eprint(_S("eprint(NIL)"));
		return;
	}
	#if defined(_VFREESTANDING)
	{
	}
	#elif defined(__TARGET_IOS__)
	{
	}
	#else
	{
		flush_stdout();
		flush_stderr();
		_write_buf_to_fd(2, s.str, s.len);
		flush_stderr();
	}
	#endif
}
void flush_stdout(void) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		fflush(stdout);
	}
	#endif
}
void flush_stderr(void) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		fflush(stderr);
	}
	#endif
}
void print(string s) {
	#if defined(__ANDROID__) && !defined(__TERMUX__)
	{
	}
	#elif defined(__TARGET_IOS__)
	{
	}
	#elif defined(_VFREESTANDING)
	{
	}
	#else
	{
		_write_buf_to_fd(1, s.str, s.len);
	}
	#endif
}
void println(string s) {
	if (s.str == 0) {
		println(_S("println(NIL)"));
		return;
	}
	#if defined(__ANDROID__) && !defined(__TERMUX__)
	{
	}
	#elif defined(__TARGET_IOS__)
	{
	}
	#elif defined(_VFREESTANDING)
	{
	}
	#else
	{
		_writeln_to_fd(1, s);
	}
	#endif
}
VV_LOC void _writeln_to_fd(int fd, string s) {
	#if defined(CUSTOM_DEFINE_builtin_writeln_should_write_at_once)
	{
	}
	#else
	{
		u8 lf = ((u8)('\n'));
		_write_buf_to_fd(fd, s.str, s.len);
		_write_buf_to_fd(fd, &lf, 1);
	}
	#endif
}
VV_LOC void _write_buf_to_fd(int fd, u8* buf, int buf_len) {
	if (buf_len <= 0) {
		return;
	}
	u8* ptr = buf;
	isize remaining_bytes = ((isize)(buf_len));
	isize x = ((isize)(0));
	#if defined(_VFREESTANDING) || defined(__vinix__) || defined(CUSTOM_DEFINE_builtin_write_buf_to_fd_should_use_c_write)
	{
	}
	#else
	{
		voidptr stream = ((voidptr)(stdout));
		if (fd == 2) {
			stream = ((voidptr)(stderr));
		}
		{
			for (;;) {
				if (!(remaining_bytes > 0)) break;
				x = ((isize)(fwrite(ptr, 1, remaining_bytes, stream)));
				ptr += x;
				remaining_bytes -= x;
			}
		}
	}
	#endif
}
VNORETURN VV_LOC void _memory_panic(string fname, isize size) {
	v_memory_panic = true;
	eprint(fname);
	eprint(_S("("));
	#if defined(_VFREESTANDING) || defined(__vinix__)
	{
	}
	#else
	{
		fprintf(stderr, "%p", ((voidptr)(size)));
	}
	#endif
	if (size < 0) {
		eprint(_S(" < 0"));
	}
	eprintln(_S(")"));
	_v_panic(_S("memory allocation failure"));
	VUNREACHABLE();
	while(1);
}
u8* _v_malloc(isize n) {
	if (n < 0) {
		_memory_panic(_S("malloc"), n);
		VUNREACHABLE();
	} else if (n == 0) {
		return ((u8*)(((void*)0)));
	}
	u8* res = ((u8*)(((void*)0)));
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
	}
	#elif defined(_VFREESTANDING)
	{
	}
	#else
	{
		#if defined(_WIN32)
		{
		}
		#else
		{
			res = malloc(n);
		}
		#endif
	}
	#endif
	if (res == 0) {
		_memory_panic(_S("malloc"), n);
		VUNREACHABLE();
	}
	return res;
}
u8* malloc_noscan(isize n) {
	if (n < 0) {
		_memory_panic(_S("malloc_noscan"), n);
		VUNREACHABLE();
	}
	u8* res = ((u8*)(((void*)0)));
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
	}
	#elif defined(_VFREESTANDING)
	{
	}
	#else
	{
		#if defined(_WIN32)
		{
		}
		#else
		{
			res = malloc(n);
		}
		#endif
	}
	#endif
	if (res == 0) {
		_memory_panic(_S("malloc_noscan"), n);
		VUNREACHABLE();
	}
	return res;
}
inline VV_LOC u64 __at_least_one(u64 how_many) {
	if (how_many == 0U) {
		return 1U;
	}
	return how_many;
}
u8* v_realloc(u8* b, isize n) {
	u8* new_ptr = ((u8*)(((void*)0)));
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
	}
	#else
	{
		#if defined(_WIN32)
		{
		}
		#else
		{
			new_ptr = realloc(b, n);
		}
		#endif
	}
	#endif
	if (new_ptr == 0) {
		_memory_panic(_S("v_realloc"), n);
		VUNREACHABLE();
	}
	return new_ptr;
}
u8* realloc_data(u8* old_data, int old_size, int new_size) {
	u8* nptr = ((u8*)(((void*)0)));
	#if defined(_VGCBOEHM)
	{
	}
	#else
	{
		#if defined(_WIN32)
		{
		}
		#else
		{
			nptr = realloc(old_data, new_size);
		}
		#endif
	}
	#endif
	if (nptr == 0) {
		_memory_panic(_S("realloc_data"), ((isize)(new_size)));
		VUNREACHABLE();
	}
	return nptr;
}
u8* vcalloc(isize n) {
	if (n < 0) {
		_memory_panic(_S("vcalloc"), n);
		VUNREACHABLE();
	} else if (n == 0) {
		return ((u8*)(((void*)0)));
	}
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
	}
	#else
	{
		#if defined(_WIN32)
		{
		}
		#else
		{
			return calloc(1, n);
		}
		#endif
	}
	#endif
	return ((u8*)(((void*)0)));
}
u8* vcalloc_noscan(isize n) {
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
	}
	#else
	{
		return vcalloc(n);
	}
	#endif
	return ((u8*)(((void*)0)));
}
void _v_free(voidptr ptr) {
	if (ptr == 0) {
		return;
	}
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
	}
	#else
	{
		#if defined(_WIN32)
		{
		}
		#else
		{
			free(ptr);
		}
		#endif
	}
	#endif
}
voidptr memdup(voidptr src, isize sz) {
	if (sz == 0) {
		return vcalloc(1);
	}
	{
		u8* mem = _v_malloc(sz);
		return memcpy(mem, src, sz);
	}
	return 0;
}
voidptr memdup_noscan(voidptr src, isize sz) {
	if (sz == 0) {
		return vcalloc_noscan(1);
	}
	{
		u8* mem = malloc_noscan(sz);
		return memcpy(mem, src, sz);
	}
	return 0;
}
inline VV_LOC int v_fixed_index(int i, int len) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i >= len) {
			_v_panic(string__plus(string__plus(string__plus(string__plus(_S("fixed array index out of range (index: "), i64_str(((i64)(i)))), _S(", len: ")), i64_str(((i64)(len)))), _S(")")));
			VUNREACHABLE();
		}
	}
	#endif
	return i;
}
inline bool isnil(voidptr v) {
	return v == 0;
}
void VAssertMetaInfo_free(VAssertMetaInfo* ami) {
	{
		string_free(&ami->fpath);
		string_free(&ami->fn_name);
		string_free(&ami->src);
		string_free(&ami->op);
		string_free(&ami->llabel);
		string_free(&ami->rlabel);
		string_free(&ami->lvalue);
		string_free(&ami->rvalue);
		string_free(&ami->message);
	}
}
VV_LOC void builtin_init(void) {
}
inline int vstrlen(u8* s) {
	return strlen(((char*)(s)));
}
inline int vstrlen_char(char* s) {
	return strlen(s);
}
inline voidptr vmemcpy(voidptr dest, const voidptr const_src, isize n) {
	if (n == 0) {
		return dest;
	}
	{
		return memcpy(dest, const_src, n);
	}
	return 0;
}
inline voidptr vmemmove(voidptr dest, const voidptr const_src, isize n) {
	if (n == 0) {
		return dest;
	}
	{
		return memmove(dest, const_src, n);
	}
	return 0;
}
inline int vmemcmp(const voidptr const_s1, const voidptr const_s2, isize n) {
	if (n == 0) {
		return 0;
	}
	{
		return memcmp(const_s1, const_s2, n);
	}
	return 0;
}
inline voidptr vmemset(voidptr s, int c, isize n) {
	if (n == 0) {
		return s;
	}
	{
		return memset(s, c, n);
	}
	return 0;
}
#if !defined(_VNATIVE)
#endif
inline string f64_str(f64 x) {
	{
		strconv__Float64u f = ((strconv__Float64u){.f = x,});
		if (f.u == _const_strconv__double_minus_zero) {
			return _S("-0.0");
		}
		if (f.u == _const_strconv__double_plus_zero) {
			return _S("0.0");
		}
	}
	f64 abs_x = f64_abs(x);
	if (abs_x >= ((f64)(0.0001)) && abs_x < ((f64)(1.0e6))) {
		return strconv__f64_to_str_l(x);
	} else {
		return strconv__ftoa_64(x);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
inline string f64_strg(f64 x) {
	if (x == 0) {
		return _S("0.0");
	}
	f64 abs_x = f64_abs(x);
	if (abs_x >= ((f64)(0.0001)) && abs_x < ((f64)(1.0e6))) {
		return strconv__f64_to_str_l_with_dot(x);
	} else {
		return strconv__ftoa_64(x);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
inline string float_literal_str(float_literal d) {
	return f64_str(((f64)(d)));
}
inline string f32_str(f32 x) {
	{
		strconv__Float32u f = ((strconv__Float32u){.f = x,});
		if (f.u == _const_strconv__single_minus_zero) {
			return _S("-0.0");
		}
		if (f.u == _const_strconv__single_plus_zero) {
			return _S("0.0");
		}
	}
	f32 abs_x = f32_abs(x);
	if (abs_x >= ((f32)(0.0001)) && abs_x < ((f32)(1.0e6))) {
		return strconv__f32_to_str_l(x);
	} else {
		return strconv__ftoa_32(x);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
inline string f32_strg(f32 x) {
	if (x == 0) {
		return _S("0.0");
	}
	f32 abs_x = f32_abs(x);
	if (abs_x >= ((f32)(0.0001)) && abs_x < ((f32)(1.0e6))) {
		return strconv__f32_to_str_l_with_dot(x);
	} else {
		return strconv__ftoa_32(x);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
inline f32 f32_abs(f32 a) {
	f32 _t2; /* if prepend */
	if (a < 0) {
		_t2 = -a;
	} else {
		_t2 = a;
	}
	return _t2;
}
inline f64 f64_abs(f64 a) {
	f64 _t2; /* if prepend */
	if (a < 0) {
		_t2 = -a;
	} else {
		_t2 = a;
	}
	return _t2;
}
string ptr_str(voidptr ptr) {
	string buf1 = u64_hex(((u64)(ptr)));
	return buf1;
}
string isize_str(isize x) {
	return i64_str(((i64)(x)));
}
string usize_str(usize x) {
	return u64_str(((u64)(x)));
}
string char_str(char* cptr) {
	return u64_hex(((u64)(cptr)));
}
inline VV_LOC string int_str_l(int nn, int max) {
	{
		i64 n = ((i64)(nn));
		int d = 0;
		if (n == 0) {
			return _S("0");
		}
		bool is_neg = false;
		if (n < 0) {
			n = -n;
			is_neg = true;
		}
		int index = max;
		u8* buf = malloc_noscan((int)(max + 1));
		buf[index] = 0;
		index--;
		for (;;) {
			if (!(n > 0)) break;
			int n1 = ((int)((i64)(n / 100)));
			d = ((int)((((u32)((int)(((int)(n)) - ((int)(n1 * 100))))) << 1U)));
			n = n1;
			buf[index] = _const_digit_pairs.str[d];
			index--;
			d++;
			buf[index] = _const_digit_pairs.str[d];
			index--;
		}
		index++;
		if (d < 20) {
			index++;
		}
		if (is_neg) {
			index--;
			buf[index] = '-';
		}
		int diff = (int)(max - index);
		vmemmove(buf, ((voidptr)(buf + index)), (int)(diff + 1));
		return tos(buf, diff);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
string i8_str(i8 n) {
	return int_str_l(((int)(n)), 5);
}
string i16_str(i16 n) {
	return int_str_l(((int)(n)), 7);
}
string u16_str(u16 n) {
	return int_str_l(((int)(n)), 7);
}
string i32_str(i32 n) {
	return int_str_l(((int)(n)), 12);
}
string int_str(int n) {
	return int_str_l(n, 12);
}
inline string u32_str(u32 nn) {
	{
		u32 n = nn;
		u32 d = ((u32)(0U));
		if (n == 0U) {
			return _S("0");
		}
		int max = 12;
		u8* buf = malloc_noscan((int)(max + 1));
		int index = max;
		buf[index] = 0;
		index--;
		for (;;) {
			if (!(n > 0U)) break;
			u32 n1 = (u32)(n / ((u32)(100U)));
			d = ((((u32)(n - ((u32)(n1 * ((u32)(100U)))))) << ((u32)(1U))));
			n = n1;
			buf[index] = _const_digit_pairs.str[ d];
			index--;
			d++;
			buf[index] = _const_digit_pairs.str[ d];
			index--;
		}
		index++;
		if (d < ((u32)(20U))) {
			index++;
		}
		int diff = (int)(max - index);
		vmemmove(buf, ((voidptr)(buf + index)), (int)(diff + 1));
		return tos(buf, diff);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
inline string int_literal_str(int_literal n) {
	return i64_str(((i64)(n)));
}
inline string i64_str(i64 nn) {
	{
		i64 n = nn;
		i64 d = ((i64)(0));
		if (n == 0) {
			return _S("0");
		} else if (n == _const_min_i64) {
			return _S("-9223372036854775808");
		}
		int max = 20;
		u8* buf = malloc_noscan((int)(max + 1));
		bool is_neg = false;
		if (n < 0) {
			n = -n;
			is_neg = true;
		}
		int index = max;
		buf[index] = 0;
		index--;
		for (;;) {
			if (!(n > 0)) break;
			i64 n1 = (i64)(n / ((i64)(100)));
			d = ((((u32)((i64)(n - ((i64)(n1 * ((i64)(100))))))) << ((i64)(1))));
			n = n1;
			buf[index] = _const_digit_pairs.str[ d];
			index--;
			d++;
			buf[index] = _const_digit_pairs.str[ d];
			index--;
		}
		index++;
		if (d < ((i64)(20))) {
			index++;
		}
		if (is_neg) {
			index--;
			buf[index] = '-';
		}
		int diff = (int)(max - index);
		vmemmove(buf, ((voidptr)(buf + index)), (int)(diff + 1));
		return tos(buf, diff);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
inline string u64_str(u64 nn) {
	{
		u64 n = nn;
		u64 d = ((u64)(0U));
		if (n == 0U) {
			return _S("0");
		}
		int max = 20;
		u8* buf = malloc_noscan((int)(max + 1));
		int index = max;
		buf[index] = 0;
		index--;
		for (;;) {
			if (!(n > 0U)) break;
			u64 n1 = (u64)(n / 100U);
			d = ((((u64)(n - ((u64)(n1 * 100U)))) << 1U));
			n = n1;
			buf[index] = _const_digit_pairs.str[ d];
			index--;
			d++;
			buf[index] = _const_digit_pairs.str[ d];
			index--;
		}
		index++;
		if (d < 20U) {
			index++;
		}
		int diff = (int)(max - index);
		vmemmove(buf, ((voidptr)(buf + index)), (int)(diff + 1));
		return tos(buf, diff);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
string bool_str(bool b) {
	if (b) {
		return _S("true");
	}
	return _S("false");
}
inline VV_LOC string u64_to_hex_no_leading_zeros(u64 nn, u8 len) {
	u64 n = nn;
	Array_fixed_u8_17 buf = {0};
	buf[len] = 0;
	int i = 0;
	for (i = (u8)(len - 1); i >= 0; i--) {
		u8 d = ((u8)((n & 0xFU)));
		rune _t1; /* if prepend */
		if (d < 10) {
			_t1 = (rune)(d + '0');
		} else {
			_t1 = (u8)(d + 87);
		}
		buf[i] = _t1;
		n = (n >> 4U);
		if (n == 0U) {
			break;
		}
	}
	int res_len = (int)(len - i);
	return tos(memdup(&buf[i], (int)(res_len + 1)), res_len);
}
string u64_hex(u64 nn) {
	if (nn == 0U) {
		return _S("0");
	}
	return u64_to_hex_no_leading_zeros(nn, 16);
}
string voidptr_str(voidptr nn) {
	return string__plus(_S("0x"), u64_hex(((u64)(nn))));
}
string byteptr_str(byteptr nn) {
	return string__plus(_S("0x"), u64_hex(((u64)(nn))));
}
string charptr_str(charptr nn) {
	return string__plus(_S("0x"), u64_hex(((u64)(nn))));
}
string u8_str(u8 b) {
	return int_str_l(((int)(b)), 7);
}
string u8_ascii_str(u8 b) {
	string str = ((string){.str = malloc_noscan(2), .len = 1});
	{
		str.str[0] = b;
		str.str[1] = 0;
	}
	return str;
}
string Array_u8_bytestr(Array_u8 b) {
	{
		u8* buf = malloc_noscan((int)(b.len + 1));
		vmemcpy(buf, b.data, b.len);
		buf[b.len] = 0;
		return tos(buf, b.len);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
VV_LOC string _Atomic__int_str(int x) {
	return int_str(x);
}
inline VV_LOC bool fast_string_eq(string a, string b) {
	if (a.len != b.len) {
		return false;
	}
	{
		return memcmp(a.str, b.str, b.len) == 0;
	}
	return 0;
}
VV_LOC u64 map_hash_string(voidptr pkey) {
	string key = *((string*)(pkey));
	return wyhash(key.str, ((u64)(key.len)), 0U, ((u64*)(((voidptr)(_wyp)))));
}
VV_LOC u64 map_hash_int_1(voidptr pkey) {
	return wyhash64(*((u8*)(pkey)), 0U);
}
VV_LOC u64 map_hash_int_2(voidptr pkey) {
	return wyhash64(*((u16*)(pkey)), 0U);
}
VV_LOC u64 map_hash_int_4(voidptr pkey) {
	return wyhash64(*((u32*)(pkey)), 0U);
}
VV_LOC u64 map_hash_int_8(voidptr pkey) {
	return wyhash64(*((u64*)(pkey)), 0U);
}
VV_LOC void DenseArray_zeros_to_end(DenseArray* d) {
	u8* tmp_value = _v_malloc(d->value_bytes);
	u8* tmp_key = _v_malloc(d->key_bytes);
	int count = 0;
	for (int i = 0; i < d->len; ++i) {
		if (DenseArray_has_index(d, i)) {
			{
				if (count != i) {
					memcpy(tmp_key, DenseArray_key(d, count), d->key_bytes);
					memcpy(DenseArray_key(d, count), DenseArray_key(d, i), d->key_bytes);
					memcpy(DenseArray_key(d, i), tmp_key, d->key_bytes);
					memcpy(tmp_value, DenseArray_value(d, count), d->value_bytes);
					memcpy(DenseArray_value(d, count), DenseArray_value(d, i), d->value_bytes);
					memcpy(DenseArray_value(d, i), tmp_value, d->value_bytes);
				}
			}
			count++;
		}
	}
	{
		_v_free(tmp_value);
		_v_free(tmp_key);
		d->deletes = 0U;
		_v_free(d->all_deleted);
	}
	d->len = count;
	int old_cap = d->cap;
	int _t1; /* if prepend */
	if (count < 8) {
		_t1 = 8;
	} else {
		_t1 = count;
	}
	d->cap = _t1;
	{
		d->values = realloc_data(d->values, (int)(d->value_bytes * old_cap), (int)(d->value_bytes * d->cap));
		d->keys = realloc_data(d->keys, (int)(d->key_bytes * old_cap), (int)(d->key_bytes * d->cap));
	}
}
inline VV_LOC DenseArray new_dense_array(int key_bytes, int value_bytes) {
	int cap = 8;
	return ((DenseArray){
		.key_bytes = key_bytes,
		.value_bytes = value_bytes,
		.cap = cap,
		.len = 0,
		.deletes = 0U,
		.all_deleted = ((void*)0),
		.keys = _v_malloc(__at_least_one((u64)(((u64)(cap)) * ((u64)(key_bytes))))),
		.values = _v_malloc(__at_least_one((u64)(((u64)(cap)) * ((u64)(value_bytes))))),
	});
}
inline VV_LOC voidptr DenseArray_key(DenseArray* d, int i) {
	return ((voidptr)(d->keys + (int)(i * d->key_bytes)));
}
inline VV_LOC voidptr DenseArray_value(DenseArray* d, int i) {
	return ((voidptr)(d->values + (int)(i * d->value_bytes)));
}
inline VV_LOC bool DenseArray_has_index(DenseArray* d, int i) {
	return d->deletes == 0U || d->all_deleted[i] == 0;
}
inline VV_LOC int DenseArray_expand(DenseArray* d) {
	int old_cap = d->cap;
	int old_key_size = (int)(d->key_bytes * old_cap);
	int old_value_size = (int)(d->value_bytes * old_cap);
	if (d->cap == d->len) {
		d->cap += (d->cap >> 3);
		{
			d->keys = realloc_data(d->keys, old_key_size, (int)(d->key_bytes * d->cap));
			d->values = realloc_data(d->values, old_value_size, (int)(d->value_bytes * d->cap));
			if (d->deletes != 0U) {
				d->all_deleted = realloc_data(d->all_deleted, old_cap, d->cap);
				vmemset(((voidptr)(d->all_deleted + d->len)), 0, (int)(d->cap - d->len));
			}
		}
	}
	int push_index = d->len;
	{
		if (d->deletes != 0U) {
			d->all_deleted[push_index] = 0;
		}
	}
	d->len++;
	return push_index;
}
inline VV_LOC bool map_eq_string(voidptr a, voidptr b) {
	return fast_string_eq(*((string*)(a)), *((string*)(b)));
}
inline VV_LOC bool map_eq_int_1(voidptr a, voidptr b) {
	return *((u8*)(a)) == *((u8*)(b));
}
inline VV_LOC bool map_eq_int_2(voidptr a, voidptr b) {
	return *((u16*)(a)) == *((u16*)(b));
}
inline VV_LOC bool map_eq_int_4(voidptr a, voidptr b) {
	return *((u32*)(a)) == *((u32*)(b));
}
inline VV_LOC bool map_eq_int_8(voidptr a, voidptr b) {
	return *((u64*)(a)) == *((u64*)(b));
}
inline VV_LOC void map_clone_string(voidptr dest, voidptr pkey) {
	{
		string s = *((string*)(pkey));
		*((string*)(dest)) = string_clone(s);
	}
}
inline VV_LOC void map_clone_int_1(voidptr dest, voidptr pkey) {
	{
		*((u8*)(dest)) = *((u8*)(pkey));
	}
}
inline VV_LOC void map_clone_int_2(voidptr dest, voidptr pkey) {
	{
		*((u16*)(dest)) = *((u16*)(pkey));
	}
}
inline VV_LOC void map_clone_int_4(voidptr dest, voidptr pkey) {
	{
		*((u32*)(dest)) = *((u32*)(pkey));
	}
}
inline VV_LOC void map_clone_int_8(voidptr dest, voidptr pkey) {
	{
		*((u64*)(dest)) = *((u64*)(pkey));
	}
}
inline VV_LOC void map_free_string(voidptr pkey) {
	string_free(ADDR(string, (*((string*)(pkey)))));
}
inline VV_LOC void map_free_nop(voidptr _d1) {
}
VV_LOC map new_map(int key_bytes, int value_bytes, u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr )) {
	int metasize = ((int)((u32)(sizeof(u32) * ((int_literal)(_const_init_capicity + _const_extra_metas_inc)))));
	bool has_string_keys = _us32_lt(sizeof(voidptr),key_bytes);
	return ((map){
		.key_bytes = key_bytes,
		.value_bytes = value_bytes,
		.even_index = _const_init_even_index,
		.cached_hashbits = _const_max_cached_hashbits,
		.shift = _const_init_log_capicity,
		.key_values = new_dense_array(key_bytes, value_bytes),
		.metas = ((u32*)(vcalloc_noscan(metasize))),
		.extra_metas = _const_extra_metas_inc,
		.has_string_keys = has_string_keys,
		.hash_fn = (voidptr)hash_fn,
		.key_eq_fn = (voidptr)key_eq_fn,
		.clone_fn = (voidptr)clone_fn,
		.free_fn = (voidptr)free_fn,
		.len = 0,
	});
}
VV_LOC map new_map_init(u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ), int n, int key_bytes, int value_bytes, voidptr keys, voidptr values) {
	map out = new_map(key_bytes, value_bytes, (voidptr)hash_fn, (voidptr)key_eq_fn, (voidptr)clone_fn, (voidptr)free_fn);
	u8* pkey = ((u8*)(keys));
	u8* pval = ((u8*)(values));
	for (int _t1 = 0; _t1 < n; ++_t1) {
		{
			map_set(&out, pkey, pval);
			pkey = pkey + key_bytes;
			pval = pval + value_bytes;
		}
	}
	return out;
}
VV_LOC map new_map_update_init(map* update, int n, int key_bytes, int value_bytes, voidptr keys, voidptr values) {
	map out = map_clone(update);
	u8* pkey = ((u8*)(keys));
	u8* pval = ((u8*)(values));
	for (int _t1 = 0; _t1 < n; ++_t1) {
		{
			map_set(&out, pkey, pval);
			pkey = pkey + key_bytes;
			pval = pval + value_bytes;
		}
	}
	return out;
}
map map_move(map* m) {
	map r = *m;
	vmemset(m, 0, ((int)(sizeof(map))));
	return r;
}
void map_clear(map* m) {
	{
		if (m->key_values.all_deleted != 0) {
			_v_free(m->key_values.all_deleted);
			m->key_values.all_deleted = ((void*)0);
		}
		vmemset(m->key_values.keys, 0, (int)(m->key_values.key_bytes * m->key_values.cap));
		vmemset(m->metas, 0, (u32)(sizeof(u32) * ((u32)((u32)(m->even_index + 2U) + m->extra_metas))));
	}
	m->key_values.len = 0;
	m->key_values.deletes = 0U;
	m->even_index = _const_init_even_index;
	m->cached_hashbits = _const_max_cached_hashbits;
	m->shift = _const_init_log_capicity;
	m->len = 0;
}
inline VV_LOC multi_return_u32_u32 map_key_to_index(map* m, voidptr pkey) {
	u64 hash = m->hash_fn(pkey);
	u64 index = (hash & m->even_index);
	u64 meta = (((((hash >> m->shift)) & _const_hash_mask)) | _const_probe_inc);
	return (multi_return_u32_u32){.arg0=((u32)(index)), .arg1=((u32)(meta))};
}
inline VV_LOC multi_return_u32_u32 map_meta_less(map* m, u32 _index, u32 _metas) {
	u32 index = _index;
	u32 meta = _metas;
	for (;;) {
		if (!(meta < m->metas[index])) break;
		index += 2U;
		meta += _const_probe_inc;
	}
	return (multi_return_u32_u32){.arg0=index, .arg1=meta};
}
inline VV_LOC void map_meta_greater(map* m, u32 _index, u32 _metas, u32 kvi) {
	u32 meta = _metas;
	u32 index = _index;
	u32 kv_index = kvi;
	for (;;) {
		if (!(m->metas[index] != 0U)) break;
		if (meta > m->metas[index]) {
			{
				u32 tmp_meta = m->metas[index];
				m->metas[index] = meta;
				meta = tmp_meta;
				u32 tmp_index = m->metas[(u32)(index + 1U)];
				m->metas[(u32)(index + 1U)] = kv_index;
				kv_index = tmp_index;
			}
		}
		index += 2U;
		meta += _const_probe_inc;
	}
	{
		m->metas[index] = meta;
		m->metas[(u32)(index + 1U)] = kv_index;
	}
	u32 probe_count = (u32)(((meta >> _const_hashbits)) - 1U);
	map_ensure_extra_metas(m, probe_count);
}
inline VV_LOC void map_ensure_extra_metas(map* m, u32 probe_count) {
	if (((probe_count << 1U)) == m->extra_metas) {
		u32 size_of_u32 = sizeof(u32);
		u32 old_mem_size = ((u32)((u32)(m->even_index + 2U) + m->extra_metas));
		m->extra_metas += _const_extra_metas_inc;
		u32 mem_size = ((u32)((u32)(m->even_index + 2U) + m->extra_metas));
		{
			u8* x = realloc_data(((u8*)(m->metas)), ((int)((u32)(size_of_u32 * old_mem_size))), ((int)((u32)(size_of_u32 * mem_size))));
			m->metas = ((u32*)(x));
			vmemset(m->metas + mem_size - _const_extra_metas_inc, 0, ((int)((u32)(sizeof(u32) * _const_extra_metas_inc))));
		}
		if (probe_count == 252U) {
			_v_panic(_S("Probe overflow"));
			VUNREACHABLE();
		}
	}
}
VV_LOC void map_set(map* m, voidptr key, voidptr value) {
	f32 load_factor = (f32)(((f32)((((u32)(m->len)) << 1U))) / ((f32)(m->even_index)));
	if (load_factor > ((f32)(_const_max_load_factor))) {
		map_expand(m);
	}
	multi_return_u32_u32 mr_12308 = map_key_to_index(m, key);
	u32 index = mr_12308.arg0;
	u32 meta = mr_12308.arg1;
	multi_return_u32_u32 mr_12344 = map_meta_less(m, index, meta);
	index = mr_12344.arg0;
	meta = mr_12344.arg1;
	for (;;) {
		if (!(meta == m->metas[index])) break;
		int kv_index = ((int)(m->metas[(u32)(index + 1U)]));
		voidptr pkey = DenseArray_key(&m->key_values, kv_index);
		if (m->key_eq_fn(key, pkey)) {
			{
				voidptr pval = DenseArray_value(&m->key_values, kv_index);
				vmemcpy(pval, value, m->value_bytes);
			}
			return;
		}
		index += 2U;
		meta += _const_probe_inc;
	}
	int kv_index = DenseArray_expand(&m->key_values);
	{
		voidptr pkey = DenseArray_key(&m->key_values, kv_index);
		voidptr pvalue = DenseArray_value(&m->key_values, kv_index);
		m->clone_fn(pkey, key);
		vmemcpy(((u8*)(pvalue)), value, m->value_bytes);
	}
	map_meta_greater(m, index, meta, ((u32)(kv_index)));
	m->len++;
}
VV_LOC void map_expand(map* m) {
	u32 old_cap = m->even_index;
	m->even_index = (u32)(((((u32)(m->even_index + 2U)) << 1U)) - 2U);
	if (m->cached_hashbits == 0) {
		m->shift += _const_max_cached_hashbits;
		m->cached_hashbits = _const_max_cached_hashbits;
		map_rehash(m);
	} else {
		map_cached_rehash(m, old_cap);
		m->cached_hashbits--;
	}
}
VV_LOC void map_rehash(map* m) {
	u32 meta_bytes = (u32)(sizeof(u32) * ((u32)((u32)(m->even_index + 2U) + m->extra_metas)));
	map_reserve(m, meta_bytes);
}
void map_reserve(map* m, u32 meta_bytes) {
	{
		u8* x = v_realloc(((u8*)(m->metas)), ((int)(meta_bytes)));
		m->metas = ((u32*)(x));
		vmemset(m->metas, 0, ((int)(meta_bytes)));
	}
	for (int i = 0; i < m->key_values.len; i++) {
		if (!DenseArray_has_index(&m->key_values, i)) {
			continue;
		}
		voidptr pkey = DenseArray_key(&m->key_values, i);
		multi_return_u32_u32 mr_14105 = map_key_to_index(m, pkey);
		u32 index = mr_14105.arg0;
		u32 meta = mr_14105.arg1;
		multi_return_u32_u32 mr_14143 = map_meta_less(m, index, meta);
		index = mr_14143.arg0;
		meta = mr_14143.arg1;
		map_meta_greater(m, index, meta, ((u32)(i)));
	}
}
VV_LOC void map_cached_rehash(map* m, u32 old_cap) {
	u32* old_metas = m->metas;
	int metasize = ((int)((u32)(sizeof(u32) * ((u32)((u32)(m->even_index + 2U) + m->extra_metas)))));
	m->metas = ((u32*)(vcalloc(metasize)));
	u32 old_extra_metas = m->extra_metas;
	for (u32 i = ((u32)(0U)); i <= (u32)(old_cap + old_extra_metas); i += 2U) {
		if (old_metas[i] == 0U) {
			continue;
		}
		u32 old_meta = old_metas[i];
		u32 old_probe_count = (((u32)(((old_meta >> _const_hashbits)) - 1U)) << 1U);
		u32 old_index = (((u32)(i - old_probe_count)) & ((m->even_index >> 1U)));
		u32 index = (((old_index | ((old_meta << m->shift)))) & m->even_index);
		u32 meta = (((old_meta & _const_hash_mask)) | _const_probe_inc);
		multi_return_u32_u32 mr_14945 = map_meta_less(m, index, meta);
		index = mr_14945.arg0;
		meta = mr_14945.arg1;
		u32 kv_index = old_metas[(u32)(i + 1U)];
		map_meta_greater(m, index, meta, kv_index);
	}
	_v_free(old_metas);
}
VV_LOC voidptr map_get_and_set(map* m, voidptr key, voidptr zero) {
	for (;;) {
		multi_return_u32_u32 mr_15393 = map_key_to_index(m, key);
		u32 index = mr_15393.arg0;
		u32 meta = mr_15393.arg1;
		for (;;) {
			if (meta == m->metas[index]) {
				int kv_index = ((int)(m->metas[(u32)(index + 1U)]));
				voidptr pkey = DenseArray_key(&m->key_values, kv_index);
				if (m->key_eq_fn(key, pkey)) {
					voidptr pval = DenseArray_value(&m->key_values, kv_index);
					return ((u8*)(pval));
				}
			}
			index += 2U;
			meta += _const_probe_inc;
			if (meta > m->metas[index]) {
				break;
			}
		}
		map_set(m, key, zero);
	}
	return ((void*)0);
}
VV_LOC voidptr map_get(map* m, voidptr key, voidptr zero) {
	multi_return_u32_u32 mr_16120 = map_key_to_index(m, key);
	u32 index = mr_16120.arg0;
	u32 meta = mr_16120.arg1;
	for (;;) {
		if (meta == m->metas[index]) {
			int kv_index = ((int)(m->metas[(u32)(index + 1U)]));
			voidptr pkey = DenseArray_key(&m->key_values, kv_index);
			if (m->key_eq_fn(key, pkey)) {
				voidptr pval = DenseArray_value(&m->key_values, kv_index);
				return ((u8*)(pval));
			}
		}
		index += 2U;
		meta += _const_probe_inc;
		if (meta > m->metas[index]) {
			break;
		}
	}
	return zero;
}
VV_LOC voidptr map_get_check(map* m, voidptr key) {
	multi_return_u32_u32 mr_16785 = map_key_to_index(m, key);
	u32 index = mr_16785.arg0;
	u32 meta = mr_16785.arg1;
	for (;;) {
		if (meta == m->metas[index]) {
			int kv_index = ((int)(m->metas[(u32)(index + 1U)]));
			voidptr pkey = DenseArray_key(&m->key_values, kv_index);
			if (m->key_eq_fn(key, pkey)) {
				voidptr pval = DenseArray_value(&m->key_values, kv_index);
				return ((u8*)(pval));
			}
		}
		index += 2U;
		meta += _const_probe_inc;
		if (meta > m->metas[index]) {
			break;
		}
	}
	return 0;
}
VV_LOC bool map_exists(map* m, voidptr key) {
	multi_return_u32_u32 mr_17295 = map_key_to_index(m, key);
	u32 index = mr_17295.arg0;
	u32 meta = mr_17295.arg1;
	for (;;) {
		if (meta == m->metas[index]) {
			int kv_index = ((int)(m->metas[(u32)(index + 1U)]));
			voidptr pkey = DenseArray_key(&m->key_values, kv_index);
			if (m->key_eq_fn(key, pkey)) {
				return true;
			}
		}
		index += 2U;
		meta += _const_probe_inc;
		if (meta > m->metas[index]) {
			break;
		}
	}
	return false;
}
inline VV_LOC void DenseArray_delete(DenseArray* d, int i) {
	if (d->deletes == 0U) {
		d->all_deleted = vcalloc(d->cap);
	}
	d->deletes++;
	{
		d->all_deleted[i] = 1;
	}
}
void map_delete(map* m, voidptr key) {
	multi_return_u32_u32 mr_17933 = map_key_to_index(m, key);
	u32 index = mr_17933.arg0;
	u32 meta = mr_17933.arg1;
	multi_return_u32_u32 mr_17969 = map_meta_less(m, index, meta);
	index = mr_17969.arg0;
	meta = mr_17969.arg1;
	for (;;) {
		if (!(meta == m->metas[index])) break;
		int kv_index = ((int)(m->metas[(u32)(index + 1U)]));
		voidptr pkey = DenseArray_key(&m->key_values, kv_index);
		if (m->key_eq_fn(key, pkey)) {
			for (;;) {
				if (!(((m->metas[(u32)(index + 2U)] >> _const_hashbits)) > 1U)) break;
				{
					m->metas[index] = (u32)(m->metas[(u32)(index + 2U)] - _const_probe_inc);
					m->metas[(u32)(index + 1U)] = m->metas[(u32)(index + 3U)];
				}
				index += 2U;
			}
			m->len--;
			DenseArray_delete(&m->key_values, kv_index);
			{
				m->metas[index] = 0U;
				m->free_fn(pkey);
				vmemset(pkey, 0, m->key_bytes);
			}
			if (m->key_values.len <= 32) {
				return;
			}
			if (_us32_ge(m->key_values.deletes,((m->key_values.len >> 1)))) {
				DenseArray_zeros_to_end(&m->key_values);
				map_rehash(m);
			}
			return;
		}
		index += 2U;
		meta += _const_probe_inc;
	}
}
array map_keys(map* m) {
	array keys = __new_array(m->len, 0, m->key_bytes);
	u8* item = ((u8*)(keys.data));
	if (m->key_values.deletes == 0U) {
		for (int i = 0; i < m->key_values.len; i++) {
			{
				voidptr pkey = DenseArray_key(&m->key_values, i);
				m->clone_fn(item, pkey);
				item = item + m->key_bytes;
			}
		}
		return keys;
	}
	for (int i = 0; i < m->key_values.len; i++) {
		if (!DenseArray_has_index(&m->key_values, i)) {
			continue;
		}
		{
			voidptr pkey = DenseArray_key(&m->key_values, i);
			m->clone_fn(item, pkey);
			item = item + m->key_bytes;
		}
	}
	return keys;
}
array map_values(map* m) {
	array values = __new_array(m->len, 0, m->value_bytes);
	u8* item = ((u8*)(values.data));
	if (m->key_values.deletes == 0U) {
		vmemcpy(item, m->key_values.values, (int)(m->value_bytes * m->key_values.len));
		return values;
	}
	for (int i = 0; i < m->key_values.len; i++) {
		if (!DenseArray_has_index(&m->key_values, i)) {
			continue;
		}
		{
			voidptr pvalue = DenseArray_value(&m->key_values, i);
			vmemcpy(item, pvalue, m->value_bytes);
			item = item + m->value_bytes;
		}
	}
	return values;
}
VV_LOC DenseArray DenseArray_clone(DenseArray* d) {
	DenseArray res = ((DenseArray){
		.key_bytes = d->key_bytes,
		.value_bytes = d->value_bytes,
		.cap = d->cap,
		.len = d->len,
		.deletes = d->deletes,
		.all_deleted = ((void*)0),
		.keys = ((void*)0),
		.values = ((void*)0),
	});
	{
		if (d->deletes != 0U) {
			res.all_deleted = memdup(d->all_deleted, d->cap);
		}
		res.keys = memdup(d->keys, (int)(d->cap * d->key_bytes));
		res.values = memdup(d->values, (int)(d->cap * d->value_bytes));
	}
	return res;
}
map map_clone(map* m) {
	int metasize = ((int)((u32)(sizeof(u32) * ((u32)((u32)(m->even_index + 2U) + m->extra_metas)))));
	map res = ((map){
		.key_bytes = m->key_bytes,
		.value_bytes = m->value_bytes,
		.even_index = m->even_index,
		.cached_hashbits = m->cached_hashbits,
		.shift = m->shift,
		.key_values = DenseArray_clone(&m->key_values),
		.metas = ((u32*)(malloc_noscan(metasize))),
		.extra_metas = m->extra_metas,
		.has_string_keys = m->has_string_keys,
		.hash_fn = (voidptr)m->hash_fn,
		.key_eq_fn = (voidptr)m->key_eq_fn,
		.clone_fn = (voidptr)m->clone_fn,
		.free_fn = (voidptr)m->free_fn,
		.len = m->len,
	});
	vmemcpy(res.metas, m->metas, metasize);
	if (!m->has_string_keys) {
		return res;
	}
	for (int i = 0; i < m->key_values.len; ++i) {
		if (!DenseArray_has_index(&m->key_values, i)) {
			continue;
		}
		m->clone_fn(DenseArray_key(&res.key_values, i), DenseArray_key(&m->key_values, i));
	}
	return res;
}
void map_free(map* m) {
	_v_free(m->metas);
	{
		m->metas = ((void*)0);
	}
	if (m->key_values.deletes == 0U) {
		for (int i = 0; i < m->key_values.len; i++) {
			{
				voidptr pkey = DenseArray_key(&m->key_values, i);
				m->free_fn(pkey);
				vmemset(pkey, 0, m->key_bytes);
			}
		}
	} else {
		for (int i = 0; i < m->key_values.len; i++) {
			if (!DenseArray_has_index(&m->key_values, i)) {
				continue;
			}
			{
				voidptr pkey = DenseArray_key(&m->key_values, i);
				m->free_fn(pkey);
				vmemset(pkey, 0, m->key_bytes);
			}
		}
	}
	{
		if (m->key_values.all_deleted != ((void*)0)) {
			_v_free(m->key_values.all_deleted);
			m->key_values.all_deleted = ((void*)0);
		}
		if (m->key_values.keys != ((void*)0)) {
			_v_free(m->key_values.keys);
			m->key_values.keys = ((void*)0);
		}
		if (m->key_values.values != ((void*)0)) {
			_v_free(m->key_values.values);
			m->key_values.values = ((void*)0);
		}
		m->hash_fn = (voidptr)((void*)0);
		m->key_eq_fn = (voidptr)((void*)0);
		m->clone_fn = (voidptr)((void*)0);
		m->free_fn = (voidptr)((void*)0);
	}
}
void IError_free(IError* ie) {
	{
		IError* cie = ((IError*)(ie));
		_v_free(cie->_object);
	}
}
VV_LOC void _option_none(voidptr data, _option* option, int size) {
	{
		*option = ((_option){.state = 2,.err = _const_none__,});
		vmemcpy(((u8*)(&option->err)) + sizeof(IError), data, size);
	}
}
VV_LOC void _option_ok(voidptr data, _option* option, int size) {
	{
		*option = ((_option){.state = 0,.err = _const_none__,});
		vmemcpy(((u8*)(&option->err)) + sizeof(IError), data, size);
	}
}
VV_LOC void _option_clone(_option* current, _option* option, int size) {
	{
		*option = ((_option){.state = current->state,.err = current->err,});
		vmemcpy(((u8*)(&option->err)) + sizeof(IError), ((u8*)(&current->err)) + sizeof(IError), size);
	}
}
VV_LOC string None___str(None__ _d1) {
	return _S("none");
}
string none_str(none _d1) {
	return _S("none");
}
VV_LOC void _result_ok(voidptr data, _result* res, int size) {
	{
		*res = ((_result){.is_error = 0,.err = _const_none__,});
		vmemcpy(((u8*)(&res->err)) + sizeof(IError), data, size);
	}
}
string IError_str(IError err) {
	return ((err._typ == _IError_None___index)? (_S("none")) : (err._typ == _IError_Error_index)? (Error_msg(*(err._Error))) : (err._typ == _IError_MessageError_index)? (MessageError_str((*(err._MessageError)))) : (str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = charptr_vstring_literal(v_typeof_interface_IError( (err)._typ ))}}, {_S(": "), 0xfe10, {.d_s = IError_name_table[err._typ]._method_msg(err._object)}}, {_SLIT0, 0, { .d_c = 0 }}}))));
}
string Error_msg(Error err) {
	return _S("");
}
int Error_code(Error err) {
	return 0;
}
string MessageError_str(MessageError err) {
	if (err.code > 0) {
		return str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = err.msg}}, {_S("; code: "), 0xfe07, {.d_i32 = err.code}}, {_SLIT0, 0, { .d_c = 0 }}}));
	}
	return err.msg;
}
string MessageError_msg(MessageError err) {
	return err.msg;
}
int MessageError_code(MessageError err) {
	return err.code;
}
void MessageError_free(MessageError* err) {
	string_free(&err->msg);
}
inline IError _v_error(string message) {
	;
	return I_MessageError_to_Interface_IError(((MessageError*)memdup(&(MessageError){.msg =  string_clone_static(message),.code = 0,}, sizeof(MessageError))));
}
inline IError error_with_code(string message, int code) {
	;
	return I_MessageError_to_Interface_IError(((MessageError*)memdup(&(MessageError){.msg =  string_clone_static(message),.code = code,}, sizeof(MessageError))));
}
string rune_str(rune c) {
	return utf32_to_str(((u32)(c)));
}
string Array_rune_string(Array_rune ra) {
	strings__Builder sb = strings__new_builder(ra.len);
	strings__Builder_write_runes(&sb, ra);
	string res = strings__Builder_str(&sb);
	strings__Builder_free(&sb);
	return res;
}
rune rune_to_upper(rune c) {
	if (c < 0x80) {
		if (c >= 'a' && c <= 'z') {
			return (rune)(c - 32);
		}
		return c;
	}
	return rune_map_to(c, MapMode__to_upper);
}
rune rune_to_lower(rune c) {
	if (c < 0x80) {
		if (c >= 'A' && c <= 'Z') {
			return (rune)(c + 32);
		}
		return c;
	}
	return rune_map_to(c, MapMode__to_lower);
}
VV_LOC rune rune_map_to(rune c, MapMode mode) {
	int start = 0;
	int end = (int)(1264 / _const_rune_maps_columns_in_row);
	for (;;) {
		if (!(start < end)) break;
		int middle = (int)(((int)(start + end)) / 2);
		i32* cur_map = &_const_rune_maps[(int)(middle * _const_rune_maps_columns_in_row)];
		if (c >= ((u32)(*cur_map)) && c <= ((u32)(*(cur_map + 1)))) {
			i32 _t1; /* if prepend */
			if (mode == MapMode__to_upper || mode == MapMode__to_title) {
				_t1 = *(cur_map + 2);
			} else {
				_t1 = *(cur_map + 3);
			}
			i32 offset = _t1;
			if (offset == _const_rune_maps_ul) {
				rune cnt = (rune)(((rune)(c - *cur_map)) % 2);
				if (mode == MapMode__to_lower) {
					return (rune)((rune)(c + 1) - cnt);
				}
				return (rune)(c - cnt);
			} else if (offset == _const_rune_maps_utl) {
				rune cnt = (rune)(((rune)(c - *cur_map)) % 3);
				if (mode == MapMode__to_upper) {
					return (rune)(c - cnt);
				} else if (mode == MapMode__to_lower) {
					return (rune)((rune)(c + 2) - cnt);
				}
				return (rune)((rune)(c + 1) - cnt);
			}
			return (rune)(c + offset);
		}
		if (c < ((u32)(*cur_map))) {
			end = middle;
		} else {
			start = (int)(middle + 1);
		}
	}
	return c;
}
VV_LOC void mapnode_free(mapnode* n) {
	println(_S("TODO"));
}
void SortedMap_free(SortedMap* m) {
	if (m->root == ((void*)0)) {
		return;
	}
	mapnode_free(m->root);
}
Array_rune string_runes(string s) {
	Array_rune runes = __new_array_with_default(0, s.len, sizeof(rune), 0);
	for (int i = 0; i < s.len; i++) {
		int char_len = utf8_char_len(s.str[i]);
		if (char_len > 1) {
			int _t1; /* if prepend */
			if ((int)(s.len - 1) >= (int)(i + char_len)) {
				_t1 = (int)(i + char_len);
			} else {
				_t1 = s.len;
			}
			int end = _t1;
			string r = string_substr(s, i, end);
			array_push((array*)&runes, _MOV((rune[]){ string_utf32_code(r) }));
			i += (int)(char_len - 1);
		} else {
			array_push((array*)&runes, _MOV((rune[]){ s.str[i] }));
		}
	}
	return runes;
}
string cstring_to_vstring(const char* const_s) {
	return string_clone(tos2(((u8*)(const_s))));
}
string tos_clone(const u8* const_s) {
	return string_clone(tos2(((u8*)(const_s))));
}
string tos(u8* s, int len) {
	if (s == 0) {
		_v_panic(_S("tos(): nil string"));
		VUNREACHABLE();
	}
	return ((string){.str = s, .len = len});
}
string tos2(u8* s) {
	if (s == 0) {
		_v_panic(_S("tos2: nil string"));
		VUNREACHABLE();
	}
	return ((string){.str = s, .len = vstrlen(s)});
}
string tos3(char* s) {
	if (s == 0) {
		_v_panic(_S("tos3: nil string"));
		VUNREACHABLE();
	}
	return ((string){.str = ((u8*)(s)), .len = vstrlen_char(s)});
}
string tos4(u8* s) {
	if (s == 0) {
		return _S("");
	}
	return ((string){.str = s, .len = vstrlen(s)});
}
string tos5(char* s) {
	if (s == 0) {
		return _S("");
	}
	return ((string){.str = ((u8*)(s)), .len = vstrlen_char(s)});
}
string u8_vstring_with_len(u8* bp, int len) {
	return ((string){.str = bp, .len = len, .is_lit = 0});
}
bool string_is_pure_ascii(string s) {
	for (int i = 0; i < s.len; ++i) {
		if (s.str[ i] >= 0x80) {
			return false;
		}
	}
	return true;
}
inline VV_LOC string string_clone_static(string a) {
	return string_clone(a);
}
inline VV_LOC _option_string string_option_clone_static(string a) {
	_option_string _t2;
	_option_ok(&(string[]) { string_clone(a) }, (_option*)(&_t2), sizeof(string));
	return _t2;
}
string string_clone(string a) {
	if (a.len <= 0) {
		return _S("");
	}
	string b = ((string){.str = malloc_noscan((int)(a.len + 1)), .len = a.len});
	{
		vmemcpy(b.str, a.str, a.len);
		b.str[a.len] = 0;
	}
	return b;
}
string string_replace(string s, string rep, string with) {
	bool string_replace_defer_0 = false;
	int pidxs_cap;
	int* pidxs;
	if (s.len == 0 || rep.len == 0 || rep.len > s.len) {
		return string_clone(s);
	}
	if (!string_contains(s, rep)) {
		return string_clone(s);
	}
	int pidxs_len = 0;
	pidxs_cap = (int)(s.len / rep.len);
	Array_fixed_int_10 stack_idxs = {0};
	pidxs = &stack_idxs[0];
	if (pidxs_cap > _const_replace_stack_buffer_size) {
		pidxs = ((int*)(_v_malloc((int)(((int)(sizeof(int))) * pidxs_cap))));
	}
	string_replace_defer_0 = true;
	int idx = 0;
	for (;;) {
		idx = string_index_after_(s, rep, idx);
		if (idx == -1) {
			break;
		}
		{
			pidxs[pidxs_len] = idx;
			pidxs_len++;
		}
		idx += rep.len;
	}
	if (pidxs_len == 0) {
		string _t3 = string_clone(s);
		if (string_replace_defer_0) {
			if (pidxs_cap > _const_replace_stack_buffer_size) {
				_v_free(pidxs);
			}
		}
		return _t3;
	}
	int new_len = (int)(s.len + (int)(pidxs_len * ((int)(with.len - rep.len))));
	u8* b = malloc_noscan((int)(new_len + 1));
	int b_i = 0;
	int s_idx = 0;
	for (int j = 0; j < pidxs_len; ++j) {
		int rep_pos = pidxs[j];
		int before_len = (int)(rep_pos - s_idx);
		vmemcpy(&b[b_i], &s.str[ s_idx], before_len);
		b_i += before_len;
		s_idx = (int)(rep_pos + rep.len);
		vmemcpy(&b[b_i], &with.str[ 0], with.len);
		b_i += with.len;
	}
	if (s_idx < s.len) {
		vmemcpy(&b[b_i], &s.str[ s_idx], (int)(s.len - s_idx));
	}
	{
		b[new_len] = 0;
		string _t4 = tos(b, new_len);
		if (string_replace_defer_0) {
			if (pidxs_cap > _const_replace_stack_buffer_size) {
				_v_free(pidxs);
			}
		}
		return _t4;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
VV_LOC bool string__eq(string s, string a) {
	if (s.str == 0) {
		_v_panic(_S("string.eq(): nil string"));
		VUNREACHABLE();
	}
	if (s.len != a.len) {
		return false;
	}
	{
		return vmemcmp(s.str, a.str, a.len) == 0;
	}
	return 0;
}
VV_LOC bool string__lt(string s, string a) {
	for (int i = 0; i < s.len; ++i) {
		if (i >= a.len || s.str[ i] > a.str[ i]) {
			return false;
		} else if (s.str[ i] < a.str[ i]) {
			return true;
		}
	}
	if (s.len < a.len) {
		return true;
	}
	return false;
}
VV_LOC string string__plus(string s, string a) {
	int new_len = (int)(a.len + s.len);
	string res = ((string){.str = malloc_noscan((int)(new_len + 1)), .len = new_len});
	{
		vmemcpy(res.str, s.str, s.len);
		vmemcpy(res.str + s.len, a.str, a.len);
	}
	{
		res.str[new_len] = 0;
	}
	return res;
}
inline Array_string string_split(string s, string delim) {
	return string_split_nth(s, delim, 0);
}
Array_string string_split_nth(string s, string delim, int nth) {
	bool string_split_nth_defer_0 = false;
	Array_string res;
	res = __new_array_with_default(0, 0, sizeof(string), 0);
	ArrayFlags_set(&res.flags, ArrayFlags__noslices);
	string_split_nth_defer_0 = true;
	switch (delim.len) {
		case 0: {
			for (int i = 0; i < s.len; ++i) {
				u8 ch = s.str[i];
				if (nth > 0 && res.len == (int)(nth - 1)) {
					array_push((array*)&res, _MOV((string[]){ string_substr(s, i, 2147483647) }));
					break;
				}
				array_push((array*)&res, _MOV((string[]){ u8_ascii_str(ch) }));
			}
			break;
		}
		case 1: {
			u8 delim_byte = delim.str[ 0];
			int start = 0;
			for (int i = 0; i < s.len; ++i) {
				u8 ch = s.str[i];
				if (ch == delim_byte) {
					if (nth > 0 && res.len == (int)(nth - 1)) {
						break;
					}
					array_push((array*)&res, _MOV((string[]){ string_substr(s, start, i) }));
					start = (int)(i + 1);
				}
			}
			if (nth < 1 || res.len < nth) {
				array_push((array*)&res, _MOV((string[]){ string_substr(s, start, 2147483647) }));
			}
			break;
		}
		default: {
			{
				int start = 0;
				for (int i = 0; (int)(i + delim.len) <= s.len; ) {
					if (string__eq(string_substr_unsafe(s, i, (int)(i + delim.len)), delim)) {
						if (nth > 0 && res.len == (int)(nth - 1)) {
							break;
						}
						array_push((array*)&res, _MOV((string[]){ string_substr(s, start, i) }));
						i += delim.len;
						start = i;
					} else {
						i++;
					}
				}
				if (nth < 1 || res.len < nth) {
					array_push((array*)&res, _MOV((string[]){ string_substr(s, start, 2147483647) }));
				}
				break;
			}
		}
	}
	
	Array_string _t7 = res;
	if (string_split_nth_defer_0) {
		ArrayFlags_clear(&res.flags, ArrayFlags__noslices);
	}
	return _t7;
}
string string_substr(string s, int start, int _end) {
	int _t1; /* if prepend */
	if (_end == _const_max_int) {
		_t1 = s.len;
	} else {
		_t1 = _end;
	}
	int end = _t1;
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (start > end || start > s.len || end > s.len || start < 0 || end < 0) {
			_v_panic(string__plus(string__plus(string__plus(string__plus(string__plus(string__plus(string__plus(_S("substr("), int_str(start)), _S(", ")), int_str(end)), _S(") out of bounds (len=")), int_str(s.len)), _S(") s=")), s));
			VUNREACHABLE();
		}
	}
	#endif
	int len = (int)(end - start);
	if (len == s.len) {
		return string_clone(s);
	}
	string res = ((string){.str = malloc_noscan((int)(len + 1)), .len = len});
	{
		vmemcpy(res.str, s.str + start, len);
		res.str[len] = 0;
	}
	return res;
}
string string_substr_unsafe(string s, int start, int _end) {
	int _t1; /* if prepend */
	if (_end == 2147483647) {
		_t1 = s.len;
	} else {
		_t1 = _end;
	}
	int end = _t1;
	int len = (int)(end - start);
	if (len == s.len) {
		return s;
	}
	return ((string){.str = s.str + start, .len = len});
}
_result_string string_substr_with_check(string s, int start, int _end) {
	int _t1; /* if prepend */
	if (_end == _const_max_int) {
		_t1 = s.len;
	} else {
		_t1 = _end;
	}
	int end = _t1;
	if (start > end || start > s.len || end > s.len || start < 0 || end < 0) {
		return (_result_string){ .is_error=true, .err=_v_error(string__plus(string__plus(string__plus(string__plus(string__plus(string__plus(_S("substr("), int_str(start)), _S(", ")), int_str(end)), _S(") out of bounds (len=")), int_str(s.len)), _S(")"))), .data={E_STRUCT} };
	}
	int len = (int)(end - start);
	if (len == s.len) {
		_result_string _t3 = {0};
		_result_ok(&(string[]) { string_clone(s) }, (_result*)(&_t3), sizeof(string));
		return _t3;
	}
	string res = ((string){.str = malloc_noscan((int)(len + 1)), .len = len});
	{
		vmemcpy(res.str, s.str + start, len);
		res.str[len] = 0;
	}
	_result_string _t4 = {0};
	_result_ok(&(string[]) { res }, (_result*)(&_t4), sizeof(string));
	return _t4;
}
string string_substr_ni(string s, int _start, int _end) {
	int start = _start;
	int _t1; /* if prepend */
	if (_end == _const_max_int) {
		_t1 = s.len;
	} else {
		_t1 = _end;
	}
	int end = _t1;
	if (start < 0) {
		start = (int)(s.len + start);
		if (start < 0) {
			start = 0;
		}
	}
	if (end < 0) {
		end = (int)(s.len + end);
		if (end < 0) {
			end = 0;
		}
	}
	if (end >= s.len) {
		end = s.len;
	}
	if (start > s.len || end < start) {
		return _S("");
	}
	int len = (int)(end - start);
	string res = ((string){.str = malloc_noscan((int)(len + 1)), .len = len});
	{
		vmemcpy(res.str, s.str + start, len);
		res.str[len] = 0;
	}
	return res;
}
VV_LOC int string_index_(string s, string p) {
	if (p.len > s.len || p.len == 0) {
		return -1;
	}
	if (p.len > 2) {
		return string_index_kmp(s, p);
	}
	int i = 0;
	for (;;) {
		if (!(i < s.len)) break;
		int j = 0;
		for (;;) {
			if (!(j < p.len && s.str[(int)(i + j)] == p.str[j])) break;
			j++;
		}
		if (j == p.len) {
			return i;
		}
		i++;
	}
	return -1;
}
VV_LOC int string_index_kmp(string s, string p) {
	bool string_index_kmp_defer_0 = false;
	int* p_prefixes;
	if (p.len > s.len) {
		return -1;
	}
	Array_fixed_int_20 stack_prefixes = {0};
	p_prefixes = &stack_prefixes[0];
	if (p.len > _const_kmp_stack_buffer_size) {
		p_prefixes = ((int*)(vcalloc((int)(p.len * ((int)(sizeof(int)))))));
	}
	string_index_kmp_defer_0 = true;
	int j = 0;
	for (int i = 1; i < p.len; i++) {
		for (;;) {
			if (!(p.str[j] != p.str[i] && j > 0)) break;
			j = p_prefixes[(int)(j - 1)];
		}
		if (p.str[j] == p.str[i]) {
			j++;
		}
		{
			p_prefixes[i] = j;
		}
	}
	j = 0;
	for (int i = 0; i < s.len; ++i) {
		for (;;) {
			if (!(p.str[j] != s.str[i] && j > 0)) break;
			j = p_prefixes[(int)(j - 1)];
		}
		if (p.str[j] == s.str[i]) {
			j++;
		}
		if (j == p.len) {
			int _t2 = (int)((int)(i - p.len) + 1);
			if (string_index_kmp_defer_0) {
				if (p.len > _const_kmp_stack_buffer_size) {
					_v_free(p_prefixes);
				}
			}
			return _t2;
		}
	}
	int _t3 = -1;
	if (string_index_kmp_defer_0) {
		if (p.len > _const_kmp_stack_buffer_size) {
			_v_free(p_prefixes);
		}
	}
	return _t3;
}
VV_LOC int string_index_last_(string s, string p) {
	if (p.len > s.len || p.len == 0) {
		return -1;
	}
	int i = (int)(s.len - p.len);
	for (;;) {
		if (!(i >= 0)) break;
		int j = 0;
		for (;;) {
			if (!(j < p.len && s.str[(int)(i + j)] == p.str[j])) break;
			j++;
		}
		if (j == p.len) {
			return i;
		}
		i--;
	}
	return -1;
}
int string_index_after_(string s, string p, int start) {
	if (p.len > s.len) {
		return -1;
	}
	int strt = start;
	if (start < 0) {
		strt = 0;
	}
	if (start >= s.len) {
		return -1;
	}
	int i = strt;
	for (;;) {
		if (!(i < s.len)) break;
		int j = 0;
		int ii = i;
		for (;;) {
			if (!(j < p.len && s.str[ii] == p.str[j])) break;
			j++;
			ii++;
		}
		if (j == p.len) {
			return i;
		}
		i++;
	}
	return -1;
}
bool string_contains_u8(string s, u8 x) {
	for (int _t1 = 0; _t1 < s.len; ++_t1) {
		u8 c = s.str[_t1];
		if (x == c) {
			return true;
		}
	}
	return false;
}
bool string_contains(string s, string substr) {
	if (substr.len == 0) {
		return true;
	}
	if (substr.len == 1) {
		return string_contains_u8(s, substr.str[0]);
	}
	return string_index_(s, substr) != -1;
}
bool string_starts_with(string s, string p) {
	if (p.len > s.len) {
		return false;
	} else if (vmemcmp(s.str, p.str, p.len) == 0) {
		return true;
	}
	return false;
}
bool string_ends_with(string s, string p) {
	if (p.len > s.len) {
		return false;
	} else if (vmemcmp(s.str + s.len - p.len, p.str, p.len) == 0) {
		return true;
	}
	return false;
}
string string_to_lower_ascii(string s) {
	{
		u8* b = malloc_noscan((int)(s.len + 1));
		for (int i = 0; i < s.len; ++i) {
			if (s.str[i] >= 'A' && s.str[i] <= 'Z') {
				b[i] = (u8)(s.str[i] + 32);
			} else {
				b[i] = s.str[i];
			}
		}
		b[s.len] = 0;
		return tos(b, s.len);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
string string_to_lower(string s) {
	if (string_is_pure_ascii(s)) {
		return string_to_lower_ascii(s);
	}
	Array_rune runes = string_runes(s);
	for (int i = 0; i < runes.len; ++i) {
		((rune*)runes.data)[i] = rune_to_lower(((rune*)runes.data)[i]);
	}
	return Array_rune_string(runes);
}
string string_to_upper_ascii(string s) {
	{
		u8* b = malloc_noscan((int)(s.len + 1));
		for (int i = 0; i < s.len; ++i) {
			if (s.str[i] >= 'a' && s.str[i] <= 'z') {
				b[i] = (u8)(s.str[i] - 32);
			} else {
				b[i] = s.str[i];
			}
		}
		b[s.len] = 0;
		return tos(b, s.len);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
string string_to_upper(string s) {
	if (string_is_pure_ascii(s)) {
		return string_to_upper_ascii(s);
	}
	Array_rune runes = string_runes(s);
	for (int i = 0; i < runes.len; ++i) {
		((rune*)runes.data)[i] = rune_to_upper(((rune*)runes.data)[i]);
	}
	return Array_rune_string(runes);
}
inline string string_str(string s) {
	return string_clone(s);
}
VV_LOC u8 string_at(string s, int idx) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (idx < 0 || idx >= s.len) {
			panic_n2(_S("string index out of range(idx,s.len):"), idx, s.len);
			VUNREACHABLE();
		}
	}
	#endif
	return s.str[idx];
}
VV_LOC _option_u8 string_at_with_check(string s, int idx) {
	if (idx < 0 || idx >= s.len) {
		return (_option_u8){ .state=2, .err=_const_none__, .data={E_STRUCT} };
	}
	{
		_option_u8 _t2;
		_option_ok(&(u8[]) { s.str[idx] }, (_option*)(&_t2), sizeof(u8));
		return _t2;
	}
	return (_option_u8){.state=2, .err=_const_none__, .data={E_STRUCT}};
}
void string_free(string* s) {
	if (s->is_lit == -98761234) {
		u8* double_free_msg = ((u8*)("double string.free() detected\n"));
		int double_free_msg_len = vstrlen(double_free_msg);
		#if defined(_VFREESTANDING)
		{
		}
		#else
		{
			_write_buf_to_fd(1, double_free_msg, double_free_msg_len);
		}
		#endif
		return;
	}
	if (s->is_lit == 1 || s->str == 0) {
		return;
	}
	{
		_v_free(s->str);
		s->str = ((void*)0);
	}
	s->is_lit = -98761234;
}
string string_all_after_last(string s, string sub) {
	int pos = string_index_last_(s, sub);
	if (pos == -1) {
		return string_clone(s);
	}
	return string_substr(s, (int)(pos + sub.len), 2147483647);
}
string string_repeat(string s, int count) {
	if (count <= 0) {
		return _S("");
	} else if (count == 1) {
		return string_clone(s);
	}
	u8* ret = malloc_noscan((int)((int)(s.len * count) + 1));
	for (int i = 0; i < count; ++i) {
		vmemcpy(ret + (int)(i * s.len), s.str, s.len);
	}
	int new_len = (int)(s.len * count);
	{
		ret[new_len] = 0;
	}
	return u8_vstring_with_len(ret, new_len);
}
string byteptr_vstring(byteptr bp) {
	return ((string){.str = bp, .len = vstrlen(bp)});
}
string byteptr_vstring_with_len(byteptr bp, int len) {
	return ((string){.str = bp, .len = len, .is_lit = 0});
}
string charptr_vstring(charptr cp) {
	return ((string){.str = ((byteptr)(cp)), .len = vstrlen_char(cp), .is_lit = 0});
}
string charptr_vstring_with_len(charptr cp, int len) {
	return ((string){.str = ((byteptr)(cp)), .len = len, .is_lit = 0});
}
string byteptr_vstring_literal(byteptr bp) {
	return ((string){.str = bp, .len = vstrlen(bp), .is_lit = 1});
}
string charptr_vstring_literal(charptr cp) {
	return ((string){.str = ((byteptr)(cp)), .len = vstrlen_char(cp), .is_lit = 1});
}
string StrIntpType_str(StrIntpType x) {
	string _t2 = (string){.str=(byteptr)"", .is_lit=1};
	switch (x) {
		case StrIntpType__si_no_str: {
			_t2 = _S("no_str");
			break;
		}
		case StrIntpType__si_c: {
			_t2 = _S("c");
			break;
		}
		case StrIntpType__si_u8: {
			_t2 = _S("u8");
			break;
		}
		case StrIntpType__si_i8: {
			_t2 = _S("i8");
			break;
		}
		case StrIntpType__si_u16: {
			_t2 = _S("u16");
			break;
		}
		case StrIntpType__si_i16: {
			_t2 = _S("i16");
			break;
		}
		case StrIntpType__si_u32: {
			_t2 = _S("u32");
			break;
		}
		case StrIntpType__si_i32: {
			_t2 = _S("i32");
			break;
		}
		case StrIntpType__si_u64: {
			_t2 = _S("u64");
			break;
		}
		case StrIntpType__si_i64: {
			_t2 = _S("i64");
			break;
		}
		case StrIntpType__si_f32: {
			_t2 = _S("f32");
			break;
		}
		case StrIntpType__si_f64: {
			_t2 = _S("f64");
			break;
		}
		case StrIntpType__si_g32: {
			_t2 = _S("f32");
			break;
		}
		case StrIntpType__si_g64: {
			_t2 = _S("f64");
			break;
		}
		case StrIntpType__si_e32: {
			_t2 = _S("f32");
			break;
		}
		case StrIntpType__si_e64: {
			_t2 = _S("f64");
			break;
		}
		case StrIntpType__si_s: {
			_t2 = _S("s");
			break;
		}
		case StrIntpType__si_p: {
			_t2 = _S("p");
			break;
		}
		case StrIntpType__si_r: {
			_t2 = _S("r");
			break;
		}
		case StrIntpType__si_vp: {
			_t2 = _S("vp");
			break;
		}
	}
	return _t2;
}
inline VV_LOC f32 fabs32(f32 x) {
	f32 _t2; /* if prepend */
	if (x < 0) {
		_t2 = -x;
	} else {
		_t2 = x;
	}
	return _t2;
}
inline VV_LOC f64 fabs64(f64 x) {
	f64 _t2; /* if prepend */
	if (x < 0) {
		_t2 = -x;
	} else {
		_t2 = x;
	}
	return _t2;
}
inline VV_LOC u64 abs64(i64 x) {
	u64 _t2; /* if prepend */
	if (x < 0) {
		_t2 = ((u64)(-x));
	} else {
		_t2 = ((u64)(x));
	}
	return _t2;
}
VV_LOC void StrIntpData_process_str_intp_data(StrIntpData* data, strings__Builder* sb) {
	u32 x = data->fmt;
	StrIntpType typ = ((StrIntpType)((x & 0x1FU)));
	int align = ((int)((((x >> 5U)) & 0x01U)));
	bool upper_case = ((((x >> 7U)) & 0x01U)) > 0U;
	int sign = ((int)((((x >> 8U)) & 0x01U)));
	int precision = ((int)((((x >> 9U)) & 0x7FU)));
	bool tail_zeros = ((((x >> 16U)) & 0x01U)) > 0U;
	int width = ((int)(((i16)((((x >> 17U)) & 0x3FFU)))));
	int base = (((int)((x >> 27U))) & 0xF);
	u8 fmt_pad_ch = ((u8)((((x >> 31U)) & 0xFFU)));
	if (typ == StrIntpType__si_no_str) {
		return;
	}
	if (base > 0) {
		base += 2;
	}
	u8 pad_ch = ((u8)(' '));
	if (fmt_pad_ch > 0) {
		pad_ch = '0';
	}
	int len0_set = (width > 0 ? (width) : (-1));
	int len1_set = (precision == 0x7F ? (-1) : (precision));
	bool sign_set = sign == 1;
	strconv__BF_param bf = ((strconv__BF_param){
		.pad_ch = pad_ch,
		.len0 = len0_set,
		.len1 = len1_set,
		.positive = true,
		.sign_flag = sign_set,
		.align = strconv__Align_text__left,
		.rm_tail_zero = tail_zeros,
	});
	if (fmt_pad_ch == 0 || pad_ch == '0') {
		switch (align) {
			case 0: {
				bf.align = strconv__Align_text__left;
				break;
			}
			case 1: {
				bf.align = strconv__Align_text__right;
				break;
			}
			default: {
				{
					bf.align = strconv__Align_text__left;
					break;
				}
			}
		}
		
	} else {
		bf.align = strconv__Align_text__right;
	}
	{
		if (typ == StrIntpType__si_s) {
			if (upper_case) {
				string s = string_to_upper(data->d.d_s);
				if (width == 0) {
					strings__Builder_write_string(sb, s);
				} else {
					strconv__format_str_sb(s, bf, sb);
				}
				string_free(&s);
			} else {
				if (width == 0) {
					strings__Builder_write_string(sb, data->d.d_s);
				} else {
					strconv__format_str_sb(data->d.d_s, bf, sb);
				}
			}
			return;
		}
		if (typ == StrIntpType__si_r) {
			if (width > 0) {
				if (upper_case) {
					string s = string_to_upper(data->d.d_s);
					for (int _t1 = 1; _t1 < ((int)(1 + ((width > 0 ? (width) : (0))))); ++_t1) {
						strings__Builder_write_string(sb, s);
					}
					string_free(&s);
				} else {
					for (int _t2 = 1; _t2 < ((int)(1 + ((width > 0 ? (width) : (0))))); ++_t2) {
						strings__Builder_write_string(sb, data->d.d_s);
					}
				}
			}
			return;
		}
		if (typ == StrIntpType__si_i8 || typ == StrIntpType__si_i16 || typ == StrIntpType__si_i32 || typ == StrIntpType__si_i64) {
			i64 d = data->d.d_i64;
			if (typ == StrIntpType__si_i8) {
				d = ((i64)(data->d.d_i8));
			} else if (typ == StrIntpType__si_i16) {
				d = ((i64)(data->d.d_i16));
			} else if (typ == StrIntpType__si_i32) {
				d = ((i64)(data->d.d_i32));
			}
			if (base == 0) {
				if (width == 0) {
					string d_str = i64_str(d);
					strings__Builder_write_string(sb, d_str);
					string_free(&d_str);
					return;
				}
				if (d < 0) {
					bf.positive = false;
				}
				strconv__format_dec_sb(abs64(d), bf, sb);
			} else {
				if (base == 3) {
					base = 2;
				}
				i64 absd = d;
				bool write_minus = false;
				if (d < 0 && pad_ch != ' ') {
					absd = -d;
					write_minus = true;
				}
				string hx = strconv__format_int(absd, base);
				if (upper_case) {
					string tmp = hx;
					hx = string_to_upper(hx);
					string_free(&tmp);
				}
				if (write_minus) {
					strings__Builder_write_u8(sb, '-');
					bf.len0--;
				}
				if (width == 0) {
					strings__Builder_write_string(sb, hx);
				} else {
					strconv__format_str_sb(hx, bf, sb);
				}
				string_free(&hx);
			}
			return;
		}
		if (typ == StrIntpType__si_u8 || typ == StrIntpType__si_u16 || typ == StrIntpType__si_u32 || typ == StrIntpType__si_u64) {
			u64 d = data->d.d_u64;
			if (typ == StrIntpType__si_u8) {
				d = ((u64)(data->d.d_u8));
			} else if (typ == StrIntpType__si_u16) {
				d = ((u64)(data->d.d_u16));
			} else if (typ == StrIntpType__si_u32) {
				d = ((u64)(data->d.d_u32));
			}
			if (base == 0) {
				if (width == 0) {
					string d_str = u64_str(d);
					strings__Builder_write_string(sb, d_str);
					string_free(&d_str);
					return;
				}
				strconv__format_dec_sb(d, bf, sb);
			} else {
				if (base == 3) {
					base = 2;
				}
				string hx = strconv__format_uint(d, base);
				if (upper_case) {
					string tmp = hx;
					hx = string_to_upper(hx);
					string_free(&tmp);
				}
				if (width == 0) {
					strings__Builder_write_string(sb, hx);
				} else {
					strconv__format_str_sb(hx, bf, sb);
				}
				string_free(&hx);
			}
			return;
		}
		if (typ == StrIntpType__si_p) {
			u64 d = data->d.d_u64;
			base = 16;
			if (base == 0) {
				if (width == 0) {
					string d_str = u64_str(d);
					strings__Builder_write_string(sb, d_str);
					string_free(&d_str);
					return;
				}
				strconv__format_dec_sb(d, bf, sb);
			} else {
				string hx = strconv__format_uint(d, base);
				if (upper_case) {
					string tmp = hx;
					hx = string_to_upper(hx);
					string_free(&tmp);
				}
				if (width == 0) {
					strings__Builder_write_string(sb, hx);
				} else {
					strconv__format_str_sb(hx, bf, sb);
				}
				string_free(&hx);
			}
			return;
		}
		bool use_default_str = false;
		if (width == 0 && precision == 0x7F) {
			bf.len1 = 3;
			use_default_str = true;
		}
		if (bf.len1 < 0) {
			bf.len1 = 3;
		}
		switch (typ) {
			case StrIntpType__si_f32: {
				#if !defined(CUSTOM_DEFINE_nofloat)
				{
					if (use_default_str) {
						string f = f32_str(data->d.d_f32);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
					} else {
						if (data->d.d_f32 < 0) {
							bf.positive = false;
						}
						string f = strconv__format_fl(data->d.d_f32, bf);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
					}
				}
				#endif
				break;
			}
			case StrIntpType__si_f64: {
				#if !defined(CUSTOM_DEFINE_nofloat)
				{
					if (use_default_str) {
						string f = f64_str(data->d.d_f64);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
					} else {
						if (data->d.d_f64 < 0) {
							bf.positive = false;
						}
						strconv__Float64u f_union = ((strconv__Float64u){.f = data->d.d_f64,});
						if (f_union.u == _const_strconv__double_minus_zero) {
							bf.positive = false;
						}
						string f = strconv__format_fl(data->d.d_f64, bf);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
					}
				}
				#endif
				break;
			}
			case StrIntpType__si_g32: {
				if (use_default_str) {
					#if !defined(CUSTOM_DEFINE_nofloat)
					{
						string f = f32_strg(data->d.d_f32);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
					}
					#endif
				} else {
					if (data->d.d_f32 == _const_strconv__single_plus_zero) {
						string tmp_str = _S("0");
						strconv__format_str_sb(tmp_str, bf, sb);
						string_free(&tmp_str);
						return;
					}
					if (data->d.d_f32 == _const_strconv__single_minus_zero) {
						string tmp_str = _S("-0");
						strconv__format_str_sb(tmp_str, bf, sb);
						string_free(&tmp_str);
						return;
					}
					if (data->d.d_f32 == _const_strconv__single_plus_infinity) {
						string tmp_str = _S("+inf");
						if (upper_case) {
							tmp_str = _S("+INF");
						}
						strconv__format_str_sb(tmp_str, bf, sb);
						string_free(&tmp_str);
					}
					if (data->d.d_f32 == _const_strconv__single_minus_infinity) {
						string tmp_str = _S("-inf");
						if (upper_case) {
							tmp_str = _S("-INF");
						}
						strconv__format_str_sb(tmp_str, bf, sb);
						string_free(&tmp_str);
					}
					if (data->d.d_f32 < 0) {
						bf.positive = false;
					}
					f32 d = fabs32(data->d.d_f32);
					if (d < ((f32)(999999.0)) && d >= ((f32)(0.00001))) {
						string f = strconv__format_fl(data->d.d_f32, bf);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
						return;
					}
					bf.len1--;
					string f = strconv__format_es(data->d.d_f32, bf);
					if (upper_case) {
						string tmp = f;
						f = string_to_upper(f);
						string_free(&tmp);
					}
					strings__Builder_write_string(sb, f);
					string_free(&f);
				}
				break;
			}
			case StrIntpType__si_g64: {
				if (use_default_str) {
					#if !defined(CUSTOM_DEFINE_nofloat)
					{
						string f = f64_strg(data->d.d_f64);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
					}
					#endif
				} else {
					if (data->d.d_f64 == _const_strconv__double_plus_zero) {
						string tmp_str = _S("0");
						strconv__format_str_sb(tmp_str, bf, sb);
						string_free(&tmp_str);
						return;
					}
					if (data->d.d_f64 == _const_strconv__double_minus_zero) {
						string tmp_str = _S("-0");
						strconv__format_str_sb(tmp_str, bf, sb);
						string_free(&tmp_str);
						return;
					}
					if (data->d.d_f64 == _const_strconv__double_plus_infinity) {
						string tmp_str = _S("+inf");
						if (upper_case) {
							tmp_str = _S("+INF");
						}
						strconv__format_str_sb(tmp_str, bf, sb);
						string_free(&tmp_str);
					}
					if (data->d.d_f64 == _const_strconv__double_minus_infinity) {
						string tmp_str = _S("-inf");
						if (upper_case) {
							tmp_str = _S("-INF");
						}
						strconv__format_str_sb(tmp_str, bf, sb);
						string_free(&tmp_str);
					}
					if (data->d.d_f64 < 0) {
						bf.positive = false;
					}
					f64 d = fabs64(data->d.d_f64);
					if (d < ((f64)(999999.0)) && d >= ((f64)(0.00001))) {
						string f = strconv__format_fl(data->d.d_f64, bf);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
						return;
					}
					bf.len1--;
					string f = strconv__format_es(data->d.d_f64, bf);
					if (upper_case) {
						string tmp = f;
						f = string_to_upper(f);
						string_free(&tmp);
					}
					strings__Builder_write_string(sb, f);
					string_free(&f);
				}
				break;
			}
			case StrIntpType__si_e32: {
				#if !defined(CUSTOM_DEFINE_nofloat)
				{
					if (use_default_str) {
						string f = f32_str(data->d.d_f32);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
					} else {
						if (data->d.d_f32 < 0) {
							bf.positive = false;
						}
						string f = strconv__format_es(data->d.d_f32, bf);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
					}
				}
				#endif
				break;
			}
			case StrIntpType__si_e64: {
				#if !defined(CUSTOM_DEFINE_nofloat)
				{
					if (use_default_str) {
						string f = f64_str(data->d.d_f64);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
					} else {
						if (data->d.d_f64 < 0) {
							bf.positive = false;
						}
						string f = strconv__format_es(data->d.d_f64, bf);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
					}
				}
				#endif
				break;
			}
			case StrIntpType__si_c: {
				string ss = utf32_to_str(data->d.d_c);
				strings__Builder_write_string(sb, ss);
				string_free(&ss);
				break;
			}
			case StrIntpType__si_vp: {
				string ss = u64_hex(((u64)(data->d.d_vp)));
				strings__Builder_write_string(sb, ss);
				string_free(&ss);
				break;
			}
			case StrIntpType__si_no_str:
			case StrIntpType__si_u8:
			case StrIntpType__si_i8:
			case StrIntpType__si_u16:
			case StrIntpType__si_i16:
			case StrIntpType__si_u32:
			case StrIntpType__si_i32:
			case StrIntpType__si_u64:
			case StrIntpType__si_i64:
			case StrIntpType__si_s:
			case StrIntpType__si_p:
			case StrIntpType__si_r:
			default: {
				{
					strings__Builder_write_string(sb, _S("***ERROR!***"));
					break;
				}
			}
		}
		
	}
}
string str_intp(int data_len, StrIntpData* input_base) {
	strings__Builder res = strings__new_builder(64);
	for (int i = 0; i < data_len; i++) {
		StrIntpData* data = &input_base[i];
		if (data->str.len != 0) {
			strings__Builder_write_string(&res, data->str);
		}
		if (data->fmt != 0U) {
			StrIntpData_process_str_intp_data(data, (voidptr)&res);
		}
	}
	string ret = strings__Builder_str(&res);
	strings__Builder_free(&res);
	return ret;
}
int utf8_char_len(u8 b) {
	return (int_literal)(((((0xe5000000 >> ((((b >> 3)) & 0x1e)))) & 3)) + 1);
}
string utf32_to_str(u32 code) {
	{
		u8* buffer = malloc_noscan(5);
		string res = utf32_to_str_no_malloc(code, buffer);
		if (res.len == 0) {
			_v_free(buffer);
		}
		return res;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
string utf32_to_str_no_malloc(u32 code, u8* buf) {
	{
		int len = utf32_decode_to_buffer(code, buf);
		if (len == 0) {
			return _S("");
		}
		buf[len] = 0;
		return tos(buf, len);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
int utf32_decode_to_buffer(u32 code, u8* buf) {
	{
		int icode = ((int)(code));
		u8* buffer = ((u8*)(buf));
		if (icode <= 127) {
			buffer[0] = ((u8)(icode));
			return 1;
		} else if (icode <= 2047) {
			buffer[0] = (192 | ((u8)((icode >> 6))));
			buffer[1] = (128 | ((u8)((icode & 63))));
			return 2;
		} else if (icode <= 65535) {
			buffer[0] = (224 | ((u8)((icode >> 12))));
			buffer[1] = (128 | ((((u8)((icode >> 6))) & 63)));
			buffer[2] = (128 | ((u8)((icode & 63))));
			return 3;
		} else if (icode <= 1114111) {
			buffer[0] = (240 | ((u8)((icode >> 18))));
			buffer[1] = (128 | ((((u8)((icode >> 12))) & 63)));
			buffer[2] = (128 | ((((u8)((icode >> 6))) & 63)));
			buffer[3] = (128 | ((u8)((icode & 63))));
			return 4;
		}
	}
	return 0;
}
int string_utf32_code(string _rune) {
	if (_rune.len > 4) {
		return 0;
	}
	return ((int)(impl_utf8_to_utf32(((u8*)(_rune.str)), _rune.len)));
}
VV_LOC rune impl_utf8_to_utf32(u8* _bytes, int _bytes_len) {
	if (_bytes_len == 0) {
		return 0;
	}
	if (_bytes_len == 1) {
		return ((rune)(_bytes[0]));
	}
	u8 b = ((u8)(((int)(_bytes[0]))));
	b = (b << _bytes_len);
	rune res = ((rune)(b));
	int shift = (int)(6 - _bytes_len);
	for (int i = 1; i < _bytes_len; i++) {
		rune c = ((rune)(_bytes[i]));
		res = (((rune)(res)) << shift);
		res |= (c & 63);
		shift = 6;
	}
	return res;
}
int utf8_str_visible_length(string s) {
	int l = 0;
	int ul = 1;
	for (int i = 0; i < s.len; i += ul) {
		u8 c = s.str[i];
		ul = (int_literal)(((((0xe5000000 >> ((((s.str[i] >> 3)) & 0x1e)))) & 3)) + 1);
		if ((int)(i + ul) > s.len) {
			return l;
		}
		l++;
		if (ul == 1) {
			continue;
		}

		if (ul == (2)) {
			u64 r = ((u64)((((((u16)(c)) << 8U)) | s.str[(int)(i + 1)])));
			if (r >= 0xcc80U && r < 0xcdb0U) {
				l--;
			}
		}
		else if (ul == (3)) {
			u64 r = ((u64)((((((u32)(c)) << 16U)) | (((((u32)(s.str[(int)(i + 1)])) << 8U)) | s.str[(int)(i + 2)]))));
			if ((r >= 0xe1aab0U && r <= 0xe1ac7fU) || (r >= 0xe1b780U && r <= 0xe1b87fU) || (r >= 0xe28390U && r <= 0xe2847fU) || (r >= 0xefb8a0U && r <= 0xefb8afU)) {
				l--;
			} else if ((r >= 0xe18480U && r <= 0xe1859fU) || (r >= 0xe2ba80U && r <= 0xe2bf95U) || (r >= 0xe38080U && r <= 0xe4b77fU) || (r >= 0xe4b880U && r <= 0xea807fU) || (r >= 0xeaa5a0U && r <= 0xeaa79fU) || (r >= 0xeab080U && r <= 0xed9eafU) || (r >= 0xefa480U && r <= 0xefac7fU) || (r >= 0xefb8b8U && r <= 0xefb9afU)) {
				l++;
			}
		}
		else if (ul == (4)) {
			u64 r = ((u64)((((((u32)(c)) << 24U)) | ((((((u32)(s.str[(int)(i + 1)])) << 16U)) | ((((u32)(s.str[(int)(i + 2)])) << 8U))) | s.str[(int)(i + 3)]))));
			if ((r >= 0x0f9f8880U && r <= 0xf09f8a8fU) || (r >= 0xf09f8c80U && r <= 0xf09f9c90U) || (r >= 0xf09fa490U && r <= 0xf09fa7afU) || (r >= 0xf0a08080U && r <= 0xf180807fU)) {
				l++;
			}
		}
		else {
		}
	}
	return l;
}
inline bool ArrayFlags_has(ArrayFlags* e, ArrayFlags flag_) {
	return ((((int)(*e)) & (((int)(flag_))))) != 0;
}
inline void ArrayFlags_set(ArrayFlags* e, ArrayFlags flag_) {
	{
		*e = ((ArrayFlags)((((int)(*e)) | (((int)(flag_))))));
	}
}
inline void ArrayFlags_clear(ArrayFlags* e, ArrayFlags flag_) {
	{
		*e = ((ArrayFlags)((((int)(*e)) & ~(((int)(flag_))))));
	}
}
i64 time__Duration_milliseconds(time__Duration d) {
	return ((i64)(d)) / _const_time__millisecond;
}
string time__Duration_str(time__Duration d) {
	if (d == _const_time__infinite) {
		return _S("inf");
	}
	string sign = _S("");
	i64 t = ((i64)(d));
	if (t < 0) {
		string _sref1869 = (sign); // free string on re-assignment2
		sign = _S("-");
		string_free(&_sref1869);
		t = -t;
	}
	i64 hr = t / _const_time__hour;
	t -= hr * _const_time__hour;
	i64 min = t / _const_time__minute;
	t -= min * _const_time__minute;
	i64 sec = t / _const_time__second;
	t -= sec * _const_time__second;
	i64 ms = t / _const_time__millisecond;
	t -= ms * _const_time__millisecond;
	i64 us = t / _const_time__microsecond;
	t -= us * _const_time__microsecond;
	i64 ns = t;
	bool _t3 = true;
	string_free(&sign); // autofreed var time false
return ((_t3 == (hr > 0))? (str_intp(5, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = sign}}, {_SLIT0, 0xfe09, {.d_i64 = hr}}, {_S(":"), 0x8004fe29, {.d_i64 = min}}, {_S(":"), 0x8004fe29, {.d_i64 = sec}}, {_SLIT0, 0, { .d_c = 0 }}}))) : (_t3 == (min > 0))? (str_intp(5, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = sign}}, {_SLIT0, 0xfe09, {.d_i64 = min}}, {_S(":"), 0x8004fe29, {.d_i64 = sec}}, {_S("."), 0x8006fe29, {.d_i64 = ms}}, {_SLIT0, 0, { .d_c = 0 }}}))) : (_t3 == (sec > 0))? (str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = sign}}, {_SLIT0, 0xfe09, {.d_i64 = sec}}, {_S("."), 0x8006fe29, {.d_i64 = ms}}, {_S("s"), 0, { .d_c = 0 }}}))) : (_t3 == (ms > 0))? (str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = sign}}, {_SLIT0, 0xfe09, {.d_i64 = ms}}, {_S("."), 0x8006fe29, {.d_i64 = us}}, {_S("ms"), 0, { .d_c = 0 }}}))) : (_t3 == (us > 0))? (str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = sign}}, {_SLIT0, 0xfe09, {.d_i64 = us}}, {_S("."), 0x8006fe29, {.d_i64 = ns}}, {_S("us"), 0, { .d_c = 0 }}}))) : (str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = sign}}, {_SLIT0, 0xfe09, {.d_i64 = ns}}, {_S("ns"), 0, { .d_c = 0 }}}))));
	string_free(&sign); // autofreed var time false
}
VV_LOC void time__int_to_byte_array_no_pad(int value, Array_u8* arr, int size) {
	int num = value;
	if (size <= 0 || num < 0) {
		return;
	}
	int i = (int)(size - 1);
	for (;;) {
		if (!(num > 0 && i >= 0)) break;
		((u8*)arr->data)[i] = (rune)(((int)(num % 10)) + '0');
		num /= 10;
		i--;
	}
}
string time__Time_format_ss(time__Time t) {
	bool time__Time_format_ss_defer_0 = false;
	Array_u8 buf;
	buf = new_array_from_c_array(19, 19, sizeof(u8), _MOV((u8[19]){
			((u8)('0')), '0', '0', '0', '-', '0', '0', '-', '0',
			'0', ' ', '0', '0', ':', '0', '0', ':',
			'0', '0'}));
	time__Time_format_ss_defer_0 = true;
	time__int_to_byte_array_no_pad(t.year, &buf, 4);
	time__int_to_byte_array_no_pad(t.month, &buf, 7);
	time__int_to_byte_array_no_pad(t.day, &buf, 10);
	time__int_to_byte_array_no_pad(t.hour, &buf, 13);
	time__int_to_byte_array_no_pad(t.minute, &buf, 16);
	time__int_to_byte_array_no_pad(t.second, &buf, 19);
	string _t1 = Array_u8_bytestr(buf);
	if (time__Time_format_ss_defer_0) {
		array_free(&buf);
	}
	return _t1;
}
inline bool time__Time__eq(time__Time t1, time__Time t2) {
	return time__Time_unix(t1) == time__Time_unix(t2) && t1.nanosecond == t2.nanosecond;
}
inline bool time__Time__lt(time__Time t1, time__Time t2) {
	return time__Time_unix(t1) < time__Time_unix(t2) || (time__Time_unix(t1) == time__Time_unix(t2) && t1.nanosecond < t2.nanosecond);
}
inline time__Duration time__Time__minus(time__Time lhs, time__Time rhs) {
	i64 unixs = ((i64)((i64)(time__Time_unix(lhs) - time__Time_unix(rhs)))) * _const_time__second;
	int nanos = (int)(lhs.nanosecond - rhs.nanosecond);
	return (i64)(unixs + nanos);
}
string time__TimeParseError_msg(time__TimeParseError err) {
	return str_intp(3, _MOV((StrIntpData[]){{_S("Invalid time format code: "), 0xfe07, {.d_i32 = err.code}}, {_S(", error: "), 0xfe10, {.d_s = err.message}}, {_SLIT0, 0, { .d_c = 0 }}}));
}
time__StopWatch time__new_stopwatch(time__StopWatchOptions opts) {
	u64 initial = ((u64)(0U));
	if (opts.auto_start) {
		initial = time__sys_mono_now();
	}
	return ((time__StopWatch){.elapsed = 0U,.start = initial,.end = 0U,});
}
time__Time time__now(void) {
	time__Time _t1 = time__darwin_now();
	return _t1;
	time__Time _t2 = time__linux_now();
	return _t2;
}
VV_LOC time__Time time__time_with_unix(time__Time t) {
	if (t.__v_unix != 0) {
		return t;
	}
	struct tm tt = ((struct tm){
		.tm_sec = t.second,
		.tm_min = t.minute,
		.tm_hour = t.hour,
		.tm_mday = t.day,
		.tm_mon = (int)(t.month - 1),
		.tm_year = (int)(t.year - 1900),
		.tm_wday = 0,
		.tm_yday = 0,
		.tm_isdst = 0,
		.tm_gmtoff = 0,
	});
	i64 utime = time__make_unix_time(tt);
	return ((time__Time){.__v_unix = utime,.year = (t).year,.month = (t).month,.day = (t).day,.hour = (t).hour,.minute = (t).minute,.second = (t).second,.nanosecond = (t).nanosecond,.is_local = (t).is_local,});
}
string time__Time_str(time__Time t) {
	string _t1 = time__Time_format_ss(t);
	return _t1;
}
VV_LOC time__Time time__convert_ctime(struct tm t, int nanosecond) {
	return ((time__Time){
		.__v_unix = time__make_unix_time(t),
		.year = (int)(t.tm_year + 1900),
		.month = (int)(t.tm_mon + 1),
		.day = t.tm_mday,
		.hour = t.tm_hour,
		.minute = t.tm_min,
		.second = t.tm_sec,
		.nanosecond = nanosecond,
		.is_local = true,
	});
}
inline i64 time__Time_unix(time__Time t) {
	return time__time_with_unix(t).__v_unix;
}
VV_LOC mach_timebase_info_data_t time__init_time_base(void) {
	mach_timebase_info_data_t tb = ((mach_timebase_info_data_t){.numer = 0,.denom = 0,});
	mach_timebase_info(&tb);
	return ((mach_timebase_info_data_t){.numer = tb.numer,.denom = tb.denom,});
}
VV_LOC u64 time__sys_mono_now_darwin(void) {
	u64 tm = mach_absolute_time();
	if (_const_time__time_base.denom == 0U) {
		mach_timebase_info(&_const_time__time_base);
	}
	return (u64)((u64)(((u64)(tm - _const_time__start_time)) * _const_time__time_base.numer) / _const_time__time_base.denom);
}
VV_LOC time__Time time__darwin_now(void) {
	struct timespec ts = ((struct timespec){.tv_sec = 0,.tv_nsec = 0,});
	clock_gettime(CLOCK_REALTIME, &ts);
	struct tm loc_tm = ((struct tm){.tm_sec = 0,.tm_min = 0,.tm_hour = 0,.tm_mday = 0,.tm_mon = 0,.tm_year = 0,.tm_wday = 0,.tm_yday = 0,.tm_isdst = 0,.tm_gmtoff = 0,});
	localtime_r(((voidptr)(&ts.tv_sec)), &loc_tm);
	time__Time _t1 = time__convert_ctime(loc_tm, ((int)(ts.tv_nsec)));
	return _t1;
}
VV_LOC i64 time__make_unix_time(struct tm t) {
	return ((i64)(timegm(&t)));
}
u64 time__sys_mono_now(void) {
	#if defined(__APPLE__)
	{
		u64 _t2 = time__sys_mono_now_darwin();
		return _t2;
	}
	#else
	{
	}
	#endif
	return 0;
}
VV_LOC time__Time time__linux_now(void) {
	struct timespec ts = ((struct timespec){.tv_sec = 0,.tv_nsec = 0,});
	clock_gettime(CLOCK_REALTIME, &ts);
	struct tm loc_tm = ((struct tm){.tm_sec = 0,.tm_min = 0,.tm_hour = 0,.tm_mday = 0,.tm_mon = 0,.tm_year = 0,.tm_wday = 0,.tm_yday = 0,.tm_isdst = 0,.tm_gmtoff = 0,});
	localtime_r(((voidptr)(&ts.tv_sec)), &loc_tm);
	time__Time _t1 = time__convert_ctime(loc_tm, ((int)(ts.tv_nsec)));
	return _t1;
}
#if defined(_WIN32)
#else
#endif
VV_LOC voidptr stbi__cb_malloc(usize s) {
	u8* res = _v_malloc(((isize)(s)));
string _arg_expr_stbi_trace_allocation_1_379 = str_intp(3, _MOV((StrIntpData[]){{_S("> stbi__callback_malloc: "), 0xfe08, {.d_u64 = s}}, {_S(" => "), 0xfe10, {.d_s = ptr_str(res)}}, {_SLIT0, 0, { .d_c = 0 }}}));// new af2 pre/* inserted before */
	;
		string_free(&_arg_expr_stbi_trace_allocation_1_379); // autofreed var stbi false
return res;
	string_free(&_arg_expr_stbi_trace_allocation_1_379); // autofreed var stbi false
}
// export alias: stbi__callback_malloc -> stbi__cb_malloc
voidptr stbi__callback_malloc(usize s) {
	return stbi__cb_malloc(s);
}
VV_LOC voidptr stbi__cb_realloc(voidptr p, usize s) {
	u8* res = v_realloc(p, ((isize)(s)));
string _arg_expr_stbi_trace_allocation_1_586 = str_intp(4, _MOV((StrIntpData[]){{_S("> stbi__callback_realloc: "), 0xfe10, {.d_s = ptr_str(p)}}, {_S(" , "), 0xfe08, {.d_u64 = s}}, {_S(" => "), 0xfe10, {.d_s = ptr_str(res)}}, {_SLIT0, 0, { .d_c = 0 }}}));// new af2 pre/* inserted before */
	;
		string_free(&_arg_expr_stbi_trace_allocation_1_586); // autofreed var stbi false
return res;
	string_free(&_arg_expr_stbi_trace_allocation_1_586); // autofreed var stbi false
}
// export alias: stbi__callback_realloc -> stbi__cb_realloc
voidptr stbi__callback_realloc(voidptr p, usize s) {
	return stbi__cb_realloc(p, s);
}
VV_LOC void stbi__cb_free(voidptr p) {
string _arg_expr_stbi_trace_allocation_1_745 = str_intp(2, _MOV((StrIntpData[]){{_S("> stbi__callback_free: "), 0xfe10, {.d_s = ptr_str(p)}}, {_SLIT0, 0, { .d_c = 0 }}}));// new af2 pre/* inserted before */
	;
	_v_free(p);
	string_free(&_arg_expr_stbi_trace_allocation_1_745); // autofreed var stbi false
}
// export alias: stbi__callback_free -> stbi__cb_free
void stbi__callback_free(voidptr p) {
	return stbi__cb_free(p);
}
void stbi__set_flip_vertically_on_write(bool val) {
	stbi_flip_vertically_on_write(val);
}
void stbi__Image_free(stbi__Image* img) {
	stbi_image_free(img->data);
}
_result_void stbi__stbi_write_png(string path, int w, int h, int comp, u8* buf, int row_stride_in_bytes) {
	if (0 == stbi_write_png(((char*)(path.str)), w, h, comp, buf, row_stride_in_bytes)) {
string _arg_expr_error_1_8287 = str_intp(2, _MOV((StrIntpData[]){{_S("stbi_image failed to write png file to \""), 0xfe10, {.d_s = path}}, {_S("\""), 0, { .d_c = 0 }}}));// new af2 pre/* inserted before */
				return (_result_void){ .is_error=true, .err=_v_error(/*autofree arg*/_arg_expr_error_1_8287), .data={E_STRUCT} };
		string_free(&_arg_expr_error_1_8287); // autofreed var stbi false
}
	return (_result_void){0};
}
#if defined(_WIN32)
#else
#endif
inline void fontstash__Context_set_error_callback(fontstash__Context* s, void (*callback)(voidptr , int , int ), voidptr uptr) {
	fonsSetErrorCallback(s, (voidptr)callback, uptr);
}
inline int fontstash__Context_reset_atlas(fontstash__Context* s, int width, int height) {
	int _t1 = fonsResetAtlas(s, width, height);
	return _t1;
}
inline int fontstash__Context_add_font_mem(fontstash__Context* s, string name, Array_u8 data, bool free_data) {
	int _t1 = fonsAddFontMem(s, ((char*)(name.str)), data.data, data.len, (int[]){(free_data)?1:0}[0]);
	return _t1;
}
inline void fontstash__Context_set_size(fontstash__Context* s, f32 size) {
	fonsSetSize(s, size);
}
inline void fontstash__Context_set_color(fontstash__Context* s, u32 color) {
	fonsSetColor(s, color);
}
inline void fontstash__Context_set_align(fontstash__Context* s, int align) {
	fonsSetAlign(s, ((int)(align)));
}
inline void fontstash__Context_set_font(fontstash__Context* s, int font_id) {
	fonsSetFont(s, font_id);
}
inline f32 fontstash__Context_draw_text(fontstash__Context* s, f32 x, f32 y, string text) {
	f32 _t1 = fonsDrawText(s, x, y, ((char*)(text.str)), ((char*)(((void*)0))));
	return _t1;
}
inline f32 fontstash__Context_text_bounds(fontstash__Context* s, f32 x, f32 y, string text, f32* bounds) {
	f32 _t1 = fonsTextBounds(s, x, y, ((char*)(text.str)), ((char*)(((void*)0))), bounds);
	return _t1;
}
inline void fontstash__Context_vert_metrics(fontstash__Context* s, f32* ascender, f32* descender, f32* lineh) {
	fonsVertMetrics(s, ascender, descender, lineh);
}
voidptr sokol__memory__salloc(usize size, voidptr user_data) {
	u8* res = _v_malloc(((int)(size)));
	return res;
}
void sokol__memory__sfree(voidptr ptr, voidptr user_data) {
	_v_free(ptr);
}
void sokol__memory__slog(const char* const_tag, u32 log_level, u32 log_item_id, const char* const_message_or_null, u32 line_nr, const char* const_filename_or_null, voidptr user_data) {
	fprintf(stderr, "sokol.memory.slog | user_data: %p, const_tag: %s, level: %d, item_id: %d, fname: %s, line: %d, message: %s\n", user_data, const_tag, log_level, log_item_id, const_filename_or_null, line_nr, const_message_or_null);
}
#if !defined(__TINYC__)
#endif
#if defined(CUSTOM_DEFINE_darwin_sokol_glcore33)
#else
#endif
#if !defined(CUSTOM_DEFINE_no_sokol_app)
#endif
void strings__textscanner__TextScanner_free(strings__textscanner__TextScanner* ss) {
	string_free(&ss->input);
}
gx__Color gx__Color__plus(gx__Color a, gx__Color b) {
	int na = (int)(((int)(a.a)) + b.a);
	int nr = (int)(((int)(a.r)) + b.r);
	int ng = (int)(((int)(a.g)) + b.g);
	int nb = (int)(((int)(a.b)) + b.b);
	if (na > 255) {
		na = 255;
	}
	if (nr > 255) {
		nr = 255;
	}
	if (ng > 255) {
		ng = 255;
	}
	if (nb > 255) {
		nb = 255;
	}
	return ((gx__Color){.r = ((u8)(nr)),.g = ((u8)(ng)),.b = ((u8)(nb)),.a = ((u8)(na)),});
}
gx__Color gx__Color__minus(gx__Color a, gx__Color b) {
	u8 _t1; /* if prepend */
	if (a.a > b.a) {
		_t1 = a.a;
	} else {
		_t1 = b.a;
	}
	u8 na = _t1;
	int nr = (int)(((int)(a.r)) - b.r);
	int ng = (int)(((int)(a.g)) - b.g);
	int nb = (int)(((int)(a.b)) - b.b);
	if (na < 0) {
		na = 0;
	}
	if (nr < 0) {
		nr = 0;
	}
	if (ng < 0) {
		ng = 0;
	}
	if (nb < 0) {
		nb = 0;
	}
	return ((gx__Color){.r = ((u8)(nr)),.g = ((u8)(ng)),.b = ((u8)(nb)),.a = ((u8)(na)),});
}
gx__Color gx__Color__mult(gx__Color c, gx__Color c2) {
	return ((gx__Color){.r = (u8)(c.r * c2.r),.g = (u8)(c.g * c2.g),.b = (u8)(c.b * c2.b),.a = (u8)(c.a * c2.a),});
}
gx__Color gx__Color__div(gx__Color c, gx__Color c2) {
	return ((gx__Color){.r = (u8)(c.r / c2.r),.g = (u8)(c.g / c2.g),.b = (u8)(c.b / c2.b),.a = (u8)(c.a / c2.a),});
}
string gx__Color_str(gx__Color c) {
	return str_intp(5, _MOV((StrIntpData[]){{_S("Color{"), 0xfe02, {.d_u8 = c.r}}, {_S(", "), 0xfe02, {.d_u8 = c.g}}, {_S(", "), 0xfe02, {.d_u8 = c.b}}, {_S(", "), 0xfe02, {.d_u8 = c.a}}, {_S("}"), 0, { .d_c = 0 }}}));
}
void sokol__gfx__setup(sokol__gfx__Desc* desc) {
	if (desc->allocator.alloc_fn == (voidptr)((void*)0) && desc->allocator.free_fn == (voidptr)((void*)0)) {
		{
			desc->allocator.alloc_fn = (voidptr)sokol__memory__salloc;
			desc->allocator.free_fn = (voidptr)sokol__memory__sfree;
			desc->allocator.user_data = ((voidptr)(0x1006fec5));
		}
	}
	if (desc->logger.func == (voidptr)((void*)0)) {
		{
			desc->logger.func = (voidptr)sokol__memory__slog;
		}
	}
	sg_setup(desc);
}
void sokol__gfx__shutdown(void) {
	sg_shutdown();
}
inline sokol__gfx__Image sokol__gfx__make_image(sokol__gfx__ImageDesc* desc) {
	sokol__gfx__Image _t1 = sg_make_image(desc);
	return _t1;
}
inline sokol__gfx__Sampler sokol__gfx__make_sampler(sokol__gfx__SamplerDesc* desc) {
	sokol__gfx__Sampler _t1 = sg_make_sampler(desc);
	return _t1;
}
inline void sokol__gfx__begin_pass(const sokol__gfx__Pass* const_pass) {
	sg_begin_pass(const_pass);
}
inline void sokol__gfx__end_pass(void) {
	sg_end_pass();
}
inline void sokol__gfx__commit(void) {
	sg_commit();
}
void C__sg_pipeline_free(struct sg_pipeline* p) {
	sg_destroy_pipeline(*p);
}
void C__sg_attachments_free(struct sg_attachments* a) {
	sg_destroy_attachments(*a);
}
void sokol__gfx__Shader_free(sokol__gfx__Shader* s) {
	sg_destroy_shader(*s);
}
void sokol__gfx__Buffer_free(sokol__gfx__Buffer* b) {
	sg_destroy_buffer(*b);
}
void sokol__gfx__Image_free(sokol__gfx__Image* i) {
	sg_destroy_image(*i);
}
sokol__gfx__PassAction sokol__gfx__create_clear_pass_action(f32 r, f32 g, f32 b, f32 a) {
	sokol__gfx__ColorAttachmentAction color_action = ((sokol__gfx__ColorAttachmentAction){.load_action = sokol__gfx__LoadAction__clear,.store_action = 0,.clear_value = ((sokol__gfx__Color){.r = r,.g = g,.b = b,.a = a,}),});
	sokol__gfx__PassAction pass_action = ((sokol__gfx__PassAction){.colors = {{0}, {0}, {0}, {0}},.depth = {0},.stencil = {0},});
	pass_action.colors[0] = color_action;
	return pass_action;
}
_result_sokol__gfx__PixelFormat sokol__gfx__PixelFormat__static__from_T_int(int input) {
	#if 1
	{
		sokol__gfx__PixelFormat val = ((sokol__gfx__PixelFormat)(input));
		switch (val) {
			case sokol__gfx__PixelFormat___default: {
				_result_sokol__gfx__PixelFormat _t2 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat___default }, (_result*)(&_t2), sizeof(sokol__gfx__PixelFormat));
				return _t2;
			}
			case sokol__gfx__PixelFormat__none: {
				_result_sokol__gfx__PixelFormat _t3 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__none }, (_result*)(&_t3), sizeof(sokol__gfx__PixelFormat));
				return _t3;
			}
			case sokol__gfx__PixelFormat__r8: {
				_result_sokol__gfx__PixelFormat _t4 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__r8 }, (_result*)(&_t4), sizeof(sokol__gfx__PixelFormat));
				return _t4;
			}
			case sokol__gfx__PixelFormat__r8sn: {
				_result_sokol__gfx__PixelFormat _t5 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__r8sn }, (_result*)(&_t5), sizeof(sokol__gfx__PixelFormat));
				return _t5;
			}
			case sokol__gfx__PixelFormat__r8ui: {
				_result_sokol__gfx__PixelFormat _t6 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__r8ui }, (_result*)(&_t6), sizeof(sokol__gfx__PixelFormat));
				return _t6;
			}
			case sokol__gfx__PixelFormat__r8si: {
				_result_sokol__gfx__PixelFormat _t7 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__r8si }, (_result*)(&_t7), sizeof(sokol__gfx__PixelFormat));
				return _t7;
			}
			case sokol__gfx__PixelFormat__r16: {
				_result_sokol__gfx__PixelFormat _t8 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__r16 }, (_result*)(&_t8), sizeof(sokol__gfx__PixelFormat));
				return _t8;
			}
			case sokol__gfx__PixelFormat__r16sn: {
				_result_sokol__gfx__PixelFormat _t9 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__r16sn }, (_result*)(&_t9), sizeof(sokol__gfx__PixelFormat));
				return _t9;
			}
			case sokol__gfx__PixelFormat__r16ui: {
				_result_sokol__gfx__PixelFormat _t10 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__r16ui }, (_result*)(&_t10), sizeof(sokol__gfx__PixelFormat));
				return _t10;
			}
			case sokol__gfx__PixelFormat__r16si: {
				_result_sokol__gfx__PixelFormat _t11 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__r16si }, (_result*)(&_t11), sizeof(sokol__gfx__PixelFormat));
				return _t11;
			}
			case sokol__gfx__PixelFormat__r16f: {
				_result_sokol__gfx__PixelFormat _t12 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__r16f }, (_result*)(&_t12), sizeof(sokol__gfx__PixelFormat));
				return _t12;
			}
			case sokol__gfx__PixelFormat__rg8: {
				_result_sokol__gfx__PixelFormat _t13 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rg8 }, (_result*)(&_t13), sizeof(sokol__gfx__PixelFormat));
				return _t13;
			}
			case sokol__gfx__PixelFormat__rg8sn: {
				_result_sokol__gfx__PixelFormat _t14 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rg8sn }, (_result*)(&_t14), sizeof(sokol__gfx__PixelFormat));
				return _t14;
			}
			case sokol__gfx__PixelFormat__rg8ui: {
				_result_sokol__gfx__PixelFormat _t15 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rg8ui }, (_result*)(&_t15), sizeof(sokol__gfx__PixelFormat));
				return _t15;
			}
			case sokol__gfx__PixelFormat__rg8si: {
				_result_sokol__gfx__PixelFormat _t16 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rg8si }, (_result*)(&_t16), sizeof(sokol__gfx__PixelFormat));
				return _t16;
			}
			case sokol__gfx__PixelFormat__r32ui: {
				_result_sokol__gfx__PixelFormat _t17 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__r32ui }, (_result*)(&_t17), sizeof(sokol__gfx__PixelFormat));
				return _t17;
			}
			case sokol__gfx__PixelFormat__r32si: {
				_result_sokol__gfx__PixelFormat _t18 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__r32si }, (_result*)(&_t18), sizeof(sokol__gfx__PixelFormat));
				return _t18;
			}
			case sokol__gfx__PixelFormat__r32f: {
				_result_sokol__gfx__PixelFormat _t19 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__r32f }, (_result*)(&_t19), sizeof(sokol__gfx__PixelFormat));
				return _t19;
			}
			case sokol__gfx__PixelFormat__rg16: {
				_result_sokol__gfx__PixelFormat _t20 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rg16 }, (_result*)(&_t20), sizeof(sokol__gfx__PixelFormat));
				return _t20;
			}
			case sokol__gfx__PixelFormat__rg16sn: {
				_result_sokol__gfx__PixelFormat _t21 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rg16sn }, (_result*)(&_t21), sizeof(sokol__gfx__PixelFormat));
				return _t21;
			}
			case sokol__gfx__PixelFormat__rg16ui: {
				_result_sokol__gfx__PixelFormat _t22 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rg16ui }, (_result*)(&_t22), sizeof(sokol__gfx__PixelFormat));
				return _t22;
			}
			case sokol__gfx__PixelFormat__rg16si: {
				_result_sokol__gfx__PixelFormat _t23 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rg16si }, (_result*)(&_t23), sizeof(sokol__gfx__PixelFormat));
				return _t23;
			}
			case sokol__gfx__PixelFormat__rg16f: {
				_result_sokol__gfx__PixelFormat _t24 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rg16f }, (_result*)(&_t24), sizeof(sokol__gfx__PixelFormat));
				return _t24;
			}
			case sokol__gfx__PixelFormat__rgba8: {
				_result_sokol__gfx__PixelFormat _t25 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rgba8 }, (_result*)(&_t25), sizeof(sokol__gfx__PixelFormat));
				return _t25;
			}
			case sokol__gfx__PixelFormat__srgb8a8: {
				_result_sokol__gfx__PixelFormat _t26 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__srgb8a8 }, (_result*)(&_t26), sizeof(sokol__gfx__PixelFormat));
				return _t26;
			}
			case sokol__gfx__PixelFormat__rgba8sn: {
				_result_sokol__gfx__PixelFormat _t27 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rgba8sn }, (_result*)(&_t27), sizeof(sokol__gfx__PixelFormat));
				return _t27;
			}
			case sokol__gfx__PixelFormat__rgba8ui: {
				_result_sokol__gfx__PixelFormat _t28 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rgba8ui }, (_result*)(&_t28), sizeof(sokol__gfx__PixelFormat));
				return _t28;
			}
			case sokol__gfx__PixelFormat__rgba8si: {
				_result_sokol__gfx__PixelFormat _t29 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rgba8si }, (_result*)(&_t29), sizeof(sokol__gfx__PixelFormat));
				return _t29;
			}
			case sokol__gfx__PixelFormat__bgra8: {
				_result_sokol__gfx__PixelFormat _t30 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__bgra8 }, (_result*)(&_t30), sizeof(sokol__gfx__PixelFormat));
				return _t30;
			}
			case sokol__gfx__PixelFormat__rgb10a2: {
				_result_sokol__gfx__PixelFormat _t31 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rgb10a2 }, (_result*)(&_t31), sizeof(sokol__gfx__PixelFormat));
				return _t31;
			}
			case sokol__gfx__PixelFormat__rg11b10f: {
				_result_sokol__gfx__PixelFormat _t32 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rg11b10f }, (_result*)(&_t32), sizeof(sokol__gfx__PixelFormat));
				return _t32;
			}
			case sokol__gfx__PixelFormat__rgb9e5: {
				_result_sokol__gfx__PixelFormat _t33 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rgb9e5 }, (_result*)(&_t33), sizeof(sokol__gfx__PixelFormat));
				return _t33;
			}
			case sokol__gfx__PixelFormat__rg32ui: {
				_result_sokol__gfx__PixelFormat _t34 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rg32ui }, (_result*)(&_t34), sizeof(sokol__gfx__PixelFormat));
				return _t34;
			}
			case sokol__gfx__PixelFormat__rg32si: {
				_result_sokol__gfx__PixelFormat _t35 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rg32si }, (_result*)(&_t35), sizeof(sokol__gfx__PixelFormat));
				return _t35;
			}
			case sokol__gfx__PixelFormat__rg32f: {
				_result_sokol__gfx__PixelFormat _t36 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rg32f }, (_result*)(&_t36), sizeof(sokol__gfx__PixelFormat));
				return _t36;
			}
			case sokol__gfx__PixelFormat__rgba16: {
				_result_sokol__gfx__PixelFormat _t37 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rgba16 }, (_result*)(&_t37), sizeof(sokol__gfx__PixelFormat));
				return _t37;
			}
			case sokol__gfx__PixelFormat__rgba16sn: {
				_result_sokol__gfx__PixelFormat _t38 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rgba16sn }, (_result*)(&_t38), sizeof(sokol__gfx__PixelFormat));
				return _t38;
			}
			case sokol__gfx__PixelFormat__rgba16ui: {
				_result_sokol__gfx__PixelFormat _t39 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rgba16ui }, (_result*)(&_t39), sizeof(sokol__gfx__PixelFormat));
				return _t39;
			}
			case sokol__gfx__PixelFormat__rgba16si: {
				_result_sokol__gfx__PixelFormat _t40 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rgba16si }, (_result*)(&_t40), sizeof(sokol__gfx__PixelFormat));
				return _t40;
			}
			case sokol__gfx__PixelFormat__rgba16f: {
				_result_sokol__gfx__PixelFormat _t41 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rgba16f }, (_result*)(&_t41), sizeof(sokol__gfx__PixelFormat));
				return _t41;
			}
			case sokol__gfx__PixelFormat__rgba32ui: {
				_result_sokol__gfx__PixelFormat _t42 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rgba32ui }, (_result*)(&_t42), sizeof(sokol__gfx__PixelFormat));
				return _t42;
			}
			case sokol__gfx__PixelFormat__rgba32si: {
				_result_sokol__gfx__PixelFormat _t43 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rgba32si }, (_result*)(&_t43), sizeof(sokol__gfx__PixelFormat));
				return _t43;
			}
			case sokol__gfx__PixelFormat__rgba32f: {
				_result_sokol__gfx__PixelFormat _t44 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__rgba32f }, (_result*)(&_t44), sizeof(sokol__gfx__PixelFormat));
				return _t44;
			}
			case sokol__gfx__PixelFormat__depth: {
				_result_sokol__gfx__PixelFormat _t45 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__depth }, (_result*)(&_t45), sizeof(sokol__gfx__PixelFormat));
				return _t45;
			}
			case sokol__gfx__PixelFormat__depth_stencil: {
				_result_sokol__gfx__PixelFormat _t46 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__depth_stencil }, (_result*)(&_t46), sizeof(sokol__gfx__PixelFormat));
				return _t46;
			}
			case sokol__gfx__PixelFormat__bc1_rgba: {
				_result_sokol__gfx__PixelFormat _t47 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__bc1_rgba }, (_result*)(&_t47), sizeof(sokol__gfx__PixelFormat));
				return _t47;
			}
			case sokol__gfx__PixelFormat__bc2_rgba: {
				_result_sokol__gfx__PixelFormat _t48 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__bc2_rgba }, (_result*)(&_t48), sizeof(sokol__gfx__PixelFormat));
				return _t48;
			}
			case sokol__gfx__PixelFormat__bc3_rgba: {
				_result_sokol__gfx__PixelFormat _t49 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__bc3_rgba }, (_result*)(&_t49), sizeof(sokol__gfx__PixelFormat));
				return _t49;
			}
			case sokol__gfx__PixelFormat__bc3_srgba: {
				_result_sokol__gfx__PixelFormat _t50 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__bc3_srgba }, (_result*)(&_t50), sizeof(sokol__gfx__PixelFormat));
				return _t50;
			}
			case sokol__gfx__PixelFormat__bc4_r: {
				_result_sokol__gfx__PixelFormat _t51 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__bc4_r }, (_result*)(&_t51), sizeof(sokol__gfx__PixelFormat));
				return _t51;
			}
			case sokol__gfx__PixelFormat__bc4_rsn: {
				_result_sokol__gfx__PixelFormat _t52 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__bc4_rsn }, (_result*)(&_t52), sizeof(sokol__gfx__PixelFormat));
				return _t52;
			}
			case sokol__gfx__PixelFormat__bc5_rg: {
				_result_sokol__gfx__PixelFormat _t53 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__bc5_rg }, (_result*)(&_t53), sizeof(sokol__gfx__PixelFormat));
				return _t53;
			}
			case sokol__gfx__PixelFormat__bc5_rgsn: {
				_result_sokol__gfx__PixelFormat _t54 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__bc5_rgsn }, (_result*)(&_t54), sizeof(sokol__gfx__PixelFormat));
				return _t54;
			}
			case sokol__gfx__PixelFormat__bc6h_rgbf: {
				_result_sokol__gfx__PixelFormat _t55 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__bc6h_rgbf }, (_result*)(&_t55), sizeof(sokol__gfx__PixelFormat));
				return _t55;
			}
			case sokol__gfx__PixelFormat__bc6h_rgbuf: {
				_result_sokol__gfx__PixelFormat _t56 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__bc6h_rgbuf }, (_result*)(&_t56), sizeof(sokol__gfx__PixelFormat));
				return _t56;
			}
			case sokol__gfx__PixelFormat__bc7_rgba: {
				_result_sokol__gfx__PixelFormat _t57 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__bc7_rgba }, (_result*)(&_t57), sizeof(sokol__gfx__PixelFormat));
				return _t57;
			}
			case sokol__gfx__PixelFormat__bc7_srgba: {
				_result_sokol__gfx__PixelFormat _t58 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__bc7_srgba }, (_result*)(&_t58), sizeof(sokol__gfx__PixelFormat));
				return _t58;
			}
			case sokol__gfx__PixelFormat__pvrtc_rgb_2bpp: {
				_result_sokol__gfx__PixelFormat _t59 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__pvrtc_rgb_2bpp }, (_result*)(&_t59), sizeof(sokol__gfx__PixelFormat));
				return _t59;
			}
			case sokol__gfx__PixelFormat__pvrtc_rgb_4bpp: {
				_result_sokol__gfx__PixelFormat _t60 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__pvrtc_rgb_4bpp }, (_result*)(&_t60), sizeof(sokol__gfx__PixelFormat));
				return _t60;
			}
			case sokol__gfx__PixelFormat__pvrtc_rgba_2bpp: {
				_result_sokol__gfx__PixelFormat _t61 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__pvrtc_rgba_2bpp }, (_result*)(&_t61), sizeof(sokol__gfx__PixelFormat));
				return _t61;
			}
			case sokol__gfx__PixelFormat__pvrtc_rgba_4bpp: {
				_result_sokol__gfx__PixelFormat _t62 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__pvrtc_rgba_4bpp }, (_result*)(&_t62), sizeof(sokol__gfx__PixelFormat));
				return _t62;
			}
			case sokol__gfx__PixelFormat__etc2_rgb8: {
				_result_sokol__gfx__PixelFormat _t63 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__etc2_rgb8 }, (_result*)(&_t63), sizeof(sokol__gfx__PixelFormat));
				return _t63;
			}
			case sokol__gfx__PixelFormat__etc2_srgb8: {
				_result_sokol__gfx__PixelFormat _t64 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__etc2_srgb8 }, (_result*)(&_t64), sizeof(sokol__gfx__PixelFormat));
				return _t64;
			}
			case sokol__gfx__PixelFormat__etc2_rgb8a1: {
				_result_sokol__gfx__PixelFormat _t65 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__etc2_rgb8a1 }, (_result*)(&_t65), sizeof(sokol__gfx__PixelFormat));
				return _t65;
			}
			case sokol__gfx__PixelFormat__etc2_rgba8: {
				_result_sokol__gfx__PixelFormat _t66 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__etc2_rgba8 }, (_result*)(&_t66), sizeof(sokol__gfx__PixelFormat));
				return _t66;
			}
			case sokol__gfx__PixelFormat__etc2_srgb8a8: {
				_result_sokol__gfx__PixelFormat _t67 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__etc2_srgb8a8 }, (_result*)(&_t67), sizeof(sokol__gfx__PixelFormat));
				return _t67;
			}
			case sokol__gfx__PixelFormat__eac_r11: {
				_result_sokol__gfx__PixelFormat _t68 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__eac_r11 }, (_result*)(&_t68), sizeof(sokol__gfx__PixelFormat));
				return _t68;
			}
			case sokol__gfx__PixelFormat__eac_r11sn: {
				_result_sokol__gfx__PixelFormat _t69 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__eac_r11sn }, (_result*)(&_t69), sizeof(sokol__gfx__PixelFormat));
				return _t69;
			}
			case sokol__gfx__PixelFormat__eac_rg11: {
				_result_sokol__gfx__PixelFormat _t70 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__eac_rg11 }, (_result*)(&_t70), sizeof(sokol__gfx__PixelFormat));
				return _t70;
			}
			case sokol__gfx__PixelFormat__eac_rg11sn: {
				_result_sokol__gfx__PixelFormat _t71 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__eac_rg11sn }, (_result*)(&_t71), sizeof(sokol__gfx__PixelFormat));
				return _t71;
			}
			case sokol__gfx__PixelFormat__astc_4x4_rgba: {
				_result_sokol__gfx__PixelFormat _t72 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__astc_4x4_rgba }, (_result*)(&_t72), sizeof(sokol__gfx__PixelFormat));
				return _t72;
			}
			case sokol__gfx__PixelFormat__astc_4x4_srgba: {
				_result_sokol__gfx__PixelFormat _t73 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat__astc_4x4_srgba }, (_result*)(&_t73), sizeof(sokol__gfx__PixelFormat));
				return _t73;
			}
			case sokol__gfx__PixelFormat___num: {
				_result_sokol__gfx__PixelFormat _t74 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat___num }, (_result*)(&_t74), sizeof(sokol__gfx__PixelFormat));
				return _t74;
			}
			case sokol__gfx__PixelFormat___force_u32: {
				_result_sokol__gfx__PixelFormat _t75 = {0};
				_result_ok(&(sokol__gfx__PixelFormat[]) { sokol__gfx__PixelFormat___force_u32 }, (_result*)(&_t75), sizeof(sokol__gfx__PixelFormat));
				return _t75;
			}
		}
		
	}
	#endif
	#if 0
	{
	}
	#endif
	return (_result_sokol__gfx__PixelFormat){ .is_error=true, .err=_v_error(_S("invalid value")), .data={E_STRUCT} };
}
#if defined(_WIN32)
#else
#endif
string os__getenv(string key) {
	_option_string _t2 = os__getenv_opt(key);
	if (_t2.state != 0) {
		IError err = _t2.err;
		*(string*) _t2.data = _S("");
	}
	
 	string _t1 = (*(string*)_t2.data);
	return _t1;
}
_option_string os__getenv_opt(string key) {
	{
		#if defined(_WIN32)
		{
		}
		#else
		{
			char* s = getenv(((char*)(key.str)));
			if (s == ((void*)0)) {
				return (_option_string){ .state=2, .err=_const_none__, .data={E_STRUCT} };
			}
			_option_string _t3;
			_option_ok(&(string[]) { cstring_to_vstring(s) }, (_option*)(&_t3), sizeof(string));
			return _t3;
		}
		#endif
	}
	return (_option_string){.state=2, .err=_const_none__, .data={E_STRUCT}};
}
#if !defined(_WIN32)
#endif
int os__fd_close(int fd) {
	if (fd == -1) {
		return 0;
	}
	int _t2 = close(fd);
	return _t2;
}
VV_LOC string os__NotExpected_msg(os__NotExpected err) {
	return err.cause;
}
VV_LOC int os__NotExpected_code(os__NotExpected err) {
	return err.code;
}
VV_LOC _result_int os__fread(voidptr ptr, int item_size, int items, FILE* stream) {
	int nbytes = ((int)(fread(ptr, item_size, items, stream)));
	if (nbytes <= 0) {
		if (feof(stream) != 0) {
			return (_result_int){ .is_error=true, .err=I_os__Eof_to_Interface_IError(((os__Eof*)memdup(&(os__Eof){.Error = ((Error){E_STRUCT}),}, sizeof(os__Eof)))), .data={E_STRUCT} };
		}
		if (ferror(stream) != 0) {
			return (_result_int){ .is_error=true, .err=_v_error(_S("file read error")), .data={E_STRUCT} };
		}
	}
	_result_int _t3 = {0};
	_result_ok(&(int[]) { nbytes }, (_result*)(&_t3), sizeof(int));
	return _t3;
}
string os__FileNotOpenedError_msg(os__FileNotOpenedError err) {
	return _S("os: file not opened");
}
string os__SizeOfTypeIs0Error_msg(os__SizeOfTypeIs0Error err) {
	return _S("os: size of type is 0");
}
_result_Array_u8 os__read_bytes(string path) {
	bool os__read_bytes_defer_0 = false;
	FILE* fp;
	_result_FILE_ptr _t1 = os__vfopen(path, _S("rb"));
	if (_t1.is_error) {
		_result_Array_u8 _t2 = {0};
		_t2.is_error = true;
		_t2.err = _t1.err;
		return _t2;
	}
	
 	fp = (*(FILE**)_t1.data);
	os__read_bytes_defer_0 = true;
	_result_int _t3 = os__find_cfile_size(fp);
	if (_t3.is_error) {
	if (os__read_bytes_defer_0) {
		fclose(fp);
	}
		_result_Array_u8 _t4 = {0};
		_t4.is_error = true;
		_t4.err = _t3.err;
		return _t4;
	}
	
 	int fsize = (*(int*)_t3.data);
	if (fsize == 0) {
		_result_strings__Builder _t5 = os__slurp_file_in_builder(fp);
		if (_t5.is_error) {
		if (os__read_bytes_defer_0) {
			fclose(fp);
		}
			_result_Array_u8 _t6 = {0};
			_t6.is_error = true;
			_t6.err = _t5.err;
			return _t6;
		}
		
 		strings__Builder sb = (*(strings__Builder*)_t5.data);
		_result_Array_u8 _t7 = {0};
		_result_ok(&(Array_u8[]) { strings__Builder_reuse_as_plain_u8_array(&sb) }, (_result*)(&_t7), sizeof(Array_u8));
		if (os__read_bytes_defer_0) {
			fclose(fp);
		}
		return _t7;
	}
	Array_u8 res = __new_array_with_default(fsize, 0, sizeof(u8), 0);
	int nr_read_elements = ((int)(fread(res.data, 1, fsize, fp)));
	if (nr_read_elements == 0 && fsize > 0) {
		_result_Array_u8 _t8 = (_result_Array_u8){ .is_error=true, .err=_v_error(_S("fread failed")), .data={E_STRUCT} };
		if (os__read_bytes_defer_0) {
			fclose(fp);
		}
		return _t8;
	}
	array_trim(&res, nr_read_elements);
	_result_Array_u8 _t9 = {0};
	_result_ok(&(Array_u8[]) { res }, (_result*)(&_t9), sizeof(Array_u8));
	if (os__read_bytes_defer_0) {
		fclose(fp);
	}
	return _t9;
}
VV_LOC _result_int os__find_cfile_size(FILE* fp) {
	int cseek = fseek(fp, 0, SEEK_END);
	isize raw_fsize = ftell(fp);
	if (raw_fsize != 0 && cseek != 0) {
		return (_result_int){ .is_error=true, .err=_v_error(_S("fseek failed")), .data={E_STRUCT} };
	}
	if (cseek != 0 && raw_fsize < 0) {
		return (_result_int){ .is_error=true, .err=_v_error(_S("ftell failed")), .data={E_STRUCT} };
	}
	int len = ((int)(raw_fsize));
	if (((i64)(len)) < raw_fsize) {
		return (_result_int){ .is_error=true, .err=_v_error(str_intp(3, _MOV((StrIntpData[]){{_S("int("), 0xfe09, {.d_i64 = raw_fsize}}, {_S(") cast results in "), 0xfe07, {.d_i32 = len}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={E_STRUCT} };
	}
	rewind(fp);
	_result_int _t4 = {0};
	_result_ok(&(int[]) { len }, (_result*)(&_t4), sizeof(int));
	return _t4;
}
VV_LOC _result_strings__Builder os__slurp_file_in_builder(FILE* fp) {
	Array_fixed_u8_4096 buf = {0};
	strings__Builder sb = strings__new_builder(_const_os__buf_size);
	for (;;) {
		_result_int _t1 = os__fread(&buf[0], 1, _const_os__buf_size, fp);
		if (_t1.is_error) {
			IError err = _t1.err;
			if ((err)._typ == _IError_os__Eof_index) {
				break;
			}
			strings__Builder_free(&sb);
			return (_result_strings__Builder){ .is_error=true, .err=err, .data={E_STRUCT} };
		}
		
 		int read_bytes = (*(int*)_t1.data);
		strings__Builder_write_ptr(&sb, &buf[0], read_bytes);
	}
	_result_strings__Builder _t3 = {0};
	_result_ok(&(strings__Builder[]) { sb }, (_result*)(&_t3), sizeof(strings__Builder));
	return _t3;
}
_result_FILE_ptr os__vfopen(string path, string mode) {
	if ((path).len == 0) {
		return (_result_FILE_ptr){ .is_error=true, .err=_v_error(_S("vfopen called with \"\"")), .data={E_STRUCT} };
	}
	voidptr fp = ((void*)0);
	#if defined(_WIN32)
	{
	}
	#else
	{
		fp = fopen(((char*)(path.str)), ((char*)(mode.str)));
	}
	#endif
	if (isnil(((voidptr)(fp)))) {
		return (_result_FILE_ptr){ .is_error=true, .err=os__error_posix(((os__SystemError){.msg = str_intp(2, _MOV((StrIntpData[]){{_S("failed to open file \""), 0xfe10, {.d_s = path}}, {_S("\""), 0, { .d_c = 0 }}})),.code = _const_os__error_code_not_set,})), .data={E_STRUCT} };
	} else {
		_result_FILE_ptr _t4 = {0};
		_result_ok(&(FILE*[]) { fp }, (_result*)(&_t4), sizeof(FILE*));
		return _t4;
	}
	return (_result_FILE_ptr){0};
}
int os__fileno(voidptr cfile) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		FILE* cfile_casted = ((FILE*)(((void*)0)));
		cfile_casted = cfile;
		int _t2 = fileno(cfile_casted);
		return _t2;
	}
	#endif
	return 0;
}
VV_LOC voidptr os__vpopen(string path) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		u8* cpath = path.str;
		voidptr _t2 = popen(((char*)(cpath)), "r");
		return _t2;
	}
	#endif
	return 0;
}
VV_LOC multi_return_int_bool os__posix_wait4_to_exit_status(int waitret) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		int ret = 0;
		bool is_signaled = true;
		if (WIFEXITED(waitret)) {
			ret = WEXITSTATUS(waitret);
			is_signaled = false;
		} else if (WIFSIGNALED(waitret)) {
			ret = WTERMSIG(waitret);
			is_signaled = true;
		}
		return (multi_return_int_bool){.arg0=ret, .arg1=is_signaled};
	}
	#endif
	return (multi_return_int_bool){0};
}
string os__posix_get_error_msg(int code) {
	char* ptr_text = strerror(code);
	if (ptr_text == 0) {
		return _S("");
	}
	return tos3(ptr_text);
}
VV_LOC int os__vpclose(voidptr f) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		multi_return_int_bool mr_9755 = os__posix_wait4_to_exit_status(pclose(f));
		int ret = mr_9755.arg0;
		return ret;
	}
	#endif
	return 0;
}
bool os__exists(string path) {
	#if defined(_WIN32)
	{
	}
	#else
	{
		return access(((char*)(path.str)), _const_os__f_ok) != -1;
	}
	#endif
	return 0;
}
inline IError os__error_posix(os__SystemError e) {
	int code = (e.code == _const_os__error_code_not_set ? (errno) : (e.code));
	string message = ((e.msg).len == 0 ? (os__posix_get_error_msg(code)) : (e.msg));
	return error_with_code(message, code);
}
void os__Result_free(os__Result* result) {
	string_free(&result->output);
}
string os__file_name(string path) {
	string _t1; /* if prepend */
	if (string_contains(path, _S("/"))) {
		_t1 = _S("/");
	} else {
		_t1 = _S("\\");
	}
	string detected_path_separator = _t1;
	string _t2 = string_all_after_last(path, detected_path_separator);
		string_free(&detected_path_separator); // autofreed var os false
return _t2;
	string_free(&detected_path_separator); // autofreed var os false
}
string os__ExecutableNotFoundError_msg(os__ExecutableNotFoundError err) {
	return _S("os: failed to find executable");
}
bool os__is_file(string path) {
	return os__exists(path) && !os__is_dir(path);
}
os__Result os__execute(string cmd) {
	bool os__execute_defer_0 = false;
	string pcmd;
	bool os__execute_defer_1 = false;
	strings__Builder res;
	pcmd = str_intp(2, _MOV((StrIntpData[]){{_S("exec 2>&1;"), 0xfe10, {.d_s = cmd}}, {_SLIT0, 0, { .d_c = 0 }}}));
	os__execute_defer_0 = true;
	voidptr f = os__vpopen(pcmd);
	if (isnil(f)) {
		os__Result _t1 = ((os__Result){.exit_code = -1,.output = str_intp(2, _MOV((StrIntpData[]){{_S("exec(\""), 0xfe10, {.d_s = cmd}}, {_S("\") failed"), 0, { .d_c = 0 }}})),});
		if (os__execute_defer_0) {
			string_free(&pcmd);
		}
		return _t1;
	}
	int fd = os__fileno(f);
	res = strings__new_builder(1024);
	os__execute_defer_1 = true;
	Array_fixed_u8_4096 buf = {0};
	{
		u8* pbuf = &buf[0];
		for (;;) {
			int len = read(fd, pbuf, 4096);
			if (len == 0) {
				break;
			}
			strings__Builder_write_ptr(&res, pbuf, len);
		}
	}
	string soutput = strings__Builder_str(&res);
	int exit_code = os__vpclose(f);
	os__Result _t2 = ((os__Result){.exit_code = exit_code,.output = soutput,});
	if (os__execute_defer_1) {
		strings__Builder_free(&res);
	}
	if (os__execute_defer_0) {
		string_free(&pcmd);
	}
	return _t2;
}
void os__Process_close(os__Process* p) {
	if (p->status == os__ProcessState__not_started || p->status == os__ProcessState__closed) {
		return;
	}
	p->status = os__ProcessState__closed;
	#if !defined(_WIN32)
	{
		for (int i = 0; i < 3; ++i) {
			if (p->stdio_fd[v_fixed_index(i, 3)] != 0) {
				os__fd_close(p->stdio_fd[v_fixed_index(i, 3)]);
			}
		}
	}
	#endif
}
void os__Process_free(os__Process* p) {
	os__Process_close(p);
	{
		string_free(&p->filename);
		string_free(&p->err);
		Array_string_free(&p->args);
		Array_string_free(&p->env);
	}
}
_result_os__Stat os__stat(string path) {
	struct stat s;
	{
		int res = stat(((char*)(path.str)), &s);
		if (res != 0) {
			return (_result_os__Stat){ .is_error=true, .err=os__error_posix(((os__SystemError){.msg = (string){.str=(byteptr)"", .is_lit=1},.code = _const_os__error_code_not_set,})), .data={E_STRUCT} };
		}
		_result_os__Stat _t2 = {0};
		_result_ok(&(os__Stat[]) { ((os__Stat){
			.dev = s.st_dev,
			.inode = s.st_ino,
			.mode = s.st_mode,
			.nlink = s.st_nlink,
			.uid = s.st_uid,
			.gid = s.st_gid,
			.rdev = s.st_rdev,
			.size = s.st_size,
			.atime = s.st_atime,
			.mtime = s.st_mtime,
			.ctime = s.st_ctime,
		}) }, (_result*)(&_t2), sizeof(os__Stat));
		return _t2;
	}
	return (_result_os__Stat){0};
}
os__FileType os__Stat_get_filetype(os__Stat st) {
	u32 _t1 = (st.mode & ((u32)(S_IFMT)));
	
	if (_t1 == (((u32)(S_IFREG)))) {
		return os__FileType__regular;
	}
	else if (_t1 == (((u32)(S_IFDIR)))) {
		return os__FileType__directory;
	}
	else if (_t1 == (((u32)(S_IFCHR)))) {
		return os__FileType__character_device;
	}
	else if (_t1 == (((u32)(S_IFBLK)))) {
		return os__FileType__block_device;
	}
	else if (_t1 == (((u32)(S_IFIFO)))) {
		return os__FileType__fifo;
	}
	else if (_t1 == (((u32)(S_IFLNK)))) {
		return os__FileType__symbolic_link;
	}
	else if (_t1 == (((u32)(S_IFSOCK)))) {
		return os__FileType__socket;
	}
	else {
		return os__FileType__unknown;
	}
	return 0;
}
bool os__is_dir(string path) {
	_result_os__Stat _t1 = os__stat(path);
	if (_t1.is_error) {
		IError err = _t1.err;
		return false;
	}
	
 	os__Stat attr = (*(os__Stat*)_t1.data);
	return os__Stat_get_filetype(attr) == os__FileType__directory;
}
sokol__gfx__Desc sokol__sapp__create_desc(void) {
	return ((sokol__gfx__Desc){._start_canary = 0,.buffer_pool_size = 0,.image_pool_size = 1000,.sampler_pool_size = 0,.shader_pool_size = 0,.pipeline_pool_size = 0,.attachments_pool_size = 0,.uniform_buffer_size = 0,.max_commit_listeners = 0,.disable_validation = 0,.mtl_force_managed_storage_mode = 0,.mtl_use_command_buffer_with_retained_references = 0,.wgpu_disable_bindgroups_cache = 0,.wgpu_bindgroups_cache_size = 0,.allocator = (sg_allocator){.alloc_fn = ((void*)0),.free_fn = ((void*)0),},.logger = (sg_logger){.func = ((void*)0),},.environment = sokol__sapp__glue_environment(),._end_canary = 0,});
}
sokol__gfx__Pass sokol__sapp__create_default_pass(sokol__gfx__PassAction action) {
	return ((sokol__gfx__Pass){._start_canary = 0,.action = action,.attachments = {0},.swapchain = sokol__sapp__glue_swapchain(),.label = ((void*)0),._end_canary = 0,});
}
sokol__gfx__Environment sokol__sapp__glue_environment(void) {
	sokol__gfx__Environment env = ((sokol__gfx__Environment){.defaults = {0},.metal = {0},.d3d11 = {0},.wgpu = {0},});
	vmemset(&env, 0, ((int)(sizeof(sokol__gfx__Environment))));
	_result_sokol__gfx__PixelFormat _t1 = sokol__gfx__PixelFormat__static__from_T_int(sokol__sapp__color_format());
	if (_t1.is_error) {
		IError err = _t1.err;
		*(sokol__gfx__PixelFormat*) _t1.data = sokol__gfx__PixelFormat__none;
	}
	
 	env.defaults.color_format = (*(sokol__gfx__PixelFormat*)_t1.data);
	_result_sokol__gfx__PixelFormat _t2 = sokol__gfx__PixelFormat__static__from_T_int(sokol__sapp__depth_format());
	if (_t2.is_error) {
		IError err = _t2.err;
		*(sokol__gfx__PixelFormat*) _t2.data = sokol__gfx__PixelFormat__none;
	}
	
 	env.defaults.depth_format = (*(sokol__gfx__PixelFormat*)_t2.data);
	env.defaults.sample_count = sokol__sapp__sample_count();
	#if defined(__APPLE__) && !defined(CUSTOM_DEFINE_darwin_sokol_glcore33)
	{
		env.metal.device = sokol__sapp__metal_get_device();
	}
	#endif
	return env;
}
sokol__gfx__Swapchain sokol__sapp__glue_swapchain(void) {
	sokol__gfx__Swapchain swapchain = ((sokol__gfx__Swapchain){.width = 0,.height = 0,.sample_count = 0,.color_format = 0,.depth_format = 0,.metal = {0},.d3d11 = {0},.wgpu = {0},.gl = {0},});
	vmemset(&swapchain, 0, ((int)(sizeof(sokol__gfx__Swapchain))));
	swapchain.width = sokol__sapp__width();
	swapchain.height = sokol__sapp__height();
	swapchain.sample_count = sokol__sapp__sample_count();
	_result_sokol__gfx__PixelFormat _t1 = sokol__gfx__PixelFormat__static__from_T_int(sokol__sapp__color_format());
	if (_t1.is_error) {
		IError err = _t1.err;
		*(sokol__gfx__PixelFormat*) _t1.data = sokol__gfx__PixelFormat__none;
	}
	
 	swapchain.color_format = (*(sokol__gfx__PixelFormat*)_t1.data);
	_result_sokol__gfx__PixelFormat _t2 = sokol__gfx__PixelFormat__static__from_T_int(sokol__sapp__depth_format());
	if (_t2.is_error) {
		IError err = _t2.err;
		*(sokol__gfx__PixelFormat*) _t2.data = sokol__gfx__PixelFormat__none;
	}
	
 	swapchain.depth_format = (*(sokol__gfx__PixelFormat*)_t2.data);
	#if defined(__APPLE__) && !defined(CUSTOM_DEFINE_darwin_sokol_glcore33)
	{
		swapchain.metal.current_drawable = sokol__sapp__metal_get_current_drawable();
		swapchain.metal.depth_stencil_texture = sokol__sapp__metal_get_depth_stencil_texture();
		swapchain.metal.msaa_color_texture = sokol__sapp__metal_get_msaa_color_texture();
	}
	#else
	{
	}
	#endif
	return swapchain;
}
inline int sokol__sapp__width(void) {
	int _t1 = sapp_width();
	return _t1;
}
inline int sokol__sapp__height(void) {
	int _t1 = sapp_height();
	return _t1;
}
inline int sokol__sapp__color_format(void) {
	int _t1 = sapp_color_format();
	return _t1;
}
inline int sokol__sapp__depth_format(void) {
	int _t1 = sapp_depth_format();
	return _t1;
}
inline int sokol__sapp__sample_count(void) {
	int _t1 = sapp_sample_count();
	return _t1;
}
inline f32 sokol__sapp__dpi_scale(void) {
	f32 _t1 = sapp_dpi_scale();
	return _t1;
}
inline f64 sokol__sapp__frame_duration(void) {
	f64 _t1 = sapp_frame_duration();
	return _t1;
}
void sokol__sapp__run(sokol__sapp__Desc* desc) {
	if (desc->allocator.alloc_fn == (voidptr)((void*)0) && desc->allocator.free_fn == (voidptr)((void*)0)) {
		{
			desc->allocator.alloc_fn = (voidptr)sokol__memory__salloc;
			desc->allocator.free_fn = (voidptr)sokol__memory__sfree;
			desc->allocator.user_data = ((voidptr)(0x10005a44));
		}
	}
	if (desc->logger.func == (voidptr)((void*)0)) {
		{
			desc->logger.func = (voidptr)sokol__memory__slog;
		}
	}
	g_desc = *desc;
	sapp_run(desc);
}
inline voidptr sokol__sapp__metal_get_device(void) {
	return ((voidptr)(sapp_metal_get_device()));
}
voidptr sokol__sapp__metal_get_current_drawable(void) {
	return ((voidptr)(sapp_metal_get_current_drawable()));
}
voidptr sokol__sapp__metal_get_depth_stencil_texture(void) {
	return ((voidptr)(sapp_metal_get_depth_stencil_texture()));
}
voidptr sokol__sapp__metal_get_msaa_color_texture(void) {
	return ((voidptr)(sapp_metal_get_msaa_color_texture()));
}
string C__sapp_event_str(sapp_event* e) {
	return str_intp(3, _MOV((StrIntpData[]){{_S("evt: frame_count="), 0xfe08, {.d_u64 = e->frame_count}}, {_S(", type="), 0xfe10, {.d_s = sokol__sapp__EventType_str(e->type)}}, {_SLIT0, 0, { .d_c = 0 }}}));
}
_result_void sokol__sapp__screenshot_png(string path) {
	sokol__sapp__Screenshot* ss = sokol__sapp__screenshot_window();
	stbi__set_flip_vertically_on_write(true);
	_result_void _t1 = stbi__stbi_write_png(path, ss->width, ss->height, 4, ss->pixels, (int)(ss->width * 4));
	if (_t1.is_error) {
		_result_void _t2 = {0};
		_t2.is_error = true;
		_t2.err = _t1.err;
		return _t2;
	}
	
 ;
	sokol__sapp__Screenshot_destroy(ss);
	return (_result_void){0};
}
sokol__sapp__Screenshot* sokol__sapp__screenshot_window(void) {
	int img_width = sokol__sapp__width();
	int img_height = sokol__sapp__height();
	int img_size = (int)((int)(img_width * img_height) * 4);
	u8* img_pixels = ((u8*)(_v_malloc(img_size)));
	v_sapp_gl_read_rgba_pixels(0, 0, img_width, img_height, img_pixels);
	return ((sokol__sapp__Screenshot*)memdup(&(sokol__sapp__Screenshot){.width = img_width,.height = img_height,.size = img_size,.pixels = img_pixels,}, sizeof(sokol__sapp__Screenshot)));
}
void sokol__sapp__Screenshot_free(sokol__sapp__Screenshot* ss) {
	{
		_v_free(ss->pixels);
		ss->pixels = ((u8*)(((void*)0)));
	}
}
void sokol__sapp__Screenshot_destroy(sokol__sapp__Screenshot* ss) {
	sokol__sapp__Screenshot_free(ss);
	_v_free(ss);
}
void sokol__sgl__setup(sokol__sgl__Desc* desc) {
	if (desc->allocator.alloc_fn == (voidptr)((void*)0) && desc->allocator.free_fn == (voidptr)((void*)0)) {
		{
			desc->allocator.alloc_fn = (voidptr)sokol__memory__salloc;
			desc->allocator.free_fn = (voidptr)sokol__memory__sfree;
			desc->allocator.user_data = ((voidptr)(0x10000561));
		}
	}
	if (desc->logger.func == (voidptr)((void*)0)) {
		{
			desc->logger.func = (voidptr)sokol__memory__slog;
		}
	}
	sgl_setup(desc);
}
inline f32 sokol__sgl__rad(f32 deg) {
	f32 _t1 = sgl_rad(deg);
	return _t1;
}
inline sokol__sgl__Pipeline sokol__sgl__make_pipeline(sokol__gfx__PipelineDesc* desc) {
	sokol__sgl__Pipeline _t1 = sgl_make_pipeline(desc);
	return _t1;
}
inline void sokol__sgl__defaults(void) {
	sgl_defaults();
}
inline void sokol__sgl__viewport(int x, int y, int w, int h, bool origin_top_left) {
	sgl_viewport(x, y, w, h, origin_top_left);
}
inline void sokol__sgl__enable_texture(void) {
	sgl_enable_texture();
}
inline void sokol__sgl__disable_texture(void) {
	sgl_disable_texture();
}
inline void sokol__sgl__texture(sokol__gfx__Image img, sokol__gfx__Sampler smp) {
	sgl_texture(img, smp);
}
inline void sokol__sgl__load_pipeline(sokol__sgl__Pipeline pip) {
	sgl_load_pipeline(pip);
}
inline void sokol__sgl__matrix_mode_modelview(void) {
	sgl_matrix_mode_modelview();
}
inline void sokol__sgl__matrix_mode_projection(void) {
	sgl_matrix_mode_projection();
}
inline void sokol__sgl__rotate(f32 angle_rad, f32 x, f32 y, f32 z) {
	sgl_rotate(angle_rad, x, y, z);
}
inline void sokol__sgl__translate(f32 x, f32 y, f32 z) {
	sgl_translate(x, y, z);
}
inline void sokol__sgl__ortho(f32 l, f32 r, f32 b, f32 t, f32 n, f32 f) {
	sgl_ortho(l, r, b, t, n, f);
}
inline void sokol__sgl__perspective(f32 fov_y, f32 aspect, f32 z_near, f32 z_far) {
	sgl_perspective(fov_y, aspect, z_near, z_far);
}
inline void sokol__sgl__c3f(f32 r, f32 g, f32 b) {
	sgl_c3f(r, g, b);
}
inline void sokol__sgl__c4b(u8 r, u8 g, u8 b, u8 a) {
	sgl_c4b(r, g, b, a);
}
inline void sokol__sgl__begin_quads(void) {
	sgl_begin_quads();
}
inline void sokol__sgl__v2f(f32 x, f32 y) {
	sgl_v2f(x, y);
}
inline void sokol__sgl__v3f_t2f(f32 x, f32 y, f32 z, f32 u, f32 v) {
	sgl_v3f_t2f(x, y, z, u, v);
}
inline void sokol__sgl__end(void) {
	sgl_end();
}
inline void sokol__sgl__draw(void) {
	sgl_draw();
}
string os__font__default(void) {
	string env_font = os__getenv(_S("VUI_FONT"));
	if ((env_font).len != 0 && os__exists(env_font)) {
		return env_font;
	}
	string_free(&env_font);
	Array_string fonts = new_array_from_c_array(3, 3, sizeof(string), _MOV((string[3]){_S("/System/Library/Fonts/SFNS.ttf"), _S("/System/Library/Fonts/SFNSText.ttf"), _S("/Library/Fonts/Arial.ttf")}));
	for (int _t2 = 0; _t2 < fonts.len; ++_t2) {
		string font = ((string*)fonts.data)[_t2];
		if (os__is_file(font)) {
			;
			return font;
		}
	}
	Array_string_free(&fonts);
	os__Result fm = os__execute(_S("fc-match --format='%{file}\n' -s"));
	if (fm.exit_code == 0) {
		Array_string lines = string_split(fm.output, _S("\n"));
		for (int _t4 = 0; _t4 < lines.len; ++_t4) {
			string l = ((string*)lines.data)[_t4];
			if (!string_contains(l, _S(".ttc"))) {
				;
				return l;
			}
		}
		Array_string_free(&lines);
	} else {
		_v_panic(_S("fc-match failed to fetch system font"));
		VUNREACHABLE();
	}
	os__Result_free(&fm);
	_v_panic(_S("failed to init the font"));
	VUNREACHABLE();
	return (string){.str=(byteptr)"", .is_lit=1};
}
string os__font__get_path_variant(string font_path, os__font__Variant variant) {
	bool os__font__get_path_variant_defer_0 = false;
	string file;
	bool os__font__get_path_variant_defer_1 = false;
	string fpath;
	bool os__font__get_path_variant_defer_2 = false;
	string flower;
	file = os__file_name(font_path);
	os__font__get_path_variant_defer_0 = true;
	fpath = string_replace(font_path, file, _S(""));
	os__font__get_path_variant_defer_1 = true;
	os__font__mut_replace((voidptr)&file, _S(".ttf"), _S(""));
	flower = string_to_lower(file);
	os__font__get_path_variant_defer_2 = true;

	if (variant == (os__font__Variant__normal)) {
	}
	else if (variant == (os__font__Variant__bold)) {
		if (string_ends_with(fpath, _S("-Regular"))) {
			os__font__mut_replace((voidptr)&file, _S("-Regular"), _S("-Bold"));
		} else if (string_starts_with(file, _S("DejaVuSans"))) {
			os__font__mut_plus((voidptr)&file, _S("-Bold"));
		} else if (string_starts_with(flower, _S("arial"))) {
			os__font__mut_plus((voidptr)&file, _S("bd"));
		} else {
			os__font__mut_plus((voidptr)&file, _S("-bold"));
		}
		if (os__exists(_S("SFNS-bold"))) {
			os__font__mut_assign((voidptr)&file, _S("SFNS-bold"));
		}
	}
	else if (variant == (os__font__Variant__italic)) {
		if (string_ends_with(file, _S("-Regular"))) {
			os__font__mut_replace((voidptr)&file, _S("-Regular"), _S("-Italic"));
		} else if (string_starts_with(file, _S("DejaVuSans"))) {
			os__font__mut_plus((voidptr)&file, _S("-Oblique"));
		} else if (string_starts_with(flower, _S("arial"))) {
			os__font__mut_plus((voidptr)&file, _S("i"));
		} else {
			os__font__mut_plus((voidptr)&file, _S("Italic"));
		}
	}
	else if (variant == (os__font__Variant__mono)) {
		if (!string_ends_with(file, _S("Mono-Regular")) && string_ends_with(file, _S("-Regular"))) {
			os__font__mut_replace((voidptr)&file, _S("-Regular"), _S("Mono-Regular"));
		} else if (string_starts_with(flower, _S("arial"))) {
		} else {
			os__font__mut_plus((voidptr)&file, _S("Mono"));
		}
	}
	string res = str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = fpath}}, {_SLIT0, 0xfe10, {.d_s = file}}, {_S(".ttf"), 0, { .d_c = 0 }}}));
	string _t1 = res;
	if (os__font__get_path_variant_defer_2) {
		string_free(&flower);
	}
	if (os__font__get_path_variant_defer_1) {
		string_free(&fpath);
	}
	if (os__font__get_path_variant_defer_0) {
		string_free(&file);
	}
	return _t1;
}
VV_LOC void os__font__mut_replace(string* s, string find, string replacement) {
	string __v_new = string_replace((*s), find, replacement);
	string_free(s);
	{
		*s = __v_new;
	}
}
VV_LOC void os__font__mut_plus(string* s, string tail) {
	string __v_new = string__plus((*s), tail);
	string_free(s);
	{
		*s = __v_new;
	}
}
VV_LOC void os__font__mut_assign(string* s, string value) {
	string_free(s);
	{
		*s = string_clone(value);
	}
}
inline fontstash__Context* sokol__sfons__create(int width, int height, int flags) {
	sfons_allocator_t allocator = ((sfons_allocator_t){.alloc_fn = (voidptr)sokol__memory__salloc,.free_fn = (voidptr)sokol__memory__sfree,.user_data = ((voidptr)(0x100005f0)),});
	sfons_desc_t desc = ((sfons_desc_t){.width = width,.height = height,.allocator = allocator,});
	fontstash__Context* _t1 = sfons_create(&desc);
	return _t1;
}
inline u32 sokol__sfons__rgba(u8 r, u8 g, u8 b, u8 a) {
	u32 _t1 = sfons_rgba(r, g, b, a);
	return _t1;
}
inline void sokol__sfons__flush(fontstash__Context* ctx) {
	sfons_flush(ctx);
}
void gg__Context_draw_rect_filled(gg__Context* ctx, f32 x, f32 y, f32 w, f32 h, gx__Color c) {
	if (ctx->native_rendering) {
		darwin_draw_rect(x, (f32)(ctx->height - ((f32)(y + h))), w, h, c);
		return;
	}
	if (c.a != 255) {
		sokol__sgl__load_pipeline(ctx->pipeline->alpha);
	}
	sokol__sgl__c4b(c.r, c.g, c.b, c.a);
	sokol__sgl__begin_quads();
	sokol__sgl__v2f((f32)(x * ctx->scale), (f32)(y * ctx->scale));
	sokol__sgl__v2f((f32)(((f32)(x + w)) * ctx->scale), (f32)(y * ctx->scale));
	sokol__sgl__v2f((f32)(((f32)(x + w)) * ctx->scale), (f32)(((f32)(y + h)) * ctx->scale));
	sokol__sgl__v2f((f32)(x * ctx->scale), (f32)(((f32)(y + h)) * ctx->scale));
	sokol__sgl__end();
}
VV_LOC void gg__PipelineContainer_init_pipeline(gg__PipelineContainer* container) {
	sokol__gfx__PipelineDesc alpha_pipdesc = ((sokol__gfx__PipelineDesc){.shader = {0},.layout = {0},.depth = {0},.stencil = {0},.color_count = 0,.colors = {{0}, {0}, {0}, {0}},.primitive_type = 0,.index_type = 0,.cull_mode = 0,.face_winding = 0,.sample_count = 0,.blend_color = {0},.alpha_to_coverage_enabled = 0,.label = ((char*)(((void*)0))),});
	vmemset(&alpha_pipdesc, 0, ((int)(sizeof(sokol__gfx__PipelineDesc))));
	alpha_pipdesc.label = "alpha-pipeline";
	alpha_pipdesc.colors[0] = ((sokol__gfx__ColorTargetState){.pixel_format = 0,.write_mask = 0,.blend = ((sokol__gfx__BlendState){.enabled = true,.src_factor_rgb = sokol__gfx__BlendFactor__src_alpha,.dst_factor_rgb = sokol__gfx__BlendFactor__one_minus_src_alpha,.op_rgb = 0,.src_factor_alpha = 0,.dst_factor_alpha = 0,.op_alpha = 0,}),});
	container->alpha = sokol__sgl__make_pipeline(&alpha_pipdesc);
	sokol__gfx__PipelineDesc add_pipdesc = ((sokol__gfx__PipelineDesc){.shader = {0},.layout = {0},.depth = {0},.stencil = {0},.color_count = 0,.colors = {{0}, {0}, {0}, {0}},.primitive_type = 0,.index_type = 0,.cull_mode = 0,.face_winding = 0,.sample_count = 0,.blend_color = {0},.alpha_to_coverage_enabled = 0,.label = ((char*)(((void*)0))),});
	vmemset(&add_pipdesc, 0, ((int)(sizeof(sokol__gfx__PipelineDesc))));
	add_pipdesc.label = "additive-pipeline";
	add_pipdesc.colors[0] = ((sokol__gfx__ColorTargetState){.pixel_format = 0,.write_mask = 0,.blend = ((sokol__gfx__BlendState){.enabled = true,.src_factor_rgb = sokol__gfx__BlendFactor__src_alpha,.dst_factor_rgb = sokol__gfx__BlendFactor__one,.op_rgb = 0,.src_factor_alpha = 0,.dst_factor_alpha = 0,.op_alpha = 0,}),});
	container->add = sokol__sgl__make_pipeline(&add_pipdesc);
}
VV_LOC void gg__gg_init_sokol_window(voidptr user_data) {
	gg__Context* ctx = ((gg__Context*)(user_data));
	sokol__gfx__Desc desc = sokol__sapp__create_desc();
	sokol__gfx__setup(&desc);
	sokol__sgl__Desc sgl_desc = ((sokol__sgl__Desc){.max_vertices = 0,.max_commands = 0,.context_pool_size = 0,.pipeline_pool_size = 0,.color_format = 0,.depth_format = 0,.sample_count = 0,.face_winding = 0,.allocator = (sgl_allocator_t){.alloc_fn = ((void*)0),.free_fn = ((void*)0),},.logger = (sgl_logger_t){.func = ((void*)0),},});
	sokol__sgl__setup(&sgl_desc);
	gg__Context_set_scale(ctx);
	bool _t1;
	#if !defined(__ANDROID__)
		_t1 = os__is_file(ctx->config.font_path);
		;
	#else
	#endif
		bool exists = _t1;
	if ((ctx->config.font_path).len != 0 && !exists) {
		ctx->render_text = false;
	} else if ((ctx->config.font_path).len != 0 && exists) {
		_option_gg__FT_ptr _t2 = gg__new_ft(((gg__FTConfig){.font_path =  string_clone_static(ctx->config.font_path),.custom_bold_font_path =  string_clone_static(ctx->config.custom_bold_font_path),.scale = ctx->scale,.font_size = 0,.bytes_normal = __new_array(0, 0, sizeof(u8)),.bytes_bold = __new_array(0, 0, sizeof(u8)),.bytes_mono = __new_array(0, 0, sizeof(u8)),.bytes_italic = __new_array(0, 0, sizeof(u8)),}));
		if (_t2.state != 0) {
			IError err = _t2.err;
			string _t3 = IError_str(err); _v_panic(_t3); string_free(&_t3);
			;
			VUNREACHABLE();
		;
		}
		
 		ctx->ft = (*(gg__FT**)_t2.data);
		ctx->font_inited = true;
	} else {
		if (ctx->config.font_bytes_normal.len > 0) {
			_option_gg__FT_ptr _t4 = gg__new_ft(((gg__FTConfig){.font_path = (string){.str=(byteptr)"", .is_lit=1},.custom_bold_font_path = (string){.str=(byteptr)"", .is_lit=1},.scale = sokol__sapp__dpi_scale(),.font_size = 0,.bytes_normal =  array_clone_static_to_depth(ctx->config.font_bytes_normal, 0),.bytes_bold =  array_clone_static_to_depth(ctx->config.font_bytes_bold, 0),.bytes_mono =  array_clone_static_to_depth(ctx->config.font_bytes_mono, 0),.bytes_italic =  array_clone_static_to_depth(ctx->config.font_bytes_italic, 0),}));
			if (_t4.state != 0) {
				IError err = _t4.err;
				string _t5 = IError_str(err); _v_panic(_t5); string_free(&_t5);
				;
				VUNREACHABLE();
			;
			}
			
 			ctx->ft = (*(gg__FT**)_t4.data);
			ctx->font_inited = true;
		} else {
			string sfont = os__font__default();
			if ((ctx->config.font_path).len != 0) {
string _arg_expr_eprintln_1_10730 = str_intp(3, _MOV((StrIntpData[]){{_S("font file \""), 0xfe10, {.d_s = ctx->config.font_path}}, {_S("\" does not exist, the system font ("), 0xfe10, {.d_s = sfont}}, {_S(") was used instead."), 0, { .d_c = 0 }}}));// new af2 pre/* inserted before */
								eprintln(/*autofree arg*/_arg_expr_eprintln_1_10730);
				string_free(&_arg_expr_eprintln_1_10730); // autofreed var gg false
}
			_option_gg__FT_ptr _t6 = gg__new_ft(((gg__FTConfig){.font_path =  string_clone_static(sfont),.custom_bold_font_path =  string_clone_static(ctx->config.custom_bold_font_path),.scale = sokol__sapp__dpi_scale(),.font_size = 0,.bytes_normal = __new_array(0, 0, sizeof(u8)),.bytes_bold = __new_array(0, 0, sizeof(u8)),.bytes_mono = __new_array(0, 0, sizeof(u8)),.bytes_italic = __new_array(0, 0, sizeof(u8)),}));
			if (_t6.state != 0) {
				IError err = _t6.err;
				string _t7 = IError_str(err); _v_panic(_t7); string_free(&_t7);
				;
				VUNREACHABLE();
			;
			}
			
 			ctx->ft = (*(gg__FT**)_t6.data);
			ctx->font_inited = true;
			string_free(&sfont); // autofreed var gg false
}
	}
	ctx->pipeline = ((gg__PipelineContainer*)memdup(&(gg__PipelineContainer){.alpha = {0},.add = {0},}, sizeof(gg__PipelineContainer)));
	gg__PipelineContainer_init_pipeline(ctx->pipeline);
	ctx->timer = time__new_stopwatch(((time__StopWatchOptions){.auto_start = true,}));
	if (ctx->config.init_fn != (voidptr)((void*)0)) {
		ctx->config.init_fn(ctx->user_data);
	}
	if (ctx->native_rendering) {
		return;
	}
	for (int i = 0; i < ctx->image_cache.len; ++i) {
		if ((*(gg__Image*)array_get(ctx->image_cache, i)).simg.id == 0U) {
			gg__Image_init_sokol_image(&(*(gg__Image*)array_get(ctx->image_cache, i)));
		}
	}
}
VV_LOC void gg__gg_frame_fn(gg__Context* ctx) {
	bool gg__gg_frame_fn_defer_0 = false;
	ctx->frame++;
	if (ctx->config.frame_fn == (voidptr)((void*)0)) {
		return;
	}
	if (ctx->native_rendering) {
	}
	gg__gg_frame_fn_defer_0 = true;
	;
	;
	if (ctx->ui_mode && !ctx->needs_refresh) {
		ctx->ticks++;
		if (ctx->ticks > 3) {
			if (gg__gg_frame_fn_defer_0) {
				ctx->mouse_dx = 0;
				ctx->mouse_dy = 0;
				ctx->scroll_x = 0;
				ctx->scroll_y = 0;
			}
			return;
		}
	}
	ctx->config.frame_fn(ctx->user_data);
	ctx->needs_refresh = false;
if (gg__gg_frame_fn_defer_0) {
	ctx->mouse_dx = 0;
	ctx->mouse_dy = 0;
	ctx->scroll_x = 0;
	ctx->scroll_y = 0;
}
}
VV_LOC void gg__gg_event_fn(voidptr ce, voidptr user_data) {
	gg__Event* e = ((gg__Event*)(ce));
	gg__Context* ctx = ((gg__Context*)(user_data));
	if (ctx->ui_mode) {
		gg__Context_refresh_ui(ctx);
	}
	if (e->typ == sokol__sapp__EventType__mouse_down) {
		int bitplace = ((int)(e->mouse_button));
		ctx->mbtn_mask |= ((u8)((1 << bitplace)));
		ctx->mouse_buttons = ((gg__MouseButtons)(ctx->mbtn_mask));
	}
	if (e->typ == sokol__sapp__EventType__mouse_up) {
		int bitplace = ((int)(e->mouse_button));
		ctx->mbtn_mask &= ~(((u8)((1 << bitplace))));
		ctx->mouse_buttons = ((gg__MouseButtons)(ctx->mbtn_mask));
	}
	if (e->typ == sokol__sapp__EventType__mouse_move && e->mouse_button == gg__MouseButton__invalid) {
		if ((ctx->mbtn_mask & 0x01) > 0) {
			e->mouse_button = gg__MouseButton__left;
		}
		if ((ctx->mbtn_mask & 0x02) > 0) {
			e->mouse_button = gg__MouseButton__right;
		}
		if ((ctx->mbtn_mask & 0x04) > 0) {
			e->mouse_button = gg__MouseButton__middle;
		}
	}
	e->mouse_x /= ctx->scale;
	e->mouse_y /= ctx->scale;
	e->mouse_dx /= ctx->scale;
	e->mouse_dy /= ctx->scale;
	e->scroll_x /= ctx->scale;
	e->scroll_y /= ctx->scale;
	ctx->mouse_pos_x = ((int)(e->mouse_x));
	ctx->mouse_pos_y = ((int)(e->mouse_y));
	ctx->mouse_dx = ((int)(e->mouse_dx));
	ctx->mouse_dy = ((int)(e->mouse_dy));
	ctx->scroll_x = ((int)(e->scroll_x));
	ctx->scroll_y = ((int)(e->scroll_y));
	ctx->key_modifiers = ((gg__Modifier)(e->modifiers));
	ctx->key_repeat = e->key_repeat;
	if (e->typ == sokol__sapp__EventType__key_down || e->typ == sokol__sapp__EventType__key_up) {
		int key_idx = (int)(((int)(e->key_code)) % 512);
		bool prev = ctx->pressed_keys[v_fixed_index(key_idx, 512)];
		bool next = e->typ == sokol__sapp__EventType__key_down;
		ctx->pressed_keys[v_fixed_index(key_idx, 512)] = next;
		ctx->pressed_keys_edge[v_fixed_index(key_idx, 512)] = prev != next;
	}
	if (ctx->config.event_fn != (voidptr)((void*)0)) {
		ctx->config.event_fn(e, ctx->config.user_data);
	} else if (ctx->config.on_event != (voidptr)((void*)0)) {
		ctx->config.on_event(ctx->config.user_data, e);
	}
	switch (e->typ) {
		case sokol__sapp__EventType__mouse_move: {
			if (ctx->config.move_fn != (voidptr)((void*)0)) {
				ctx->config.move_fn(e->mouse_x, e->mouse_y, ctx->config.user_data);
			}
			break;
		}
		case sokol__sapp__EventType__mouse_down: {
			if (ctx->config.click_fn != (voidptr)((void*)0)) {
				ctx->config.click_fn(e->mouse_x, e->mouse_y, e->mouse_button, ctx->config.user_data);
			}
			break;
		}
		case sokol__sapp__EventType__mouse_up: {
			if (ctx->config.unclick_fn != (voidptr)((void*)0)) {
				ctx->config.unclick_fn(e->mouse_x, e->mouse_y, e->mouse_button, ctx->config.user_data);
			}
			break;
		}
		case sokol__sapp__EventType__mouse_leave: {
			if (ctx->config.leave_fn != (voidptr)((void*)0)) {
				ctx->config.leave_fn(e, ctx->config.user_data);
			}
			break;
		}
		case sokol__sapp__EventType__mouse_enter: {
			if (ctx->config.enter_fn != (voidptr)((void*)0)) {
				ctx->config.enter_fn(e, ctx->config.user_data);
			}
			break;
		}
		case sokol__sapp__EventType__mouse_scroll: {
			if (ctx->config.scroll_fn != (voidptr)((void*)0)) {
				ctx->config.scroll_fn(e, ctx->config.user_data);
			}
			break;
		}
		case sokol__sapp__EventType__key_down: {
			if (ctx->config.keydown_fn != (voidptr)((void*)0)) {
				ctx->config.keydown_fn(e->key_code, ((gg__Modifier)(e->modifiers)), ctx->config.user_data);
			}
			break;
		}
		case sokol__sapp__EventType__key_up: {
			if (ctx->config.keyup_fn != (voidptr)((void*)0)) {
				ctx->config.keyup_fn(e->key_code, ((gg__Modifier)(e->modifiers)), ctx->config.user_data);
			}
			break;
		}
		case sokol__sapp__EventType__char: {
			if (ctx->config.char_fn != (voidptr)((void*)0)) {
				ctx->config.char_fn(e->char_code, ctx->config.user_data);
			}
			break;
		}
		case sokol__sapp__EventType__resized: {
			ctx->scale = gg__dpi_scale();
			ctx->ft->scale = ctx->scale;
			if (ctx->config.resized_fn != (voidptr)((void*)0)) {
				ctx->config.resized_fn(e, ctx->config.user_data);
			}
			break;
		}
		case sokol__sapp__EventType__quit_requested: {
			if (ctx->config.quit_fn != (voidptr)((void*)0)) {
				ctx->config.quit_fn(e, ctx->config.user_data);
			}
			break;
		}
		case sokol__sapp__EventType__invalid:
		case sokol__sapp__EventType__touches_began:
		case sokol__sapp__EventType__touches_moved:
		case sokol__sapp__EventType__touches_ended:
		case sokol__sapp__EventType__touches_cancelled:
		case sokol__sapp__EventType__iconified:
		case sokol__sapp__EventType__restored:
		case sokol__sapp__EventType__focused:
		case sokol__sapp__EventType__unfocused:
		case sokol__sapp__EventType__suspended:
		case sokol__sapp__EventType__resumed:
		case sokol__sapp__EventType__clipboard_pasted:
		case sokol__sapp__EventType__files_dropped:
		case sokol__sapp__EventType__num:
		default: {
			{
				break;
			}
		}
	}
	
}
VV_LOC void gg__gg_cleanup_fn(voidptr user_data) {
	gg__Context* ctx = ((gg__Context*)(user_data));
	if (ctx->config.cleanup_fn != (voidptr)((void*)0)) {
		ctx->config.cleanup_fn(ctx->config.user_data);
	}
	sokol__gfx__shutdown();
}
gg__Context* gg__new_context(gg__Config cfg) {
	gg__Context* ctx = ((gg__Context*)memdup(&(gg__Context){.render_text = true,
		.image_cache = __new_array(0, 0, sizeof(gg__Image)),
		.needs_refresh = true,
		.ticks = 0,
		.native_rendering = cfg.native_rendering,
		.scale = 1.0,
		.width = cfg.width,
		.height = cfg.height,
		.clear_pass = {0},
		.window = ((sokol__sapp__Desc){
			.init_cb = ((void*)0),
			.frame_cb = ((void*)0),
			.cleanup_cb = ((void*)0),
			.event_cb = ((void*)0),
			.user_data = 0,
			.init_userdata_cb = (voidptr)gg__gg_init_sokol_window,
			.frame_userdata_cb = (voidptr)gg__gg_frame_fn,
			.cleanup_userdata_cb = (voidptr)gg__gg_cleanup_fn,
			.event_userdata_cb = (voidptr)gg__gg_event_fn,
			.width = cfg.width,
			.height = cfg.height,
			.sample_count = cfg.sample_count,
			.swap_interval = cfg.swap_interval,
			.high_dpi = true,
			.fullscreen = cfg.fullscreen,
			.alpha = 0,
			.window_title = ((char*)(cfg.window_title.str)),
			.enable_clipboard = 0,
			.clipboard_size = 0,
			.enable_dragndrop = cfg.enable_dragndrop,
			.max_dropped_files = cfg.max_dropped_files,
			.max_dropped_file_path_length = cfg.max_dropped_file_path_length,
			.icon = cfg.icon,
			.win32_console_utf8 = 0,
			.win32_console_create = 0,
			.win32_console_attach = 0,
			.html5_canvas_name = ((char*)(cfg.html5_canvas_name.str)),
			.html5_canvas_resize = 0,
			.html5_preserve_drawing_buffer = 0,
			.html5_premultiplied_alpha = 0,
			.html5_ask_leave_site = 0,
			.ios_keyboard_resizes_canvas = 0,
			.__v_native_render = cfg.native_rendering,
			.min_width = cfg.min_width,
			.min_height = cfg.min_height,
			.allocator = (sapp_allocator){.alloc_fn = ((void*)0),.free_fn = ((void*)0),},
			.logger = (sapp_logger){.func = ((void*)0),},
		}),
		.pipeline = ((void*)0),
		.config = cfg,
		.user_data = cfg.user_data,
		.ft = ((void*)0),
		.font_inited = 0,
		.ui_mode = cfg.ui_mode,
		.frame = 0,
		.timer = ((time__StopWatch){.elapsed = 0,.start = 0,.end = 0,}),
		.mbtn_mask = 0,
		.mouse_buttons = 0,
		.mouse_pos_x = 0,
		.mouse_pos_y = 0,
		.mouse_dx = 0,
		.mouse_dy = 0,
		.scroll_x = 0,
		.scroll_y = 0,
		.key_modifiers = 0,
		.key_repeat = 0,
		.pressed_keys = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		.pressed_keys_edge = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		.fps = ((gg__FPSConfig){.x = 0,.y = 0,.width = 0,.height = 0,.show = 0,.text_config = ((gx__TextCfg){.color = _const_gx__yellow,.size = 20,.align = gx__HorizontalAlign__center,.vertical_align = gx__VerticalAlign__middle,.max_width = 0,.family = (string){.str=(byteptr)"", .is_lit=1},.bold = 0,.mono = 0,.italic = 0,}),.background_color = ((gx__Color){.r = 0,.g = 0,.b = 0,.a = 128,}),}),
	}, sizeof(gg__Context)));
	gg__Context_set_bg_color(ctx, cfg.bg_color);
	return ctx;
}
void gg__Context_run(gg__Context* ctx) {
	ctx->window = ((sokol__sapp__Desc){.init_cb = (ctx->window).init_cb,.frame_cb = (ctx->window).frame_cb,.cleanup_cb = (ctx->window).cleanup_cb,.event_cb = (ctx->window).event_cb,.user_data = (voidptr)ctx,.init_userdata_cb = (ctx->window).init_userdata_cb,.frame_userdata_cb = (ctx->window).frame_userdata_cb,.cleanup_userdata_cb = (ctx->window).cleanup_userdata_cb,.event_userdata_cb = (ctx->window).event_userdata_cb,.width = (ctx->window).width,.height = (ctx->window).height,.sample_count = (ctx->window).sample_count,.swap_interval = (ctx->window).swap_interval,.high_dpi = (ctx->window).high_dpi,.fullscreen = (ctx->window).fullscreen,.alpha = (ctx->window).alpha,.window_title = (ctx->window).window_title,.enable_clipboard = (ctx->window).enable_clipboard,.clipboard_size = (ctx->window).clipboard_size,.enable_dragndrop = (ctx->window).enable_dragndrop,.max_dropped_files = (ctx->window).max_dropped_files,.max_dropped_file_path_length = (ctx->window).max_dropped_file_path_length,.icon = (ctx->window).icon,.win32_console_utf8 = (ctx->window).win32_console_utf8,.win32_console_create = (ctx->window).win32_console_create,.win32_console_attach = (ctx->window).win32_console_attach,.html5_canvas_name = (ctx->window).html5_canvas_name,.html5_canvas_resize = (ctx->window).html5_canvas_resize,.html5_preserve_drawing_buffer = (ctx->window).html5_preserve_drawing_buffer,.html5_premultiplied_alpha = (ctx->window).html5_premultiplied_alpha,.html5_ask_leave_site = (ctx->window).html5_ask_leave_site,.ios_keyboard_resizes_canvas = (ctx->window).ios_keyboard_resizes_canvas,.__v_native_render = (ctx->window).__v_native_render,.min_width = (ctx->window).min_width,.min_height = (ctx->window).min_height,.allocator = (ctx->window).allocator,.logger = (ctx->window).logger,});
	if (ctx->user_data == ((void*)0)) {
		ctx->user_data = ctx;
	}
	sokol__sapp__run(&ctx->window);
}
void gg__Context_set_bg_color(gg__Context* ctx, gx__Color c) {
	ctx->clear_pass = sokol__gfx__create_clear_pass_action((f32)(((f32)(c.r)) / ((f32)(255.0))), (f32)(((f32)(c.g)) / ((f32)(255.0))), (f32)(((f32)(c.b)) / ((f32)(255.0))), (f32)(((f32)(c.a)) / ((f32)(255.0))));
}
void gg__Context_refresh_ui(gg__Context* ctx) {
	ctx->needs_refresh = true;
	ctx->ticks = 0;
}
void gg__Context_begin(gg__Context* ctx) {
	if (ctx->render_text && ctx->font_inited) {
		gg__FT_flush(ctx->ft);
	}
	sokol__sgl__defaults();
	sokol__sgl__matrix_mode_projection();
	sokol__sgl__ortho(0.0, ((f32)(sokol__sapp__width())), ((f32)(sokol__sapp__height())), 0.0, -1.0, 1.0);
}
sokol__gfx__Pass gg__create_default_pass(sokol__gfx__PassAction action) {
	sokol__gfx__Pass _t1 = sokol__sapp__create_default_pass(action);
	return _t1;
}
void gg__Context_end(gg__Context* ctx, gg__EndOptions options) {
	#if defined(CUSTOM_DEFINE_show_fps)
	{
	}
	#else
	{
		if (ctx->fps.show) {
			gg__Context_show_fps(ctx);
		}
	}
	#endif
	sokol__gfx__Pass pass = ((options.how == (gg__EndEnum__clear))? (gg__create_default_pass(ctx->clear_pass)) : (gg__create_default_pass(_const_gg__dontcare_pass)));
	sokol__gfx__begin_pass((voidptr)&pass);
	sokol__sgl__draw();
	sokol__gfx__end_pass();
	sokol__gfx__commit();
}
void gg__Context_show_fps(gg__Context* ctx) {
	if (!ctx->font_inited) {
		return;
	}
	f64 frame_duration = sokol__sapp__frame_duration();
	sokol__sgl__defaults();
	sokol__sgl__matrix_mode_projection();
	sokol__sgl__ortho(0.0, ((f32)(sokol__sapp__width())), ((f32)(sokol__sapp__height())), 0.0, -1.0, 1.0);
	gg__Context_set_text_cfg(ctx, ctx->fps.text_config);
	string fps_text = int_str(((int)((f64)(((f64)(0.5)) + (f64)(((f64)(1.0)) / frame_duration)))));
	if (ctx->fps.width == 0) {
		gg__FPSConfig* fps = &ctx->fps;
		multi_return_int_int mr_23442 = gg__Context_text_size(ctx, _S("00"));
		fps->width = mr_23442.arg0;
		fps->height = mr_23442.arg1;
	}
	int char_width = (int)(ctx->fps.text_config.size / 2);
	int full_width = ctx->fps.width;
	if ((int)(char_width * fps_text.len) > ctx->fps.width) {
		full_width += (int)(((int)(fps_text.len - 2)) * char_width);
	}
	gg__Context_draw_rect_filled(ctx, ctx->fps.x, ctx->fps.y, (int)(full_width + 2), (int)(ctx->fps.height + 4), ctx->fps.background_color);
	gg__Context_draw_text(ctx, (int)((int)(ctx->fps.x + (int)(full_width / 2)) + 1), (int)((int)(ctx->fps.y + (int)(ctx->fps.height / 2)) + 2), fps_text, ctx->fps.text_config);
	string_free(&fps_text); // autofreed var gg false
}
VV_LOC void gg__Context_set_scale(gg__Context* ctx) {
	f32 s = sokol__sapp__dpi_scale();
	if (s < ((f32)(0.1))) {
		s = 1.0;
	}
	ctx->scale = s;
}
f32 gg__dpi_scale(void) {
	f32 s = sokol__sapp__dpi_scale();
	if (s < ((f32)(0.1))) {
		s = 1.0;
	}
	return s;
}
gg__Size gg__window_size_real_pixels(void) {
	return ((gg__Size){.width = sokol__sapp__width(),.height = sokol__sapp__height(),});
}
gg__Image* gg__Image_init_sokol_image(gg__Image* img) {
	sokol__gfx__ImageDesc img_desc = ((sokol__gfx__ImageDesc){.type = 0,.render_target = 0,.width = img->width,.height = img->height,.num_slices = 0,.num_mipmaps = 0,.usage = 0,.pixel_format = 0,.sample_count = 0,.data = {0},.label = ((char*)(img->path.str)),.gl_textures = {0, 0},.gl_texture_target = 0,.mtl_textures = {0, 0},.d3d11_texture = (voidptr)0,.d3d11_shader_resource_view = 0,.wgpu_texture = 0,});
	usize img_size = ((usize)((int)((int)(4 * img->width) * img->height)));
	img_desc.data.subimage[0][0] = ((sokol__gfx__Range){.ptr = img->data,.size = img_size,});
	img->simg = sokol__gfx__make_image(&img_desc);
	sokol__gfx__SamplerDesc smp_desc = ((sokol__gfx__SamplerDesc){.min_filter = sokol__gfx__Filter__linear,.mag_filter = sokol__gfx__Filter__linear,.mipmap_filter = 0,.wrap_u = sokol__gfx__Wrap__clamp_to_edge,.wrap_v = sokol__gfx__Wrap__clamp_to_edge,.wrap_w = 0,.min_lod = 0,.max_lod = 0,.border_color = 0,.compare = 0,.max_anisotropy = 0,.label = 0,.gl_sampler = 0,.mtl_sampler = 0,.d3d11_sampler = 0,.wgpu_sampler = 0,});
	img->ssmp = sokol__gfx__make_sampler(&smp_desc);
	img->simg_ok = true;
	img->ok = true;
	return img;
}
VV_LOC gg__SSRecorderSettings* gg__new_gg_recorder_settings(void) {
	#if defined(CUSTOM_DEFINE_gg_record)
	{
	}
	#else
	{
		return ((gg__SSRecorderSettings*)memdup(&(gg__SSRecorderSettings){.stop_at_frame = -1,.screenshot_frames = __new_array(0, 0, sizeof(u64)),.screenshot_folder = (string){.str=(byteptr)"", .is_lit=1},.screenshot_prefix = (string){.str=(byteptr)"", .is_lit=1},}, sizeof(gg__SSRecorderSettings)));
	}
	#endif
	return 0;
}
VV_LOC void gg__clear_atlas_callback(voidptr uptr, int __v_error, int _val) {
	if (__v_error == 1) {
		fontstash__Context* fons = ((fontstash__Context*)(uptr));
		fontstash__Context_reset_atlas(fons, _const_gg__buff_size, _const_gg__buff_size);
	}
}
VV_LOC _option_gg__FT_ptr gg__new_ft(gg__FTConfig c) {
	if ((c.font_path).len == 0) {
		if (c.bytes_normal.len > 0) {
			fontstash__Context* fons = sokol__sfons__create(_const_gg__buff_size, _const_gg__buff_size, 1);
			Array_u8 bytes_normal =  array_clone_static_to_depth(c.bytes_normal, 0);
			Array_u8 _t1; /* if prepend */
			if (c.bytes_bold.len > 0) {
				_t1 = c.bytes_bold;
			} else {
				;
				_t1 = bytes_normal;
			}
			Array_u8 bytes_bold = _t1;
			Array_u8 _t2; /* if prepend */
			if (c.bytes_mono.len > 0) {
				_t2 = c.bytes_mono;
			} else {
				;
				_t2 = bytes_normal;
			}
			Array_u8 bytes_mono = _t2;
			Array_u8 _t3; /* if prepend */
			if (c.bytes_italic.len > 0) {
				_t3 = c.bytes_italic;
			} else {
				;
				_t3 = bytes_normal;
			}
			Array_u8 bytes_italic = _t3;
			fontstash__Context_set_error_callback(fons, (voidptr)gg__clear_atlas_callback, fons);
			_option_gg__FT_ptr _t4;
			_option_ok(&(gg__FT*[]) { ((gg__FT*)memdup(&(gg__FT){.fons = fons,
				.font_normal = fontstash__Context_add_font_mem(fons, _S("sans"), array_clone_to_depth(&bytes_normal, 0), true),
				.font_bold = fontstash__Context_add_font_mem(fons, _S("sans"), array_clone_to_depth(&bytes_bold, 0), true),
				.font_mono = fontstash__Context_add_font_mem(fons, _S("sans"), array_clone_to_depth(&bytes_mono, 0), true),
				.font_italic = fontstash__Context_add_font_mem(fons, _S("sans"), array_clone_to_depth(&bytes_italic, 0), true),
				.fonts_map = new_map(sizeof(string), sizeof(int), &map_hash_string, &map_eq_string, &map_clone_string, &map_free_string),
				.scale = c.scale,
			}, sizeof(gg__FT))) }, (_option*)(&_t4), sizeof(gg__FT*));
				array_free(&bytes_italic); // autofreed var gg false
	array_free(&bytes_mono); // autofreed var gg false
	array_free(&bytes_bold); // autofreed var gg false
	array_free(&bytes_normal); // autofreed var gg false
return _t4;
			array_free(&bytes_italic); // autofreed var gg false
	array_free(&bytes_mono); // autofreed var gg false
	array_free(&bytes_bold); // autofreed var gg false
	array_free(&bytes_normal); // autofreed var gg false
} else {
		}
	}
	if ((c.font_path).len == 0 || !os__exists(c.font_path)) {
		#if !defined(__ANDROID__)
		{
string _arg_expr_println_1_1925 = str_intp(2, _MOV((StrIntpData[]){{_S("failed to load font \""), 0xfe10, {.d_s = c.font_path}}, {_S("\""), 0, { .d_c = 0 }}}));// new af2 pre/* inserted before */
						println(/*autofree arg*/_arg_expr_println_1_1925);
			return (_option_gg__FT_ptr){ .state=2, .err=_const_none__, .data={E_STRUCT} };
			string_free(&_arg_expr_println_1_1925); // autofreed var gg false
}
		#endif
	}
	string normal_path =  string_clone_static(c.font_path);
	Array_u8 bytes = __new_array_with_default(0, 0, sizeof(u8), 0);
	#if defined(__ANDROID__)
	{
	}
	#else
	{
		_result_Array_u8 _t8 = os__read_bytes(c.font_path);
		if (_t8.is_error) {
			IError err = _t8.err;
string _arg_expr_println_1_2391 = str_intp(2, _MOV((StrIntpData[]){{_S("failed to load font \""), 0xfe10, {.d_s = c.font_path}}, {_S("\""), 0, { .d_c = 0 }}}));// new af2 pre/* inserted before */
						println(/*autofree arg*/_arg_expr_println_1_2391);
			return (_option_gg__FT_ptr){ .state=2, .err=_const_none__, .data={E_STRUCT} };
			string_free(&_arg_expr_println_1_2391); // autofreed var gg false
}
		
 		array _sref2354 = (bytes); // free array on re-assignment2
		bytes = (*(Array_u8*)_t8.data);
		array_free(&_sref2354);
	}
	#endif
	string _t10; /* if prepend */
	if ((c.custom_bold_font_path).len != 0) {
		_t10 = c.custom_bold_font_path;
	} else {
		_t10 = os__font__get_path_variant(c.font_path, os__font__Variant__bold);
	}
	string bold_path = _t10;
	_result_Array_u8 _t11 = os__read_bytes(bold_path);
	if (_t11.is_error) {
		IError err = _t11.err;
string _arg_expr_gg_debug_font_println_1_2644 = str_intp(2, _MOV((StrIntpData[]){{_S("failed to load font \""), 0xfe10, {.d_s = bold_path}}, {_S("\""), 0, { .d_c = 0 }}}));// new af2 pre/* inserted before */
		;
		string _sref2713 = (bold_path); // free string on re-assignment2
		bold_path =  string_clone_static(c.font_path);
		string_free(&_sref2713);
		*(Array_u8*) _t11.data = bytes;
	}
	
 	Array_u8 bytes_bold = (*(Array_u8*)_t11.data);
	string mono_path = os__font__get_path_variant(c.font_path, os__font__Variant__mono);
	_result_Array_u8 _t12 = os__read_bytes(mono_path);
	if (_t12.is_error) {
		IError err = _t12.err;
string _arg_expr_gg_debug_font_println_1_2845 = str_intp(2, _MOV((StrIntpData[]){{_S("failed to load font \""), 0xfe10, {.d_s = mono_path}}, {_S("\""), 0, { .d_c = 0 }}}));// new af2 pre/* inserted before */
		;
		string _sref2914 = (mono_path); // free string on re-assignment2
		mono_path =  string_clone_static(c.font_path);
		string_free(&_sref2914);
		*(Array_u8*) _t12.data = bytes;
	}
	
 	Array_u8 bytes_mono = (*(Array_u8*)_t12.data);
	string italic_path = os__font__get_path_variant(c.font_path, os__font__Variant__italic);
	_result_Array_u8 _t13 = os__read_bytes(italic_path);
	if (_t13.is_error) {
		IError err = _t13.err;
string _arg_expr_gg_debug_font_println_1_3054 = str_intp(2, _MOV((StrIntpData[]){{_S("failed to load font \""), 0xfe10, {.d_s = italic_path}}, {_S("\""), 0, { .d_c = 0 }}}));// new af2 pre/* inserted before */
		;
		string _sref3127 = (italic_path); // free string on re-assignment2
		italic_path =  string_clone_static(c.font_path);
		string_free(&_sref3127);
		*(Array_u8*) _t13.data = bytes;
	}
	
 	Array_u8 bytes_italic = (*(Array_u8*)_t13.data);
	fontstash__Context* fons = sokol__sfons__create(_const_gg__buff_size, _const_gg__buff_size, 1);
string _arg_expr_gg_debug_font_println_1_3200 = str_intp(2, _MOV((StrIntpData[]){{_S("Font used for font_normal : "), 0xfe10, {.d_s = normal_path}}, {_SLIT0, 0, { .d_c = 0 }}}));// new af2 pre/* inserted before */
	;
string _arg_expr_gg_debug_font_println_1_3266 = str_intp(2, _MOV((StrIntpData[]){{_S("Font used for font_bold   : "), 0xfe10, {.d_s = bold_path}}, {_SLIT0, 0, { .d_c = 0 }}}));// new af2 pre/* inserted before */
	;
string _arg_expr_gg_debug_font_println_1_3330 = str_intp(2, _MOV((StrIntpData[]){{_S("Font used for font_mono   : "), 0xfe10, {.d_s = mono_path}}, {_SLIT0, 0, { .d_c = 0 }}}));// new af2 pre/* inserted before */
	;
string _arg_expr_gg_debug_font_println_1_3394 = str_intp(2, _MOV((StrIntpData[]){{_S("Font used for font_italic : "), 0xfe10, {.d_s = italic_path}}, {_SLIT0, 0, { .d_c = 0 }}}));// new af2 pre/* inserted before */
	;
	fontstash__Context_set_error_callback(fons, (voidptr)gg__clear_atlas_callback, fons);
	_option_gg__FT_ptr _t14;
	_option_ok(&(gg__FT*[]) { ((gg__FT*)memdup(&(gg__FT){.fons = fons,
		.font_normal = fontstash__Context_add_font_mem(fons, _S("sans"), array_clone_to_depth(&bytes, 0), true),
		.font_bold = fontstash__Context_add_font_mem(fons, _S("sans"), array_clone_to_depth(&bytes_bold, 0), true),
		.font_mono = fontstash__Context_add_font_mem(fons, _S("sans"), array_clone_to_depth(&bytes_mono, 0), true),
		.font_italic = fontstash__Context_add_font_mem(fons, _S("sans"), array_clone_to_depth(&bytes_italic, 0), true),
		.fonts_map = new_map(sizeof(string), sizeof(int), &map_hash_string, &map_eq_string, &map_clone_string, &map_free_string),
		.scale = c.scale,
	}, sizeof(gg__FT))) }, (_option*)(&_t14), sizeof(gg__FT*));
		string_free(&_arg_expr_gg_debug_font_println_1_3394); // autofreed var gg false
	string_free(&_arg_expr_gg_debug_font_println_1_3330); // autofreed var gg false
	string_free(&_arg_expr_gg_debug_font_println_1_3266); // autofreed var gg false
	string_free(&_arg_expr_gg_debug_font_println_1_3200); // autofreed var gg false
	string_free(&italic_path); // autofreed var gg false
	string_free(&mono_path); // autofreed var gg false
	string_free(&bold_path); // autofreed var gg false
	array_free(&bytes); // autofreed var gg false
	string_free(&normal_path); // autofreed var gg false
return _t14;
	string_free(&_arg_expr_gg_debug_font_println_1_3394); // autofreed var gg false
	string_free(&_arg_expr_gg_debug_font_println_1_3330); // autofreed var gg false
	string_free(&_arg_expr_gg_debug_font_println_1_3266); // autofreed var gg false
	string_free(&_arg_expr_gg_debug_font_println_1_3200); // autofreed var gg false
	string_free(&italic_path); // autofreed var gg false
	string_free(&mono_path); // autofreed var gg false
	string_free(&bold_path); // autofreed var gg false
	array_free(&bytes); // autofreed var gg false
	string_free(&normal_path); // autofreed var gg false
}
void gg__Context_set_text_cfg(gg__Context* ctx, gx__TextCfg cfg) {
	if (!ctx->font_inited) {
		return;
	}
	if ((cfg.family).len != 0) {
		int f = (*(int*)map_get(ADDR(map, ctx->ft->fonts_map), &(string[]){cfg.family}, &(int[]){ 0 }));
		if (f == 0) {
			_result_Array_u8 _t1 = os__read_bytes(cfg.family);
			if (_t1.is_error) {
				IError err = _t1.err;
string _arg_expr_gg_debug_font_println_1_4200 = str_intp(2, _MOV((StrIntpData[]){{_S("failed to load font \""), 0xfe10, {.d_s = cfg.family}}, {_S("\""), 0, { .d_c = 0 }}}));// new af2 pre/* inserted before */
				;
					string_free(&_arg_expr_gg_debug_font_println_1_4200); // autofreed var gg false
return;
				string_free(&_arg_expr_gg_debug_font_println_1_4200); // autofreed var gg false
}
			
 			Array_u8 bytes = (*(Array_u8*)_t1.data);
			f = fontstash__Context_add_font_mem(ctx->ft->fons, cfg.family, array_clone_to_depth(&bytes, 0), true);
			{
				map_set(&ctx->ft->fonts_map, &(string[]){cfg.family}, &(int[]) { f });
			}
		}
		fontstash__Context_set_font(ctx->ft->fons, f);
	} else if (cfg.bold) {
		fontstash__Context_set_font(ctx->ft->fons, ctx->ft->font_bold);
	} else if (cfg.mono) {
		fontstash__Context_set_font(ctx->ft->fons, ctx->ft->font_mono);
	} else if (cfg.italic) {
		fontstash__Context_set_font(ctx->ft->fons, ctx->ft->font_italic);
	} else {
		fontstash__Context_set_font(ctx->ft->fons, ctx->ft->font_normal);
	}
	f32 _t2; /* if prepend */
	if (ctx->ft->scale == 0) {
		_t2 = ((f32)(1));
	} else {
		_t2 = ctx->ft->scale;
	}
	f32 scale = _t2;
	int _t3; /* if prepend */
	if (cfg.mono) {
		_t3 = (int)(cfg.size - 2);
	} else {
		_t3 = cfg.size;
	}
	int size = _t3;
	fontstash__Context_set_size(ctx->ft->fons, (f32)(scale * ((f32)(size))));
	fontstash__Context_set_align(ctx->ft->fons, (((int)(cfg.align)) | ((int)(cfg.vertical_align))));
	u32 color = sokol__sfons__rgba(cfg.color.r, cfg.color.g, cfg.color.b, cfg.color.a);
	if (cfg.color.a != 255) {
		sokol__sgl__load_pipeline(ctx->pipeline->alpha);
	}
	fontstash__Context_set_color(ctx->ft->fons, color);
	f32 ascender = ((f32)(0.0));
	f32 descender = ((f32)(0.0));
	f32 lh = ((f32)(0.0));
	fontstash__Context_vert_metrics(ctx->ft->fons, &ascender, &descender, &lh);
}
void gg__Context_draw_text(gg__Context* ctx, int x, int y, string text_, gx__TextCfg cfg) {
	if (ctx->native_rendering) {
		if (cfg.align == _const_gx__align_right) {
			int width = gg__Context_text_width(ctx, text_);
			darwin_draw_string((int)(x - width), (int)(ctx->height - y), text_, cfg);
		} else {
			darwin_draw_string(x, (int)(ctx->height - y), text_, cfg);
		}
		return;
	}
	if (!ctx->font_inited) {
		eprintln(_S("gg: draw_text(): font not initialized"));
		return;
	}
	gg__Context_set_text_cfg(ctx, cfg);
	f32 _t1; /* if prepend */
	if (ctx->ft->scale == 0) {
		_t1 = ((f32)(1));
	} else {
		_t1 = ctx->ft->scale;
	}
	f32 scale = _t1;
	fontstash__Context_draw_text(ctx->ft->fons, (f32)(x * scale), (f32)(y * scale), text_);
}
void gg__FT_flush(gg__FT* ft) {
	sokol__sfons__flush(ft->fons);
}
int gg__Context_text_width(gg__Context* ctx, string s) {
	if (ctx->native_rendering) {
		int _t1 = darwin_text_width(s);
		return _t1;
	}
	if (!ctx->font_inited) {
		return 0;
	}
	Array_fixed_f32_4 buf = {0};
	fontstash__Context_text_bounds(ctx->ft->fons, 0, 0, s, &buf[0]);
	if (string_ends_with(s, _S(" "))) {
		return (int)(((int)((f32)(((f32)(buf[2] - buf[0])) / ctx->scale))) + gg__Context_text_width(ctx, _S("i")));
	}
	int res = ((int)((f32)(((f32)(buf[2] - buf[0])) / ctx->scale)));
	if (ctx->native_rendering) {
		return (int)(res * 2);
	}
	return ((int)((f32)(((f32)(buf[2] - buf[0])) / ctx->scale)));
}
multi_return_int_int gg__Context_text_size(gg__Context* ctx, string s) {
	if (!ctx->font_inited) {
		return (multi_return_int_int){.arg0=0, .arg1=0};
	}
	Array_fixed_f32_4 buf = {0};
	fontstash__Context_text_bounds(ctx->ft->fons, 0, 0, s, &buf[0]);
	return (multi_return_int_int){.arg0=((int)((f32)(((f32)(buf[2] - buf[0])) / ctx->scale))), .arg1=((int)((f32)(((f32)(buf[3] - buf[1])) / ctx->scale)))};
}
VV_LOC multi_return_sokol__gfx__Image_sokol__gfx__Sampler main__create_texture(int w, int h, u8* buf) {
	int sz = (int)((int)(w * h) * 4);
	sokol__gfx__ImageDesc img_desc = ((sokol__gfx__ImageDesc){.type = 0,.render_target = 0,.width = w,.height = h,.num_slices = 0,.num_mipmaps = 0,.usage = 0,.pixel_format = 0,.sample_count = 0,.data = {0},.label = ((char*)(((void*)0))),.gl_textures = {0, 0},.gl_texture_target = 0,.mtl_textures = {0, 0},.d3d11_texture = (voidptr)0,.d3d11_shader_resource_view = 0,.wgpu_texture = 0,});
	img_desc.data.subimage[0][0] = ((sokol__gfx__Range){.ptr = (voidptr)buf,.size = ((usize)(sz)),});
	sokol__gfx__Image sg_img = sokol__gfx__make_image(&img_desc);
	sokol__gfx__SamplerDesc smp_desc = ((sokol__gfx__SamplerDesc){.min_filter = sokol__gfx__Filter__linear,.mag_filter = sokol__gfx__Filter__linear,.mipmap_filter = 0,.wrap_u = sokol__gfx__Wrap__clamp_to_edge,.wrap_v = sokol__gfx__Wrap__clamp_to_edge,.wrap_w = 0,.min_lod = 0,.max_lod = 0,.border_color = 0,.compare = 0,.max_anisotropy = 0,.label = 0,.gl_sampler = 0,.mtl_sampler = 0,.d3d11_sampler = 0,.wgpu_sampler = 0,});
	sokol__gfx__Sampler sg_smp = sokol__gfx__make_sampler(&smp_desc);
	return (multi_return_sokol__gfx__Image_sokol__gfx__Sampler){.arg0=sg_img, .arg1=sg_smp};
	sokol__gfx__Image_free(&sg_img); // autofreed var main false
}
VV_LOC void main__cube_t(f32 r, f32 g, f32 b) {
	sokol__sgl__begin_quads();
	sokol__sgl__c3f(r, g, b);
	sokol__sgl__v3f_t2f(-1.0, 1.0, -1.0, 0.0, 0.25);
	sokol__sgl__v3f_t2f(1.0, 1.0, -1.0, 0.25, 0.25);
	sokol__sgl__v3f_t2f(1.0, -1.0, -1.0, 0.25, 0.0);
	sokol__sgl__v3f_t2f(-1.0, -1.0, -1.0, 0.0, 0.0);
	sokol__sgl__c3f(r, g, b);
	sokol__sgl__v3f_t2f(-1.0, -1.0, 1.0, 0.0, 0.25);
	sokol__sgl__v3f_t2f(1.0, -1.0, 1.0, 0.25, 0.25);
	sokol__sgl__v3f_t2f(1.0, 1.0, 1.0, 0.25, 0.0);
	sokol__sgl__v3f_t2f(-1.0, 1.0, 1.0, 0.0, 0.0);
	sokol__sgl__c3f(r, g, b);
	sokol__sgl__v3f_t2f(-1.0, -1.0, 1.0, 0.0, 0.25);
	sokol__sgl__v3f_t2f(-1.0, 1.0, 1.0, 0.25, 0.25);
	sokol__sgl__v3f_t2f(-1.0, 1.0, -1.0, 0.25, 0.0);
	sokol__sgl__v3f_t2f(-1.0, -1.0, -1.0, 0.0, 0.0);
	sokol__sgl__c3f(r, g, b);
	sokol__sgl__v3f_t2f(1.0, -1.0, 1.0, 0.0, 0.25);
	sokol__sgl__v3f_t2f(1.0, -1.0, -1.0, 0.25, 0.25);
	sokol__sgl__v3f_t2f(1.0, 1.0, -1.0, 0.25, 0.0);
	sokol__sgl__v3f_t2f(1.0, 1.0, 1.0, 0.0, 0.0);
	sokol__sgl__c3f(r, g, b);
	sokol__sgl__v3f_t2f(1.0, -1.0, -1.0, 0.0, 0.25);
	sokol__sgl__v3f_t2f(1.0, -1.0, 1.0, 0.25, 0.25);
	sokol__sgl__v3f_t2f(-1.0, -1.0, 1.0, 0.25, 0.0);
	sokol__sgl__v3f_t2f(-1.0, -1.0, -1.0, 0.0, 0.0);
	sokol__sgl__c3f(r, g, b);
	sokol__sgl__v3f_t2f(-1.0, 1.0, -1.0, 0.0, 0.25);
	sokol__sgl__v3f_t2f(-1.0, 1.0, 1.0, 0.25, 0.25);
	sokol__sgl__v3f_t2f(1.0, 1.0, 1.0, 0.25, 0.0);
	sokol__sgl__v3f_t2f(1.0, 1.0, -1.0, 0.0, 0.0);
	sokol__sgl__end();
}
VV_LOC void main__draw_texture_cubes(main__App app) {
	Array_f32 rot = new_array_from_c_array(2, 2, sizeof(f32), _MOV((f32[2]){((f32)(app.mouse_x)), ((f32)(app.mouse_y))}));
	sokol__sgl__defaults();
	sokol__sgl__load_pipeline(app.pip_3d);
	sokol__sgl__enable_texture();
	sokol__sgl__texture(app.texture, app.sampler);
	sokol__sgl__matrix_mode_projection();
	sokol__sgl__perspective(sokol__sgl__rad(45.0), 1.0, 0.1, 100.0);
	sokol__sgl__matrix_mode_modelview();
	sokol__sgl__translate(0.0, 0.0, -12.0);
	sokol__sgl__rotate(sokol__sgl__rad((*(f32*)array_get(rot, 0))), 1.0, 0.0, 0.0);
	sokol__sgl__rotate(sokol__sgl__rad((*(f32*)array_get(rot, 1))), 0.0, 1.0, 0.0);
	main__cube_t(1, 1, 1);
	sokol__sgl__disable_texture();
	array_free(&rot); // autofreed var main false
}
VV_LOC void main__frame(main__App* app) {
	gg__Size ws = gg__window_size_real_pixels();
	f32 ratio = (f32)(((f32)(ws.width)) / ws.height);
	int dw = ws.width;
	int dh = ws.height;
	i64 fps = (i64)(1000 / time__Duration_milliseconds((time__Time__minus(time__now(), app->last_time))));
string _arg_expr_print_1_3598 = str_intp(2, _MOV((StrIntpData[]){{_S("FPS: "), 0xfe09, {.d_i64 = fps}}, {_S("\n"), 0, { .d_c = 0 }}}));// new af2 pre/* inserted before */
		print(/*autofree arg*/_arg_expr_print_1_3598);
	gg__Context_begin(app->gg);
	sokol__sgl__viewport(0, ((int)((int)(dh / 5))), dw, ((int)((f32)(dh * ratio))), true);
	main__draw_texture_cubes(*app);
	app->frame_count++;
	app->last_time = time__now();
	gg__Context_end(app->gg, ((gg__EndOptions){.how = 0,}));
	string_free(&_arg_expr_print_1_3598); // autofreed var main false
}
VV_LOC void main__my_init(main__App* app) {
	app->init_flag = true;
	sokol__gfx__Desc desc = sokol__sapp__create_desc();
	sokol__gfx__setup(&desc);
	sokol__sgl__Desc sgl_desc = ((sokol__sgl__Desc){.max_vertices = 3276800,.max_commands = 0,.context_pool_size = 0,.pipeline_pool_size = 0,.color_format = 0,.depth_format = 0,.sample_count = 0,.face_winding = 0,.allocator = (sgl_allocator_t){.alloc_fn = ((void*)0),.free_fn = ((void*)0),},.logger = (sgl_logger_t){.func = ((void*)0),},});
	sokol__sgl__setup(&sgl_desc);
	sokol__gfx__PipelineDesc pipdesc = ((sokol__gfx__PipelineDesc){.shader = {0},.layout = {0},.depth = {0},.stencil = {0},.color_count = 0,.colors = {{0}, {0}, {0}, {0}},.primitive_type = 0,.index_type = 0,.cull_mode = 0,.face_winding = 0,.sample_count = 0,.blend_color = {0},.alpha_to_coverage_enabled = 0,.label = ((char*)(((void*)0))),});
	vmemset(&pipdesc, 0, ((int)(sizeof(sokol__gfx__PipelineDesc))));
	sokol__gfx__ColorTargetState color_state = ((sokol__gfx__ColorTargetState){.pixel_format = 0,.write_mask = 0,.blend = ((sokol__gfx__BlendState){.enabled = true,.src_factor_rgb = sokol__gfx__BlendFactor__src_alpha,.dst_factor_rgb = sokol__gfx__BlendFactor__one_minus_src_alpha,.op_rgb = 0,.src_factor_alpha = 0,.dst_factor_alpha = 0,.op_alpha = 0,}),});
	pipdesc.colors[0] = color_state;
	pipdesc.depth = ((sokol__gfx__DepthState){.pixel_format = 0,.compare = sokol__gfx__CompareFunc__less_equal,.write_enabled = true,.bias = 0,.bias_slope_scale = 0,.bias_clamp = 0,});
	pipdesc.cull_mode = sokol__gfx__CullMode__back;
	app->pip_3d = sokol__sgl__make_pipeline(&pipdesc);
	int w = 256;
	int h = 256;
	int sz = (int)((int)(w * h) * 4);
	u8* tmp_txt = _v_malloc(sz);
	int i = 0;
	for (;;) {
		if (!(i < sz)) break;
		{
			int y = (((i >> 0x8)) >> 5);
			int x = (((i & 0xFF)) >> 5);
			if (x == 0 && y == 0) {
				tmp_txt[i] = ((u8)(0xFF));
				tmp_txt[(int)(i + 1)] = ((u8)(0));
				tmp_txt[(int)(i + 2)] = ((u8)(0));
				tmp_txt[(int)(i + 3)] = ((u8)(0xFF));
			} else if (x == 7 && y == 7) {
				tmp_txt[i] = ((u8)(0));
				tmp_txt[(int)(i + 1)] = ((u8)(0xFF));
				tmp_txt[(int)(i + 2)] = ((u8)(0));
				tmp_txt[(int)(i + 3)] = ((u8)(0xFF));
			} else {
				int _t1; /* if prepend */
				if (((((int)(x + y)) & 1)) == 1) {
					_t1 = 0xFF;
				} else {
					_t1 = 0;
				}
				int col = _t1;
				tmp_txt[i] = ((u8)(col));
				tmp_txt[(int)(i + 1)] = ((u8)(col));
				tmp_txt[(int)(i + 2)] = ((u8)(col));
				tmp_txt[(int)(i + 3)] = ((u8)(0xFF));
			}
			i += 4;
		}
	}
	{
		multi_return_sokol__gfx__Image_sokol__gfx__Sampler mr_5418 = main__create_texture(w, h, tmp_txt);
		app->texture = mr_5418.arg0;
		app->sampler = mr_5418.arg1;
		_v_free(tmp_txt);
	}
}
VV_LOC void main__my_event_manager(gg__Event* ev, main__App* app) {
	if (ev->typ == sokol__sapp__EventType__mouse_move) {
		app->mouse_x = ((int)(ev->mouse_x));
		app->mouse_y = ((int)(ev->mouse_y));
	}
	if (ev->typ == sokol__sapp__EventType__touches_began || ev->typ == sokol__sapp__EventType__touches_moved) {
		if (ev->num_touches > 0) {
			gg__TouchPoint touch_point = ev->touches[0];
			app->mouse_x = ((int)(touch_point.pos_x));
			app->mouse_y = ((int)(touch_point.pos_y));
		}
	}
}
VV_LOC void main__main(void) {
	main__App* app = ((main__App*)memdup(&(main__App){.gg = ((void*)0),.pip_3d = {0},.texture = {0},.sampler = {0},.init_flag = 0,.frame_count = 0,.mouse_x = -1,.mouse_y = -1,.last_time = time__now(),}, sizeof(main__App)));
	app->gg = gg__new_context(((gg__Config){
		.width = _const_main__win_width,
		.height = _const_main__win_height,
		.retina = 0,
		.resizable = 0,
		.user_data = (voidptr)app,
		.font_size = 0,
		.create_window = true,
		.window_title = _S("Ordis"),
		.icon = {0},
		.html5_canvas_name = _S("canvas"),
		.borderless_window = 0,
		.always_on_top = 0,
		.bg_color = _const_main__bg_color,
		.init_fn = (voidptr)main__my_init,
		.frame_fn = (voidptr)main__frame,
		.native_frame_fn = ((void*)0),
		.cleanup_fn = ((void*)0),
		.fail_fn = ((void*)0),
		.event_fn = (voidptr)main__my_event_manager,
		.on_event = ((void*)0),
		.quit_fn = ((void*)0),
		.keydown_fn = ((void*)0),
		.keyup_fn = ((void*)0),
		.char_fn = ((void*)0),
		.move_fn = ((void*)0),
		.click_fn = ((void*)0),
		.unclick_fn = ((void*)0),
		.leave_fn = ((void*)0),
		.enter_fn = ((void*)0),
		.resized_fn = ((void*)0),
		.scroll_fn = ((void*)0),
		.fullscreen = 0,
		.scale = 1.0,
		.sample_count = 0,
		.swap_interval = 1,
		.font_path = (string){.str=(byteptr)"", .is_lit=1},
		.custom_bold_font_path = (string){.str=(byteptr)"", .is_lit=1},
		.ui_mode = 0,
		.font_bytes_normal = __new_array(0, 0, sizeof(u8)),
		.font_bytes_bold = __new_array(0, 0, sizeof(u8)),
		.font_bytes_mono = __new_array(0, 0, sizeof(u8)),
		.font_bytes_italic = __new_array(0, 0, sizeof(u8)),
		.native_rendering = 0,
		.enable_dragndrop = 0,
		.max_dropped_files = 1,
		.max_dropped_file_path_length = 2048,
		.min_width = 0,
		.min_height = 0,
	}));
	gg__Context_run(app->gg);
}
void _vinit(int ___argc, voidptr ___argv) {
#if __STDC_HOSTED__ == 1
	signal(11, v_segmentation_fault_handler);
#endif
	builtin_init();
	// Initializations of consts for module strconv
	_const_strconv__digit_pairs = _S("00102030405060708090011121314151617181910212223242526272829203132333435363738393041424344454647484940515253545556575859506162636465666768696071727374757677787970818283848586878889809192939495969798999");
	_const_strconv__base_digits = _S("0123456789abcdefghijklmnopqrstuvwxyz");
	// Initializations of consts for module builtin
	_const_digit_pairs = _S("00102030405060708090011121314151617181910212223242526272829203132333435363738393041424344454647484940515253545556575859506162636465666768696071727374757677787970818283848586878889809192939495969798999");
	g_live_reload_info = *(voidptr*)&((voidptr[]){0}[0]); // global 5
	_const_min_i64 = ((i64)((int_literal)(-9223372036854775807 - 1)));
	_const_none__ = I_None___to_Interface_IError(((None__*)memdup(&(None__){.Error = ((Error){E_STRUCT}),}, sizeof(None__))));
	// Initializations of consts for module time
	_const_time__nanosecond = ((time__Duration)(1));
	_const_time__infinite = ((((i64)(9223372036854775807))));
	_const_time__start_time = mach_absolute_time();
	_const_time__time_base = time__init_time_base();
	_const_time__microsecond = ((1000 * _const_time__nanosecond));
	_const_time__millisecond = ((1000 * _const_time__microsecond));
	_const_time__second = ((1000 * _const_time__millisecond));
	_const_time__minute = ((60 * _const_time__second));
	_const_time__hour = ((60 * _const_time__minute));
	// Initializations of consts for module gx
{
{
	_const_gx__black = ((gx__Color){.r = 0,.g = 0,.b = 0,.a = 255,});
}
}
{
{
	_const_gx__white = ((gx__Color){.r = 255,.g = 255,.b = 255,.a = 255,});
}
}
{
{
	_const_gx__yellow = ((gx__Color){.r = 255,.g = 255,.b = 0,.a = 255,});
}
}
{
{
	_const_gx__align_right = gx__HorizontalAlign__right;
}
}
	// Initializations of consts for module sokol.sapp
	g_desc = *(sapp_desc*)&((sapp_desc[]){{.init_cb = ((void*)0),.frame_cb = ((void*)0),.cleanup_cb = ((void*)0),.event_cb = ((void*)0),.init_userdata_cb = ((void*)0),.frame_userdata_cb = ((void*)0),.cleanup_userdata_cb = ((void*)0),.event_userdata_cb = ((void*)0),}}[0]); // global 5
	// Initializations of consts for module gg
{
{
	_const_gg__dontcare_pass = ((sokol__gfx__PassAction){.colors = {((sokol__gfx__ColorAttachmentAction){.load_action = sokol__gfx__LoadAction__dontcare,.store_action = 0,.clear_value = ((sokol__gfx__Color){.r = 1.0,.g = 1.0,.b = 1.0,.a = 1.0,}),}), ((sokol__gfx__ColorAttachmentAction){.load_action = sokol__gfx__LoadAction__dontcare,.store_action = 0,.clear_value = ((sokol__gfx__Color){.r = 1.0,.g = 1.0,.b = 1.0,.a = 1.0,}),}), ((sokol__gfx__ColorAttachmentAction){.load_action = sokol__gfx__LoadAction__dontcare,.store_action = 0,.clear_value = ((sokol__gfx__Color){.r = 1.0,.g = 1.0,.b = 1.0,.a = 1.0,}),}), ((sokol__gfx__ColorAttachmentAction){.load_action = sokol__gfx__LoadAction__dontcare,.store_action = 0,.clear_value = ((sokol__gfx__Color){.r = 1.0,.g = 1.0,.b = 1.0,.a = 1.0,}),})},.depth = {0},.stencil = {0},});
}
}
	_const_gg__recorder_settings = gg__new_gg_recorder_settings();
	_const_gg__buff_size = ((int)(2048));
	// Initializations of consts for module main
{
{
	_const_main__bg_color = _const_gx__white;
}
}
}
void _vcleanup(void) {
	// Cleanups for module main :

	// Cleanups for module gg :

	// Cleanups for module sokol.sfons :

	// Cleanups for module os.font :

	// Cleanups for module sokol.sgl :

	// Cleanups for module sokol.sapp :

	// Cleanups for module sokol.f :

	// Cleanups for module os :

	// Cleanups for module math :

	// Cleanups for module sokol.gfx :

	// Cleanups for module gx :

	// Cleanups for module term.termios :

	// Cleanups for module strings.textscanner :

	// Cleanups for module math.internal :

	// Cleanups for module sokol.c :

	// Cleanups for module sokol.memory :

	// Cleanups for module fontstash :

	// Cleanups for module stbi :

	// Cleanups for module time :

	// Cleanups for module builtin :
	IError_free(&_const_none__);

	// Cleanups for module strconv :

	// Cleanups for module math.bits :

	// Cleanups for module strings :

}

int main(int ___argc, char** ___argv){
	g_main_argc = ___argc;
	g_main_argv = ___argv;
	_vinit(___argc, (voidptr)___argv);
	main__main();
	_vcleanup();
	return 0;
}
// THE END.
