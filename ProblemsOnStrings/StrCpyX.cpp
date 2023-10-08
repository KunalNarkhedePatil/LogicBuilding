/*
Enter the string
I Love India
Original String I Love India
Copied String is I Love India
*/
#include <iostream>
#define MAX 100
using namespace std;

class Demo
{
public:
    char *Str;
    char *CpyStr;
    Demo(char *Str, char *CpyStr)
    {
        this->Str = Str;
        this->CpyStr = CpyStr;
    }
    void StrCpyX()
    {
        while (*Str != '\0')
        {
            *CpyStr = *Str;
            Str++;
            CpyStr++;
        }
        *CpyStr = *Str;
    }
};
int main()
{
    char Str[MAX];
    char CpyStr[MAX];

    cout << "Enter the string\n";
    cin.getline(Str, 20);

    Demo *dobj = new Demo(Str, CpyStr);

    dobj->StrCpyX();
    cout<<"Original String "<<Str<<endl;
    cout << "Copied String is " << CpyStr << endl;

    delete dobj;

    return 0;
}