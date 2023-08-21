/*
Enter first string
Kunal
Enter second string
Narkhede
First String Kunal
Second String Narkhede
Concatinated String is Kunal Narkhede
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
    void StrCatX()
    {
        while (*Str1 != '\0')
        {
            Str1++;
        }
        *Str1 = ' ';
        Str1++;
        while (*Str2 != '\0')
        {
            *Str1 = *Str2;
            Str2++;
            Str1++;
        }
        *Str1 = '\0';
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

    cout << "First String " << Str << endl;
    cout << "Second String " << Str1 << endl;

    dobj->StrCatX();
    cout << "Concatinated String is " << Str << endl;

    delete dobj;

    return 0;
}