/*--------------------------------------
   PIPES.C -- Palette Animation Demo
              (c) Charles Petzold, 1998
  --------------------------------------*/

#include <windows.h>

#define ID_TIMER 1

TCHAR szAppName [] = TEXT ("Pipes") ;
TCHAR szTitle   [] = TEXT ("Pipes: Palette Animation Demo") ;

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

static LOGPALETTE * plp ;

HPALETTE CreateRoutine (HWND hwnd)
{
     HPALETTE hPalette ;
     int      i ;

     plp = malloc (sizeof (LOGPALETTE) + 32 * sizeof (PALETTEENTRY)) ;
     
          // Initialize the fields of the LOGPALETTE structure
     
     plp->palVersion    = 0x300 ;
     plp->palNumEntries = 16 ;

     for (i = 0 ; i <= 8 ; i++)
     {
          plp->palPalEntry[i].peRed   = (BYTE) min (255, 0x20 * i) ;
          plp->palPalEntry[i].peGreen = 0 ;
          plp->palPalEntry[i].peBlue  = (BYTE) min (255, 0x20 * i) ;
          plp->palPalEntry[i].peFlags = PC_RESERVED ;

          plp->palPalEntry[16 - i] = plp->palPalEntry[i] ;
          plp->palPalEntry[16 + i] = plp->palPalEntry[i] ;
          plp->palPalEntry[32 - i] = plp->palPalEntry[i] ;
     }

     hPalette = CreatePalette (plp) ;
     
     SetTimer (hwnd, ID_TIMER, 100, NULL) ;
     return hPalette ;
}

void PaintRoutine (HDC hdc, int cxClient, int cyClient)
{
     HBRUSH hBrush ;
     int    i ;
     RECT   rect ;

          // Draw window background

     SetRect (&rect, 0, 0, cxClient, cyClient) ;
     hBrush = SelectObject (hdc, GetStockObject (WHITE_BRUSH)) ;
     FillRect (hdc, &rect, hBrush) ;

          // Draw the interiors of the pipes

     for (i = 0 ; i < 128 ; i++)
     {
          hBrush = CreateSolidBrush (PALETTEINDEX (i % 16)) ;
          SelectObject (hdc, hBrush) ;

          rect.left   = (127 - i) * cxClient / 128 ;
          rect.right  = (128 - i) * cxClient / 128 ;
          rect.top    = 4 * cyClient / 14 ;
          rect.bottom = 5 * cyClient / 14 ;

          FillRect (hdc, &rect, hBrush) ;

          rect.left   =  i      * cxClient / 128 ;
          rect.right  = (i + 1) * cxClient / 128 ;
          rect.top    =  9 * cyClient / 14 ;
          rect.bottom = 10 * cyClient / 14 ;

          FillRect (hdc, &rect, hBrush) ;

          DeleteObject (SelectObject (hdc, GetStockObject (WHITE_BRUSH))) ;
     }

          // Draw the edges of the pipes

     MoveToEx (hdc, 0,         4 * cyClient / 14, NULL) ;
     LineTo   (hdc, cxClient,  4 * cyClient / 14) ;

     MoveToEx (hdc, 0,         5 * cyClient / 14, NULL) ;
     LineTo   (hdc, cxClient,  5 * cyClient / 14) ;

     MoveToEx (hdc, 0,         9 * cyClient / 14, NULL) ;
     LineTo   (hdc, cxClient,  9 * cyClient / 14) ;

     MoveToEx (hdc, 0,        10 * cyClient / 14, NULL) ;
     LineTo   (hdc, cxClient, 10 * cyClient / 14) ;
     return ;
}

void TimerRoutine (HDC hdc, HPALETTE hPalette)
{
     static int iIndex ;

     AnimatePalette (hPalette, 0, 16, plp->palPalEntry + iIndex) ;

     iIndex = (iIndex + 1) % 16 ;

     return ;
}

void DestroyRoutine (HWND hwnd, HPALETTE hPalette)
{
     KillTimer (hwnd, ID_TIMER) ;
     DeleteObject (hPalette) ;
     free (plp) ;
     return ;
}
