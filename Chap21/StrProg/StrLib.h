#ifndef STRLIB_H
#define STRLIB_H

#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#define EXPORT extern "C" __declspec (dllexport)
#else
#define EXPORT __declspec (dllexport)
#endif

// The maximum number of strings STRLIB will store and their lengths
#define MAX_STRINGS 256
#define MAX_LENGTH  64

// Define callback function types
typedef BOOL (CALLBACK *GETSTRPROCA)(PCSTR, PVOID);
typedef BOOL (CALLBACK *GETSTRPROCW)(PCWSTR, PVOID);

// Function declarations
EXPORT BOOL CALLBACK AddStringA(PCSTR);
EXPORT BOOL CALLBACK AddStringW(PCWSTR);
EXPORT BOOL CALLBACK DeleteStringA(PCSTR);
EXPORT BOOL CALLBACK DeleteStringW(PCWSTR);
EXPORT int CALLBACK GetStringsA(GETSTRPROCA, PVOID);
EXPORT int CALLBACK GetStringsW(GETSTRPROCW, PVOID);

#ifdef UNICODE
#define AddString    AddStringW
#define DeleteString DeleteStringW
#define GetStrings   GetStringsW
#define GETSTRPROC   GETSTRPROCW
#else
#define AddString    AddStringA
#define DeleteString DeleteStringA
#define GetStrings   GetStringsA
#define GETSTRPROC   GETSTRPROCA
#endif

#ifdef __cplusplus
}
#endif

#endif // STRLIB_H
