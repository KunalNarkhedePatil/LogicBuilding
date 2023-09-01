/*
Input:
Enter the string
Kunal
Output:
a=1
k=1
l=1
n=1
u=1
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
    void countFrequencyOfEachCharacter()
    {
        int iFreqArr[26];

        for (int i = 0; i < 26; i++)
        {
            iFreqArr[i] = 0;
        }
        char *iNewStr = Str;
        int iStrLength = StrLenX(iNewStr);

        for (int i = 0; i < iStrLength; i++)
        {
            if (Str[i] >= 'a' && Str[i] <= 'z')
            {
                iFreqArr[Str[i] - 97]++;
            }
            else if (Str[i] >= 'A' && Str[i] <= 'Z')
            {
                iFreqArr[Str[i] - 65]++;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (iFreqArr[i] != 0)
            {
                char ch = i + 97;
                cout << ch << "=" << iFreqArr[i] << endl;
            }
        }
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