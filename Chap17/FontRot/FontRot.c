/*----------------------------------------
   FONTROT.C -- Rotated Fonts
                (c) Charles Petzold, 1998
  ----------------------------------------*/

#include <windows.h>
#include "..\\eztest\\ezfont.h"

TCHAR szAppName [] = TEXT ("FontRot") ;
TCHAR szTitle   [] = TEXT ("FontRot: Rotated Fonts") ;

void PaintRoutine (HWND hwnd, HDC hdc, int cxArea, int cyArea)
{
     UNREFERENCED_PARAMETER(hwnd);
     static TCHAR szString [] = TEXT ("   Rotation") ;
     HFONT        hFont ;
     int          i ;
     LOGFONT      lf ;

     hFont = EzCreateFont (hdc, TEXT ("Times New Roman"), 540, 0, 0, TRUE) ;
     GetObject (hFont, sizeof (LOGFONT), &lf) ;
     DeleteObject (hFont) ;

     SetBkMode (hdc, TRANSPARENT) ;
     SetTextAlign (hdc, TA_BASELINE) ;
     SetViewportOrgEx (hdc, cxArea / 2, cyArea / 2, NULL) ;

     for (i = 0 ; i < 12 ; i ++)
     {
          lf.lfEscapement = lf.lfOrientation = i * 300 ;
          SelectObject (hdc, CreateFontIndirect (&lf)) ;

          TextOut (hdc, 0, 0, szString, lstrlen (szString)) ;

          DeleteObject (SelectObject (hdc, GetStockObject (SYSTEM_FONT))) ;
     }
}

int CALLBACK WinMain(
        _In_ HINSTANCE hInstance,
        _In_opt_ HINSTANCE hPrevInstance,
        _In_ LPSTR lpCmdLine,
        _In_ int nShowCmd)
{
     UNREFERENCED_PARAMETER(hPrevInstance);
     UNREFERENCED_PARAMETER(lpCmdLine);
     
     WNDCLASS wc;
     MSG      msg;
     HWND     hwnd;

     wc.style         = CS_HREDRAW | CS_VREDRAW;
     wc.lpfnWndProc   = DefWindowProc;
     wc.cbClsExtra    = 0;
     wc.cbWndExtra    = 0;
     wc.hInstance     = hInstance;
     wc.hIcon         = LoadIcon(NULL, IDI_APPLICATION);
     wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
     wc.hbrBackground = (HBRUSH) GetStockObject(WHITE_BRUSH);
     wc.lpszMenuName  = NULL;
     wc.lpszClassName = szAppName;

     if (!RegisterClass(&wc))
     {
          MessageBox(NULL, TEXT("Program requires Windows NT!"),
                    szAppName, MB_ICONERROR);
          return 0;
     }

     hwnd = CreateWindow(szAppName, szTitle,
                        WS_OVERLAPPEDWINDOW,
                        CW_USEDEFAULT, CW_USEDEFAULT,
                        CW_USEDEFAULT, CW_USEDEFAULT,
                        NULL, NULL, hInstance, NULL);

     ShowWindow(hwnd, nShowCmd);
     UpdateWindow(hwnd);

     while (GetMessage(&msg, NULL, 0, 0))
     {
          TranslateMessage(&msg);
          DispatchMessage(&msg);
     }
     return msg.wParam;
}
