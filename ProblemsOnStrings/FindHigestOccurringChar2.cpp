/*
Input:
codeforwin
Output:
o is occurring 2 times
*/
#include <iostream>
#include<unordered_map>
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
    void countFrequencyOfEachCharacter()
    {
        unordered_map<char,int> map;

        char *iNewStr = Str;
        int iStrLength = StrLenX(iNewStr);
        
    }
};
int main()
{
    char Str[MAX];
    char ch = '\0';

    cout << "Enter the string\n";
    cin.getline(Str, 30);

    Demo *dobj = new Demo(Str);

    dobj->countFrequencyOfEachCharacter();
    delete dobj;

    return 0;
}