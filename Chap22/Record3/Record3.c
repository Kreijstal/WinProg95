/*----------------------------------------
   RECORD3.C -- Waveform Audio Recorder
                (c) Charles Petzold, 1998
  ----------------------------------------*/

#include <windows.h>
#include "Resource.h"

INT_PTR CALLBACK DlgProc (HWND, UINT, WPARAM, LPARAM) ;

TCHAR szAppName [] = TEXT ("Record3") ;

int WINAPI WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance,
                    PSTR szCmdLine, int iCmdShow)
{
     if (-1 == DialogBox (hInstance, TEXT ("Record"), NULL, DlgProc))
     {
          MessageBox (NULL, TEXT ("This program requires Windows NT!"),
                      szAppName, MB_ICONERROR) ;
     }
     return 0 ;
}

BOOL mciExecuteCommand (LPCTSTR szCommand)
{
     MCIERROR error ;
     TCHAR    szErrorStr [1024] ;

     if (error = mciSendString (szCommand, NULL, 0, NULL))
     {
          mciGetErrorString (error, szErrorStr, 
                             sizeof (szErrorStr) / sizeof (TCHAR)) ;
          MessageBeep (MB_ICONEXCLAMATION) ;
          MessageBox (NULL, szErrorStr, TEXT ("MCI Error"), 
                      MB_OK | MB_ICONEXCLAMATION) ;
     }
     return error == 0 ;
}

INT_PTR CALLBACK DlgProc (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
     static BOOL bRecording, bPlaying, bPaused ;
     
     switch (message)
     {
     case WM_COMMAND:
          switch (wParam)
          {
          case IDC_RECORD_BEG:
                    // Delete existing waveform file
               
               DeleteFile (TEXT ("record3.wav")) ;
               
                    // Open waveform audio and record
               
               if (!mciExecuteCommand (TEXT ("open new type waveaudio alias mysound")))
                    return TRUE ;
               
               mciExecuteCommand (TEXT ("record mysound")) ;
               
                    // Enable and disable buttons
               
               EnableWindow (GetDlgItem (hwnd, IDC_RECORD_BEG), FALSE);
               EnableWindow (GetDlgItem (hwnd, IDC_RECORD_END), TRUE) ;
               EnableWindow (GetDlgItem (hwnd, IDC_PLAY_BEG),   FALSE);
               EnableWindow (GetDlgItem (hwnd, IDC_PLAY_PAUSE), FALSE);
               EnableWindow (GetDlgItem (hwnd, IDC_PLAY_END),   FALSE);
               SetFocus (GetDlgItem (hwnd, IDC_RECORD_END)) ;
               
               bRecording = TRUE ;
               return TRUE ;
               
          case IDC_RECORD_END:
                    // Stop, save, and close recording
               
               mciExecuteCommand (TEXT ("stop mysound")) ;
               mciExecuteCommand (TEXT ("save mysound record3.wav")) ;
               mciExecuteCommand (TEXT ("close mysound")) ;
               
                    // Enable and disable buttons
               
               EnableWindow (GetDlgItem (hwnd, IDC_RECORD_BEG), TRUE) ;
               EnableWindow (GetDlgItem (hwnd, IDC_RECORD_END), FALSE);
               EnableWindow (GetDlgItem (hwnd, IDC_PLAY_BEG),   TRUE) ;
               EnableWindow (GetDlgItem (hwnd, IDC_PLAY_PAUSE), FALSE);
               EnableWindow (GetDlgItem (hwnd, IDC_PLAY_END),   FALSE);
               SetFocus (GetDlgItem (hwnd, IDC_PLAY_BEG)) ;
               
               bRecording = FALSE ;
               return TRUE ;
               
          case IDC_PLAY_BEG:
                    // Open waveform audio and play
               
               if (!mciExecuteCommand (TEXT ("open record3.wav alias mysound")))
                    return TRUE ;
               
               mciExecuteCommand (TEXT ("play mysound")) ;
               
                    // Enable and disable buttons
               
               EnableWindow (GetDlgItem (hwnd, IDC_RECORD_BEG), FALSE);
               EnableWindow (GetDlgItem (hwnd, IDC_RECORD_END), FALSE);
               EnableWindow (GetDlgItem (hwnd, IDC_PLAY_BEG),   FALSE);
               EnableWindow (GetDlgItem (hwnd, IDC_PLAY_PAUSE), TRUE) ;
               EnableWindow (GetDlgItem (hwnd, IDC_PLAY_END),   TRUE) ;
               SetFocus (GetDlgItem (hwnd, IDC_PLAY_END)) ;
               
               bPlaying = TRUE ;
               return TRUE ;
               
          case IDC_PLAY_PAUSE:
               if (!bPaused)
                         // Pause the play
               {
                    mciExecuteCommand (TEXT ("pause mysound")) ;
                    SetDlgItemText (hwnd, IDC_PLAY_PAUSE, TEXT ("Resume")) ;
                    bPaused = TRUE ;
               }
               else
                         // Begin playing again
               {
                    mciExecuteCommand (TEXT ("play mysound")) ;
                    SetDlgItemText (hwnd, IDC_PLAY_PAUSE, TEXT ("Pause")) ;
                    bPaused = FALSE ;
               }
               
               return TRUE ;
               
          case IDC_PLAY_END:
                    // Stop and close
               
               mciExecuteCommand (TEXT ("stop mysound")) ;
               mciExecuteCommand (TEXT ("close mysound")) ;
               
                    // Enable and disable buttons
               
               EnableWindow (GetDlgItem (hwnd, IDC_RECORD_BEG), TRUE) ;
               EnableWindow (GetDlgItem (hwnd, IDC_RECORD_END), FALSE);
               EnableWindow (GetDlgItem (hwnd, IDC_PLAY_BEG),   TRUE) ;
               EnableWindow (GetDlgItem (hwnd, IDC_PLAY_PAUSE), FALSE);
               EnableWindow (GetDlgItem (hwnd, IDC_PLAY_END),   FALSE);
               SetFocus (GetDlgItem (hwnd, IDC_PLAY_BEG)) ;
               
               bPlaying = FALSE ;
               bPaused  = FALSE ;
               return TRUE ;
          }
          break ;
     
     case WM_SYSCOMMAND:
          switch (wParam)
          {
          case SC_CLOSE:
               if (bRecording)
                    SendMessage (hwnd, WM_COMMAND, IDC_RECORD_END, 0L);
               
               if (bPlaying)
                    SendMessage (hwnd, WM_COMMAND, IDC_PLAY_END, 0L) ;
               
               EndDialog (hwnd, 0) ;
               return TRUE ;
          }
          break ;
     }
     return FALSE ;
}
