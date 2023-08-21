/*
Input :   "marvellous"
Output :   TRUE 
Input :   "Demo"
Output :   TRUE 
Input :   "xyz"
Output :   FALSE 
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
    bool checkVowel()
    {
        int iFlag = 1;

        while (*Str != '\0')
        {
            if (*Str == 'a' || *Str == 'e' || *Str == 'i' || *Str == 'o' || *Str == 'u' ||
                *Str == 'A' || *Str == 'E' || *Str == 'I' || *Str == 'O' || *Str == 'U')
            {
                iFlag = 0;
                break;
            }
            Str++;
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

    cout << "Enter the String\n";
    cin.getline(Str, 30);

    Demo *dobj = new Demo(Str);

    bool bRet = dobj->checkVowel();

    if (bRet == true)
    {
        cout << "String contain vowel\n";
    }
    else
    {
        cout << "String not contain any vowel\n";
    }

    return 0;
}