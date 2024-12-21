/*---------------------------------------
   TUNNEL.C -- Palette Animation Demo
               (c) Charles Petzold, 1998
  ---------------------------------------*/

#include <windows.h>
#include <stdlib.h>

#define ID_TIMER 1

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

TCHAR szAppName [] = TEXT ("Tunnel") ;
TCHAR szTitle   [] = TEXT ("Tunnel: Palette Animation Demo") ;

static LOGPALETTE * plp ;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   PSTR szCmdLine, int iCmdShow)
{
     HWND     hwnd;
     MSG      msg;
     WNDCLASS wndclass;

     wndclass.style         = CS_HREDRAW | CS_VREDRAW;
     wndclass.lpfnWndProc   = WndProc;
     wndclass.cbClsExtra    = 0;
     wndclass.cbWndExtra    = 0;
     wndclass.hInstance     = hInstance;
     wndclass.hIcon         = LoadIcon(NULL, IDI_APPLICATION);
     wndclass.hCursor       = LoadCursor(NULL, IDC_ARROW);
     wndclass.hbrBackground = (HBRUSH) GetStockObject(WHITE_BRUSH);
     wndclass.lpszMenuName  = NULL;
     wndclass.lpszClassName = szAppName;

     if (!RegisterClass(&wndclass))
     {
          MessageBox(NULL, TEXT("This program requires Windows NT!"),
                    szAppName, MB_ICONERROR);
          return 0;
     }

     hwnd = CreateWindow(szAppName, szTitle,
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

LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
     static HPALETTE hPalette;
     static int      cxClient, cyClient;
     HDC            hdc;
     PAINTSTRUCT    ps;

     switch (message)
     {
     case WM_CREATE:
          hPalette = CreateRoutine(hwnd);
          return 0;

     case WM_SIZE:
          cxClient = LOWORD(lParam);
          cyClient = HIWORD(lParam);
          return 0;

     case WM_PAINT:
          hdc = BeginPaint(hwnd, &ps);
          
          SelectPalette(hdc, hPalette, FALSE);
          RealizePalette(hdc);
          
          PaintRoutine(hdc, cxClient, cyClient);
          EndPaint(hwnd, &ps);
          return 0;

     case WM_TIMER:
          hdc = GetDC(hwnd);
          
          SelectPalette(hdc, hPalette, FALSE);
          RealizePalette(hdc);
          
          TimerRoutine(hdc, hPalette);
          ReleaseDC(hwnd, hdc);
          return 0;

     case WM_DESTROY:
          DestroyRoutine(hwnd, hPalette);
          PostQuitMessage(0);
          return 0;
     }
     return DefWindowProc(hwnd, message, wParam, lParam);
}

HPALETTE CreateRoutine (HWND hwnd)
{
     BYTE     byGrayLevel ;
     HPALETTE hPalette ;
     int      i ;

     plp = malloc (sizeof (LOGPALETTE) + 255 * sizeof (PALETTEENTRY)) ;
     
          // Initialize the fields of the LOGPALETTE structure
     
     plp->palVersion    = 0x0300 ;
     plp->palNumEntries = 128 ;
     
     for (i = 0 ; i < 128 ; i++)
     {
          if (i < 64)
               byGrayLevel = (BYTE) (4 * i) ;
          else
               byGrayLevel = (BYTE) min (255, 4 * (128 - i)) ;
          
          plp->palPalEntry[i].peRed   = byGrayLevel ;
          plp->palPalEntry[i].peGreen = byGrayLevel ;
          plp->palPalEntry[i].peBlue  = byGrayLevel ;
          plp->palPalEntry[i].peFlags = PC_RESERVED ;
          
          plp->palPalEntry[i + 128].peRed   = byGrayLevel ;
          plp->palPalEntry[i + 128].peGreen = byGrayLevel ;
          plp->palPalEntry[i + 128].peBlue  = byGrayLevel ;
          plp->palPalEntry[i + 128].peFlags = PC_RESERVED ;
     }
   
     hPalette = CreatePalette (plp) ;
     
     SetTimer (hwnd, ID_TIMER, 50, NULL) ;
     return hPalette ;
}

void PaintRoutine (HDC hdc, int cxClient, int cyClient)
{
     HBRUSH hBrush ;
     int    i ;
     RECT   rect ;
     
     for (i = 0 ; i < 127 ; i++)
     {
               // Use a RECT structure for each of 128 rectangles
          
          rect.left   =            i * cxClient / 255 ;
          rect.top    =            i * cyClient / 255 ;
          rect.right  = cxClient - i * cxClient / 255 ;
          rect.bottom = cyClient - i * cyClient / 255 ;
          
          hBrush = CreateSolidBrush (PALETTEINDEX (i)) ;
          
               // Fill the rectangle and delete the brush
          
          FillRect (hdc, &rect, hBrush) ;
          DeleteObject (hBrush) ;
     }
     return ;
}

void TimerRoutine (HDC hdc, HPALETTE hPalette)
{
     static int iLevel ;

     iLevel = (iLevel + 1) % 128 ;

     AnimatePalette (hPalette, 0, 128, plp->palPalEntry + iLevel) ;
     return ;
}

void DestroyRoutine (HWND hwnd, HPALETTE hPalette)
{
     KillTimer (hwnd, ID_TIMER) ;
     DeleteObject (hPalette) ;
     free (plp) ;
     return ;
}
