#include <windows.h>

void
WinMainCRTStartup(void)
{
	MessageBox(NULL, "Hello, World!", "Barcode", MB_OK |
	    MB_ICONINFORMATION);
	ExitProcess(0);
}
