#include <iostream>
using namespace std;
class Demo
{
public:
    char * reverseString(char *Str)
    {
        static int i=0;
        static char RevStr[25];
        if(*Str!='\0')
        {
            reverseString(Str+1);
            RevStr[i++]=*Str;
        }
        return RevStr;
    }
};
int main()
{
    char Str[25];
    char Revstr[25];
    cout << "Enter the string\n";
    cin.getline(Str, 25);

    Demo *dobj = new Demo();

    cout<<dobj->reverseString(Str)<<endl;
}