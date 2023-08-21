/*
CASE1:
Enter the string
kunal
String is not an palindrominc string
--------------------------------------
CASE2:
Enter the string
madam
String is palindrominc string
*/
#include <iostream>
#define MAX 100
using namespace std;

class Demo
{
public:
    char *Str;
    Demo(char *Str)
    {
        this->Str = Str;
    }
    bool checkStringPalindrome()
    {
        int iFlag = 0;
        char *Start = Str;
        char *End = Str;

        while (*End != '\0')
        {
            End++;
        }
        End--;

        while (Start <= End)
        {
            if (*Start != *End)
            {
                iFlag = 1;
                break;
            }
            Start++;
            End--;
        }
        if (iFlag == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    char Str[MAX];

    cout << "Enter the string\n";
    cin.getline(Str, 30);

    Demo *dobj = new Demo(Str);

    bool bRet = dobj->checkStringPalindrome();

    if (bRet == true)
    {
        cout << "String is palindrominc string\n";
    }
    else
    {
        cout << "String is not an palindrominc string\n";
    }

    return 0;
}