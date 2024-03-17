/*
Input:
Enter the string
My Name is Kunal
Enter the character
Ka
Output:
First occurance of K at 11 index
*/
#include <iostream>
#define MAX 100
using namespace std;
class Demo
{
public:
    char *Str;
    char ch;
    Demo(char *Str, char ch)
    {
        this->Str = Str;
        this->ch = ch;
    }
    int findFirstOccurrence()
    {
        int iCnt = 0;
        while (*Str != '\0')
        {
            if (*Str == ch)
            {
                break;
            }
            iCnt++;
            Str++;
        }
        return iCnt;
    }
};
int main()
{
    char Str[MAX];
    char ch = '\0';

    cout << "Enter the string\n";
    cin.getline(Str, 30);

    cout << "Enter the character\n";
    cin >> ch;

    Demo *dobj = new Demo(Str, ch);

    int iRet = dobj->findFirstOccurrence();

    cout << "First occurance of " << ch << " at " << iRet << " index" << endl;

    delete dobj;

    return 0;
}