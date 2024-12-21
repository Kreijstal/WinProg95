/*-----------------------------------------------------
   ScrnSize.c -- Displays screen size in a message box
                 (c) Charles Petzold, 1998
  -----------------------------------------------------*/

#include <windows.h>
#include <tchar.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int MessageBoxPrintf(
    PCTSTR szCaption,
    PCTSTR szFormat,
    ...)
{
    TCHAR   szBuffer[1024];
    va_list pArgList;

        // The va_start macro (defined in STDARG.H) is usually equivalent to:
        // pArgList = (TCHAR *) &szFormat + sizeof (szFormat) ;

    va_start(pArgList, szFormat);

        // The last argument to wvsprintf_s points to the arguments

    (void)_vsntprintf_s(szBuffer, _countof(szBuffer) - 1, _TRUNCATE, szFormat, pArgList);

        // The va_end macro just zeroes out pArgList for no good reason

    va_end(pArgList);

       // MessageBox() always returns IDOK with MB_OK

    return MessageBox(NULL, szBuffer, szCaption, MB_OK);
}

int WINAPI WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nShowCmd)
{
    UNREFERENCED_PARAMETER(hInstance);
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);
    UNREFERENCED_PARAMETER(nShowCmd);

    int cxScreen = GetSystemMetrics(SM_CXSCREEN);
    int cyScreen = GetSystemMetrics(SM_CYSCREEN);

    (void)MessageBoxPrintf(
        TEXT("ScrnSize"),
        TEXT("The screen is %i pixels wide by %i pixels high."),
        cxScreen, cyScreen);
    return 0;
}
