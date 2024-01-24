#include <iostream>
using namespace std;

int StrLenX(char *Str)
{
    int iCnt = 0;
    while (*Str != '\0')
    {
        iCnt++;
        Str++;
    }
    return iCnt;
}
void ToggleCase(char *Str)
{
    while (*Str != '\0')
    {
        if (*Str >= 'a' && *Str <= 'z')
        {
            *Str = *Str - 32;
        }
        else if (*Str >= 'A' && *Str <= 'Z')
        {
            *Str = *Str + 32;
        }
        Str++;
    }
    
}
void StrRevX(char Str[])
{
    int s = 0;
    int e = StrLenX(Str) - 1;

    while (s <= e)
    {
        char ch = Str[s];
        Str[s] = Str[e];
        Str[e] = ch;
        s++;
        e--;
    }

    cout << "Reverse String is " << Str << endl;
}
int main()
{
    char str[20];

    cout << "Enter the string" << endl;
    cin.getline(str, 20);

    cout << "String is " << str << endl;
    // cout<<"String length is "<<StrLenX(str)<<endl;
    // StrRevX(str);
     ToggleCase(str);
    cout << "Toggle case is " << str << endl;

    return 0;
}