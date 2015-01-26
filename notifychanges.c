/*
 notifychanges.c - Notify win32 subsystem and running programs of globals
                   changes such as system environment variables.

 Copyright (c) 2015, Amit Bakshi <ambakshi at gmail dot com>
 All rights reserved.

 Distributed under the BSD License. See included LICENSE for details.
*/

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0503
#endif

#include <windows.h>
#include <shlobj.h>
#include <stdlib.h>

#ifdef _MSC_VER
#pragma comment(lib,"user32.lib")
#pragma comment(lib,"shell32.lib")
#pragma comment(lib,"kernel32.lib")
#endif

int Win32_Notifychanges() {
   DWORD* dwRes;
   const char* lParam = "Environment";
   int timeout = 5 , r;

   SHChangeNotify(SHCNE_ASSOCCHANGED, SHCNF_FLUSH , 0, 0);
   SHChangeNotify(SHCNE_ASSOCCHANGED, SHCNF_IDLIST , 0, 0);
   SHChangeNotify(SHCNE_UPDATEDIR, SHCNF_IDLIST, 0, 0);
   r = SendMessageTimeout(HWND_BROADCAST, WM_SETTINGCHANGE, 0, (LPARAM)lParam, SMTO_BLOCK, timeout , NULL);
   if (r != 0) {
        r = SendMessageTimeout(HWND_BROADCAST, WM_SETTINGCHANGE, 0, 0, SMTO_BLOCK, timeout , NULL) != 0;
   }
   return r;
}
