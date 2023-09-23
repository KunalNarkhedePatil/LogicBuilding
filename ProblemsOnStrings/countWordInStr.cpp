#include <iostream>
using namespace std;
class Demo
{
public:
    char *Str;

    Demo(char *Str)
    {
        this->Str = Str;
    }

    int countWord()
    {
        int iCnt = 0;

        while (*Str != '\0')
        {
            if (*Str == ' ')
            {
                iCnt++;
            }
            Str++;
        }
        return iCnt+1;
    }
};
int main()
{
    char str[30];

    cout << "Enter the string\n";
    cin.getline(str, 30);

    Demo *dobj = new Demo(str);

    int iRet = dobj->countWord();

    cout << "count of word is " << iRet << endl;

    return 0;
}