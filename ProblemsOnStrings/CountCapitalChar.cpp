/*
Input :  My Name Is Kunal
Output :   4 
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
    ~Demo()
    {
        cout << "Destructor gets called\n";
    }
    int countCapitalCharacter()
    {
        int iCnt = 0;

        while (*Str != '\0')
        {
            if (*Str >= 'A' && *Str <= 'Z')
            {
                iCnt++;
            }
            Str++;
        }
        return iCnt;
    }
};
int main()
{
    char Str[MAX];    //declaring the char array

    cout << "Enter the String\n";
    cin.getline(Str, 50);    //accepting the string from keyboard

    Demo *dobj=new Demo(Str);  //dynamic object creation

    int iRet = dobj->countCapitalCharacter();  //method call

    cout << "Number of Capital character is " << iRet << endl;

    delete dobj;  //delete the object

    //dobj->countCapitalCharacter();
    return 0;
}