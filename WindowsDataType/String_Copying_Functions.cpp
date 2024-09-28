strcpy (ANSI):
Copies a CHAR string.

#include <stdio.h>    // Include the header for standard input/output functions
#include <string.h>   // Include the header for string manipulation functions

int main() {
    char src[] = "Hello";        // Declare and initialize the source string "Hello"
    char dest[100];              // Declare a destination array with sufficient size to hold the copied string

    // Use strcpy to copy the contents of src into dest
    strcpy(dest, src);           // Copy the string from src to dest

    // Print the copied string
    printf("Copied string: %s\n", dest);  // Output: Copied string: Hello

    return 0;  // Return 0 to indicate successful completion of the program
}
--------------------------------------------------------------------------------------------------
wcscpy (Unicode):
Copies a WCHAR string.

#include <wchar.h> // Include the wide character library for handling wide strings

int main() {
    // Declare a wide character source string
    wchar_t src[] = L"Hello"; // L prefix indicates a wide string literal
    wchar_t dest[100]; // Declare a destination array to hold the copied string (size 100)

    // Copy the wide character string from src to dest
    wcscpy(dest, src); // wcscpy is used for copying wide strings

    // Print the copied string to the console using wprintf
    // %s is used here to print the wide character string
    wprintf(L"Copied string: %ls\n", dest);  // Output: Copied string: Hello

    return 0; // Return 0 to indicate successful execution
}
-----------------------------------------------------------------------------------------------
_tcscpy (Generic):
Copies a TCHAR string.

#include <tchar.h> // Include the TCHAR library for handling both narrow and wide character strings

int main() {
    // Declare a TCHAR source string
    TCHAR src[] = _T("Hello"); // _T macro allows for compatibility with both ANSI and Unicode builds
    TCHAR dest[100]; // Declare a destination array to hold the copied string (size 100)

    // Copy the TCHAR string from src to dest
    _tcscpy(dest, src); // _tcscpy is used for copying TCHAR strings

    // Print the copied string to the console using _tprintf
    // %s is used here to print the string, works for both narrow and wide strings based on compilation settings
    _tprintf(_T("Copied string: %s\n"), dest);  // Output: Copied string: Hello

    return 0; // Return 0 to indicate successful execution
}
