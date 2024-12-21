/*--------------------------------------
   FADER.C -- Palette Animation Demo
              (c) Charles Petzold, 1998
  --------------------------------------*/

#include <windows.h>

#define ID_TIMER 1

TCHAR szAppName [] = TEXT ("Fader") ;
TCHAR szTitle   [] = TEXT ("Fader: Palette Animation Demo") ;

LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
     static HPALETTE hPalette ;
     static int      cxClient, cyClient ;
     HDC            hdc ;
     PAINTSTRUCT    ps ;

     switch (message)
     {
     case WM_CREATE:
          hPalette = CreateRoutine (hwnd) ;
          return 0 ;

     case WM_SIZE:
          cxClient = LOWORD (lParam) ;
          cyClient = HIWORD (lParam) ;
          return 0 ;

     case WM_PAINT:
          hdc = BeginPaint (hwnd, &ps) ;
          
          SelectPalette (hdc, hPalette, FALSE) ;
          RealizePalette (hdc) ;
          
          PaintRoutine (hdc, cxClient, cyClient) ;
          EndPaint (hwnd, &ps) ;
          return 0 ;

     case WM_TIMER:
          hdc = GetDC (hwnd) ;
          
          SelectPalette (hdc, hPalette, FALSE) ;
          RealizePalette (hdc) ;
          
          TimerRoutine (hdc, hPalette) ;
          ReleaseDC (hwnd, hdc) ;
          return 0 ;

     case WM_DESTROY:
          DestroyRoutine (hwnd, hPalette) ;
          PostQuitMessage (0) ;
          return 0 ;
     }
     return DefWindowProc (hwnd, message, wParam, lParam) ;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   PSTR szCmdLine, int iCmdShow)
{
     HWND     hwnd ;
     MSG      msg ;
     WNDCLASS wndclass ;

     wndclass.style         = CS_HREDRAW | CS_VREDRAW ;
     wndclass.lpfnWndProc   = WndProc ;
     wndclass.cbClsExtra    = 0 ;
     wndclass.cbWndExtra    = 0 ;
     wndclass.hInstance     = hInstance ;
     wndclass.hIcon         = LoadIcon (NULL, IDI_APPLICATION) ;
     wndclass.hCursor       = LoadCursor (NULL, IDC_ARROW) ;
     wndclass.hbrBackground = (HBRUSH) GetStockObject (WHITE_BRUSH) ;
     wndclass.lpszMenuName  = NULL ;
     wndclass.lpszClassName = szAppName ;

     if (!RegisterClass (&wndclass))
     {
          MessageBox (NULL, TEXT ("This program requires Windows NT!"),
                     szAppName, MB_ICONERROR) ;
          return 0 ;
     }

     hwnd = CreateWindow (szAppName, szTitle,
                         WS_OVERLAPPEDWINDOW,
                         CW_USEDEFAULT, CW_USEDEFAULT,
                         CW_USEDEFAULT, CW_USEDEFAULT,
                         NULL, NULL, hInstance, NULL) ;

     ShowWindow (hwnd, iCmdShow) ;
     UpdateWindow (hwnd) ;

     while (GetMessage (&msg, NULL, 0, 0))
     {
          TranslateMessage (&msg) ;
          DispatchMessage (&msg) ;
     }
     return msg.wParam ;
}

static LOGPALETTE lp ;

HPALETTE CreateRoutine (HWND hwnd)
{
     HPALETTE hPalette ;
     
     lp.palVersion             = 0x0300 ;
     lp.palNumEntries          = 1 ;
     lp.palPalEntry[0].peRed   = 255 ;
     lp.palPalEntry[0].peGreen = 255 ;
     lp.palPalEntry[0].peBlue  = 255 ;
     lp.palPalEntry[0].peFlags = PC_RESERVED ;
   
     hPalette = CreatePalette (&lp) ;
     
     SetTimer (hwnd, ID_TIMER, 50, NULL) ;
     return hPalette ;
}

void PaintRoutine (HDC hdc, int cxClient, int cyClient)
{
     static TCHAR szText [] = TEXT (" Fade In and Out ") ;
     int          x, y ;
     SIZE         sizeText ;

     SetTextColor (hdc, PALETTEINDEX (0)) ;
     GetTextExtentPoint32 (hdc, szText, lstrlen (szText), &sizeText) ;

     for (x = 0 ; x < cxClient ; x += sizeText.cx)
     for (y = 0 ; y < cyClient ; y += sizeText.cy)
     {
          TextOut (hdc, x, y, szText, lstrlen (szText)) ;
     }
     return ;
}

void TimerRoutine (HDC hdc, HPALETTE hPalette)
{
     static BOOL bFadeIn = TRUE ;

     if (bFadeIn)
     {
          lp.palPalEntry[0].peRed   -= 4 ;
          lp.palPalEntry[0].peGreen -= 4 ;

          if (lp.palPalEntry[0].peRed == 3)
               bFadeIn = FALSE ;
     }
     else
     {
          lp.palPalEntry[0].peRed   += 4 ;
          lp.palPalEntry[0].peGreen += 4 ;

          if (lp.palPalEntry[0].peRed == 255)
               bFadeIn = TRUE ;
     }

     AnimatePalette (hPalette, 0, 1, lp.palPalEntry) ;
     return ;
}

void DestroyRoutine (HWND hwnd, HPALETTE hPalette)
{
     KillTimer (hwnd, ID_TIMER) ;
     DeleteObject (hPalette) ;
     return ;
}
