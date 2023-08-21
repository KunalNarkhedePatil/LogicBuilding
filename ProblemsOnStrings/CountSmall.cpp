/*
Input :  Kunal
Output :   4 
*/
#include<iostream>
#define MAX 100
using namespace std;
class Demo
{
    public:

    char *Str;

    Demo(char *Str)
    {
        this->Str=Str;
    }
    int countSmallCharacter()
    {
        int iCnt=0;

        while(*Str!='\0')
        {
            if(*Str>='a' && *Str<='z')
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
    char Str[MAX];

    cout<<"Enter the String\n";
    cin.getline(Str,50);

    Demo *dobj=new Demo(Str);

    int iRet=dobj->countSmallCharacter();

    cout << "Number of small character are " << iRet << endl;

    delete dobj;

    return 0;
}