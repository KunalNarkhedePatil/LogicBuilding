/*
Enter the string
Kunal
Original String Kunal
String is kunal
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
    void upperCaseToLowerCase()
    {
        while (*Str != '\0')
        {
            if (*Str >= 'A' && *Str <= 'Z')
            {
                *Str = *Str + 32;
            }
            Str++;
        }
    }
};
int main()
{
    char Str[MAX];

    cout << "Enter the string\n";
    cin.getline(Str, 20);

    Demo *dobj = new Demo(Str);

    cout << "Original String " << Str << endl;

    dobj->upperCaseToLowerCase();

    cout << "String is " << Str << endl;

    delete dobj;

    return 0;
}