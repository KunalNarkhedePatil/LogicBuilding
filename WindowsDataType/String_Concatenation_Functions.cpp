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