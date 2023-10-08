/*
Case1:
Enter the First String
Kunal
Enter the Second String
Kunal
Both String are Equal
-----------------------------
Case2:
Enter the First String
Kunal
Enter the Second String
Narkhede
Both String are not Equal
-----------------------------
*/
#include <iostream>
#define MAX 100
using namespace std;

class Demo
{
public:
    char *Str1;
    char *Str2;
    Demo(char *Str1, char *Str2)
    {
        this->Str1 = Str1;
        this->Str2 = Str2;
    }
    bool StrCmpX()
    {
        int iFlag = 1;
        while (*Str1 != '\0' && *Str2 != '\0')
        {
            if (*Str1 != *Str2)
            {
                iFlag = 0;
                break;
            }
            Str1++;
            Str2++;
        }
        if (iFlag == 1)
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
    char Str1[MAX];

    cout << "Enter first string\n";
    cin.getline(Str, 30);

    cout << "Enter second string\n";
    cin.getline(Str1, 30);

    Demo *dobj = new Demo(Str, Str1);

    bool bRet = dobj->StrCmpX();

    if (bRet == true)
    {
        cout << "Both String are equal\n";
    }
    else
    {
        cout << "Both String are not equal\n";
    }

    delete dobj;

    return 0;
}