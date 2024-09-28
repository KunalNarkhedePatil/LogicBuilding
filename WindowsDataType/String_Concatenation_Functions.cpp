strcat (ANSI):
Concatenates two CHAR strings.

#include <stdio.h>
#include <string.h>

int main() {
    char dest[100] = "Hello";
    strcat(dest, " World");
    printf("Concatenated string: %s\n", dest);  // Output: Concatenated string: Hello World
    return 0;
}
----------------------------------------------------------------------------------------------
wcscat (Unicode):
Concatenates two WCHAR strings.

#include <wchar.h>

int main() {
    wchar_t dest[100] = L"Hello";
    wcscat(dest, L" World");
    wprintf(L"Concatenated string: %s\n", dest);  // Output: Concatenated string: Hello World
    return 0;
}
----------------------------------------------------------------------------------------------------
_tcscat (Generic):
Concatenates two TCHAR strings.

#include <tchar.h>

int main() {
    TCHAR dest[100] = _T("Hello");
    _tcscat(dest, _T(" World"));
    _tprintf(_T("Concatenated string: %s\n"), dest);  // Output: Concatenated string: Hello World
    return 0;
}
---------------------------------------------------------------------------------------------------
8. String Tokenizing Functions
h. strtok, wcstok, _tcstok
These functions split a string into tokens based on delimiters.

#include <cstring>
#include <cwchar>
#include <tchar.h>

void string_tokenizing_example() {
    char str[] = "Hello, World!";
    wchar_t wstr[] = L"Hello, World!";
    
    char* token = strtok(str, ", "); // ANSI
    wchar_t* wtoken = wcstok(wstr, L", "); // Unicode
    TCHAR* ttoken = _tcstok(TEXT("Hello, World!"), TEXT(", ")); // Generic
}
