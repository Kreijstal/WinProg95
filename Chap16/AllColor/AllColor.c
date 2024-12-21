/*-----------------------------------------
   ALLCOLOR.C -- Palette Animation Demo
                 (c) Charles Petzold, 1998
  -----------------------------------------*/

#include <windows.h>
#include <tchar.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   PSTR szCmdLine, int iCmdShow)
{
     static TCHAR szAppName[] = TEXT("AllColor");
     HWND        hwnd;
     MSG         msg;
     WNDCLASS    wndclass;
     
     wndclass.style         = CS_HREDRAW | CS_VREDRAW;
     wndclass.lpfnWndProc   = DefWindowProc;
     wndclass.cbClsExtra    = 0;
     wndclass.cbWndExtra    = 0;
     wndclass.hInstance     = hInstance;
     wndclass.hIcon         = LoadIcon(NULL, IDI_APPLICATION);
     wndclass.hCursor       = LoadCursor(NULL, IDC_ARROW);
     wndclass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
     wndclass.lpszMenuName  = NULL;
     wndclass.lpszClassName = szAppName;
     
     if (!RegisterClass(&wndclass))
     {
          MessageBox(NULL, TEXT("Program requires Windows NT!"),
                    szAppName, MB_ICONERROR);
          return 0;
     }
     
     hwnd = CreateWindow(szAppName, TEXT("AllColor: Palette Animation Demo"),
                        WS_OVERLAPPEDWINDOW,
                        CW_USEDEFAULT, CW_USEDEFAULT,
                        CW_USEDEFAULT, CW_USEDEFAULT,
                        NULL, NULL, hInstance, NULL);
     
     ShowWindow(hwnd, iCmdShow);
     UpdateWindow(hwnd);
     
     while (GetMessage(&msg, NULL, 0, 0))
     {
          TranslateMessage(&msg);
          DispatchMessage(&msg);
     }
     return msg.wParam;
}

#define ID_TIMER    1

TCHAR szAppName [] = TEXT ("AllColor") ;
TCHAR szTitle   [] = TEXT ("AllColor: Palette Animation Demo") ;

static int          iIncr ;
static PALETTEENTRY pe ;

HPALETTE CreateRoutine (HWND hwnd)
{
     HDC        hdc ;
     HPALETTE   hPalette ;
     LOGPALETTE lp ;

          // Determine the color resolution and set iIncr

     hdc = GetDC (hwnd) ;
     iIncr = 1 << (8 - GetDeviceCaps (hdc, COLORRES) / 3) ;
     ReleaseDC (hwnd, hdc) ;

          // Create the logical palette
     
     lp.palVersion             = 0x0300 ;
     lp.palNumEntries          = 1 ;
     lp.palPalEntry[0].peRed   = 0 ;
     lp.palPalEntry[0].peGreen = 0 ;
     lp.palPalEntry[0].peBlue  = 0 ;
     lp.palPalEntry[0].peFlags = PC_RESERVED ;
   
     hPalette = CreatePalette (&lp) ;

          // Save global for less typing

     pe = lp.palPalEntry[0] ;
     
     SetTimer (hwnd, ID_TIMER, 10, NULL) ;
     return hPalette ;
}

void DisplayRGB (HDC hdc, PALETTEENTRY * ppe)
{
     TCHAR szBuffer [16] ;

     wsprintf (szBuffer, TEXT (" %02X-%02X-%02X "),
               ppe->peRed, ppe->peGreen, ppe->peBlue) ;

     TextOut (hdc, 0, 0, szBuffer, lstrlen (szBuffer)) ;
}

void PaintRoutine (HDC hdc, int cxClient, int cyClient)
{
     HBRUSH   hBrush ;
     RECT     rect ;

          // Draw Palette Index 0 on entire window

     hBrush = CreateSolidBrush (PALETTEINDEX (0)) ;
     SetRect (&rect, 0, 0, cxClient, cyClient) ;
     FillRect (hdc, &rect, hBrush) ;
     DeleteObject (SelectObject (hdc, GetStockObject (WHITE_BRUSH))) ;

          // Display the RGB value

     DisplayRGB (hdc, &pe) ;
     return ;
}

void TimerRoutine (HDC hdc, HPALETTE hPalette)
{
     static BOOL  bRedUp = TRUE, bGreenUp = TRUE, bBlueUp = TRUE ;

          // Define new color value

     pe.peBlue += (bBlueUp ? iIncr : -iIncr) ;

     if (pe.peBlue == (BYTE) (bBlueUp ? 0 : 256 - iIncr))
     {
          pe.peBlue = (bBlueUp ? 256 - iIncr : 0) ;
          bBlueUp ^= TRUE ;
          pe.peGreen += (bGreenUp ? iIncr : -iIncr) ;

          if (pe.peGreen == (BYTE) (bGreenUp ? 0 : 256 - iIncr))
          {
               pe.peGreen = (bGreenUp ? 256 - iIncr : 0) ;
               bGreenUp ^= TRUE ;
               pe.peRed += (bRedUp ? iIncr : -iIncr) ;

               if (pe.peRed == (BYTE) (bRedUp ? 0 : 256 - iIncr))
               {
                    pe.peRed = (bRedUp ? 256 - iIncr : 0) ;
                    bRedUp ^= TRUE ;
               }
          }
     }

          // Animate the palette
     
     AnimatePalette (hPalette, 0, 1, &pe) ;
     DisplayRGB (hdc, &pe) ;
     return ;
}

void DestroyRoutine (HWND hwnd, HPALETTE hPalette)
{
     KillTimer (hwnd, ID_TIMER) ;
     DeleteObject (hPalette) ;
     return ;
}
