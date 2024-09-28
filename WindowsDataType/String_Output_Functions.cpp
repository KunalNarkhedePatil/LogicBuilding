printf (ANSI):
Prints formatted data to the console.
#include <stdio.h>

int main() {
    printf("Hello, World!\n");  // Output: Hello, World!
    return 0;
}
-------------------------------------------------------------------------------------
wprintf (Unicode):
Prints formatted data to the console in WCHAR format.

#include <wchar.h>  // Include the header for wide character support

int main() {
    // Use wprintf to print a wide character string to the standard output
    wprintf(L"Hello, World!\n");  // Output: Hello, World!

    return 0;  // Return 0 to indicate successful completion of the program
}
----------------------------------------------------------------------------------------
_tprintf (Generic):
Prints formatted data to the console in TCHAR format.
#include <tchar.h>  // Include the header for TCHAR support (ANSI/Unicode compatibility)

int main() {
    // Use _tprintf to print a string to the standard output, which adapts to the character set
    _tprintf(_T("Hello, World!\n"));  // Output: Hello, World!

    return 0;  // Return 0 to indicate successful completion of the program
}
