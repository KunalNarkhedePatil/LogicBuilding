#include<iostream>
using namespace std;
void Display(char *Str)
{
    char *End=Str;

    while(*End!='\0')
    {
        End++;
    }
    End--;

    while()
}
int main()
{
    char Str[20];

    cout<<"Enter the string\n";
    cin.getline(Str,20);

    Display(Str);

    return 0;
}