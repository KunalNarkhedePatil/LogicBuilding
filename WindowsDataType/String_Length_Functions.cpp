strlen (ANSI):
Returns the length of a CHAR string.
#include <stdio.h>    // Include the header for standard input/output functions
#include <string.h>   // Include the header for string manipulation functions

int main() {
    char str[] = "Hello";  // Declare and initialize a character array with the string "Hello"
    
    // Use strlen to calculate the length of the string and print it
    printf("Length: %zu\n", strlen(str));  // Output: Length: 5

    return 0;  // Return 0 to indicate successful completion of the program
}
---------------------------------------------------------------------------------------------
wcslen (Unicode):
Returns the length of a WCHAR string.

#include <wchar.h>    // Include the header for wide character support

int main() {
    wchar_t str[] = L"Hello";  // Declare and initialize a wide character array with the wide string literal "Hello"
    
    // Use wcslen to calculate the length of the wide string and print it
    wprintf(L"Length: %zu\n", wcslen(str));  // Output: Length: 5

    return 0;  // Return 0 to indicate successful completion of the program
}
--------------------------------------------------------------------------------------------------
_tcslen (Generic):
Returns the length of a TCHAR string.

#include <tchar.h>  // Include the header for TCHAR support (ANSI/Unicode compatibility)

int main() {
    // Declare and initialize a character array with the string "Hello" 
    // using the _T macro to support both ANSI and Unicode
    TCHAR str[] = _T("Hello");

    // Use _tprintf to print the length of the string using _tcslen
    _tprintf(_T("Length: %zu\n"), _tcslen(str));  // Output: Length: 5

    return 0;  // Return 0 to indicate successful completion of the program
}
-------------------------------------------------------------------------------------------------

