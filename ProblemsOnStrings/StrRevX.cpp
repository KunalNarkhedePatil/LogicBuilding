/*
Input :   "Kunal"
Output :   “lanuK”
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
    void StrRevX()
    {
        char *Start = Str;
        char *End = Str;

        while (*End != '\0')
        {
            End++;
        }
        End--;
        while (Start <= End)
        {
            char Temp = *Start;
            *Start = *End;
            *End = Temp;
            Start++;
            End--;
        }
    }
};
int main()
{
    char Str[MAX];

    cout << "Enter the string\n";
    cin.getline(Str, 20);

    Demo *dobj = new Demo(Str);

    dobj->StrRevX();

    cout << "Reverse String is " << dobj->Str << endl;

    delete dobj;

    return 0;
}