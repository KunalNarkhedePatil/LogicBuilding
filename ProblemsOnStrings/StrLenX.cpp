/*
Enter the string:
Kunal
Length Of String is 5
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
    int StrLenX()
    {
        int iCnt = 0;

        while (*Str != '\0')
        {
            iCnt++;
            Str++;
        }
        return iCnt;
    }
};
int main()
{
    char Str[MAX];

    cout << "Enter the string\n";
    cin.getline(Str, 20);

    Demo *dobj = new Demo(Str);

    int iRet = dobj->StrLenX();

    cout << "Length Of String is " << iRet << endl;

    delete dobj;

    return 0;
}