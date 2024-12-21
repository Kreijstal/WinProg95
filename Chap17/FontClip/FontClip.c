/*-----------------------------------------------
   FONTCLIP.C -- Using Path for Clipping on Font
                 (c) Charles Petzold, 1998
  -----------------------------------------------*/

#include <windows.h>
#include "../EZTest/EZFont.h"

TCHAR szAppName [] = TEXT ("FontClip") ;
TCHAR szTitle [] = TEXT ("FontClip: Using Path for Clipping on Font") ;

void PaintRoutine (HWND hwnd, HDC hdc, int cxArea, int cyArea)
{
     UNREFERENCED_PARAMETER(hwnd);
     static TCHAR szString [] = TEXT ("Clipping") ;
     HFONT        hFont ;
     int          y, iOffset ;
     POINT        pt [4] ;
     SIZE         size ;

     hFont = EzCreateFont (hdc, TEXT ("Times New Roman"), 1200, 0, 0, TRUE) ;

     SelectObject (hdc, hFont) ;

     GetTextExtentPoint32 (hdc, szString, lstrlen (szString), &size) ;

     BeginPath (hdc) ;
     TextOut (hdc, (cxArea - size.cx) / 2, (cyArea - size.cy) / 2,
                    szString, lstrlen (szString)) ;
     EndPath (hdc) ;

               // Set clipping area

     SelectClipPath (hdc, RGN_COPY) ;

               // Draw Bezier splines

     iOffset = (cxArea + cyArea) / 4 ;

     for (y = -iOffset ; y < cyArea + iOffset ; y++)
     {
          pt[0].x = 0 ;
          pt[0].y = y ;

          pt[1].x = cxArea / 3 ;
          pt[1].y = y + iOffset ;

          pt[2].x = 2 * cxArea / 3 ;
          pt[2].y = y - iOffset ;

          pt[3].x = cxArea ;
          pt[3].y = y ;

          SelectObject (hdc, CreatePen (PS_SOLID, 1,
               RGB (rand () % 256, rand () % 256, rand () % 256))) ;

          PolyBezier (hdc, pt, 4) ;

          DeleteObject (SelectObject (hdc, GetStockObject (BLACK_PEN))) ;
     }

     DeleteObject (SelectObject (hdc, GetStockObject (WHITE_BRUSH))) ;
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
