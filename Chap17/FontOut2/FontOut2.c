/*------------------------------------------
   FONTOUT2.C -- Using Path to Outline Font
                 (c) Charles Petzold, 1998
  ------------------------------------------*/

#include <windows.h>
#include "..\\EZTest\\EZFont.h"

TCHAR szAppName [] = TEXT ("FontOut2") ;
TCHAR szTitle [] = TEXT ("FontOut2: Using Path to Outline Font") ;

void PaintRoutine (HWND hwnd, HDC hdc, int cxArea, int cyArea)
{
     UNREFERENCED_PARAMETER(hwnd);
     static TCHAR szString [] = TEXT ("Outline") ;
     HFONT        hFont ;
     LOGBRUSH     lb ;
     SIZE         size ;

     hFont = EzCreateFont (hdc, TEXT ("Times New Roman"), 1440, 0, 0, TRUE) ;

     SelectObject (hdc, hFont) ;
     SetBkMode (hdc, TRANSPARENT) ;

     GetTextExtentPoint32 (hdc, szString, lstrlen (szString), &size) ;

     BeginPath (hdc) ;
     TextOut (hdc, (cxArea - size.cx) / 2, (cyArea - size.cy) / 2,
                    szString, lstrlen (szString)) ;
     EndPath (hdc) ;

     lb.lbStyle = BS_SOLID ;
     lb.lbColor = RGB (255, 0, 0) ;
     lb.lbHatch = 0 ;

     SelectObject (hdc, ExtCreatePen (PS_GEOMETRIC | PS_DOT,
                               GetDeviceCaps (hdc, LOGPIXELSX) / 24,
                                   &lb, 0, NULL)) ;
     StrokePath (hdc) ;

     DeleteObject (SelectObject (hdc, GetStockObject (BLACK_PEN))) ;
     SelectObject (hdc, GetStockObject (SYSTEM_FONT)) ;
     DeleteObject (hFont) ;
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
