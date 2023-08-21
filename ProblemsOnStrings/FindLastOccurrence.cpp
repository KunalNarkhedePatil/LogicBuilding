/*
Input:
Enter the string
Kunal NarKhede
Enter the character
K
Output:
Last occurance of K at 9 index
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
    int findLastOccurrence()
    {
        int iFlag = 0;
        int iCnt = 0;

        while (*Str != '\0')
        {
            if (*Str == ch)
            {
                iFlag = iCnt;
            }
            iCnt++;
            Str++;
        }
        return iFlag;
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

    int iRet = dobj->findLastOccurrence();

    cout << "Last occurance of " << ch << " at " << iRet << " index" << endl;

    delete dobj;

    return 0;
}