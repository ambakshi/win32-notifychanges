#define _WIN32_WINNT 0x0503

#include <windows.h>
#include <shlobj.h>
#include <stdlib.h>

int Win32_Notifychanges();

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    return Win32_Notifychanges();
}

