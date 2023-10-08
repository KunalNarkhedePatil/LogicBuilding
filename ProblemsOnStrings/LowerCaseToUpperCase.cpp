/*
Enter the string
kunal
Original String kunal
String is KUNAL
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
    void lowerCaseToUpperCase()
    {
        while (*Str != '\0')
        {
            if (*Str >= 'a' && *Str <= 'z')
            {
                *Str = *Str - 32;
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

    dobj->lowerCaseToUpperCase();

    cout << "String is " << Str << endl;

    delete dobj;

    return 0;
}