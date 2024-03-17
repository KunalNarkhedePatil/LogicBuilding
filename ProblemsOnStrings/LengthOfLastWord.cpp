/*
Input:
Enter the string
my name is kunal patil
Output:
Length of last word is 5
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
    int StrLenX(char *Str)
    {
        int iCnt = 0;

        while (*Str != '\0')
        {
            iCnt++;
            Str++;
        }
        return iCnt;
    }
    int lenghOfLastWord() 
    {
        
        int iCnt=0;

        int iFlag=0;
        int len=StrLenX(Str);

        for(int i=len-1;i>=0;i--)
        {
            if(Str[i]!=' ')
            {
                iCnt++;
            }
            else
            {
                if(iCnt>0)
                {
                    iFlag=1;
                    break;
                }
            }
        }
        if(iFlag==0)
        {
            return -1;
        }
        else
        {
            return iCnt;
        }
    }
};
int main()
{
    char Str[MAX];

    cout << "Enter the string\n";
    cin.getline(Str, 30);

    Demo *dobj = new Demo(Str);

    int iRet = dobj->lenghOfLastWord();

    if(iRet==-1)
    {
        cout<<"There is no word present in the string"<<endl;
    }
    else
    {
        cout<<"Length of last word is "<<iRet<<endl;
    }
    delete dobj;

    return 0;
}