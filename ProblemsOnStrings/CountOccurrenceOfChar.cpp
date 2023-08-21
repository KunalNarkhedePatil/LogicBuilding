/*
Input:
Enter the string
Kunal Narkhede
Enter the character
a
Output:
Number of Occurrences ofa is 2
*/
#include <iostream>
#define MAX 100
using namespace std;
class Demo
{
public:
    char *Str;
    char ch;
    Demo(char *Str, char ch)
    {
        this->Str = Str;
        this->ch = ch;
    }
    int countOccurrenceOfChar()
    {
        int iCnt=0;

        while(*Str!='\0')
        {
            if(*Str==ch)
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
    char ch = '\0';

    cout << "Enter the string\n";
    cin.getline(Str, 30);

    cout << "Enter the character\n";
    cin >> ch;

    Demo *dobj = new Demo(Str, ch);

    int iRet = dobj->countOccurrenceOfChar();

    cout << "Number of Occurrences of"<< ch<<" is "<<iRet<<endl;

    delete dobj;

    return 0;
}