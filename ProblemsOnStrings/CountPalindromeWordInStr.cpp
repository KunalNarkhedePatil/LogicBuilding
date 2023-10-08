#include <iostream>

using namespace std;
class Demo
{
public:
    char *str;

    Demo(char str[])
    {
        this->str = str;
    }
    bool checkStringPalindrome(char *Str)
    {
        int iFlag = 0;
        char *Start = Str;
        char *End = Str;

        while (*End != '\0')
        {
            End++;
        }
        End--;

        while (Start <= End)
        {
            if (*Start != *End)
            {
                iFlag = 1;
                break;
            }
            Start++;
            End--;
        }
        if (iFlag == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int StrLenX(char *Str)
    {
        int iCnt=0;

        while(*Str!='\0')
        {
            iCnt++;
            Str++;
        }
        return iCnt;
    }
    int countPalindromeWordInStr()
    {
        char Word[20];
        int j = 0;
        int iCnt = 0;
        int iLen=StrLenX(str);
        int i=0;
        while (str[i] != '\0')
        {
            if (str[i] == ' ' || i==iLen-1)
            {
                if(i==iLen-1)
                {
                    Word[j]=str[i];
                    j++;
                }
                Word[j]='\0';
                if (checkStringPalindrome(Word))
                {
                    iCnt++;
                }
                Word[20];
                j = 0;
                i++;
                if (str[i] == '\0')
                {
                    break;
                }
            }
            Word[j] = str[i];
            j++;
            i++;
        }
        return iCnt;
    }
};
int main()
{
    char str[50];

    cout << "Enter the string\n";
    cin.getline(str, 50);

    Demo *dobj = new Demo(str);

    int iRet = dobj->countPalindromeWordInStr();

    cout << "number of palindrome word in string:" << iRet << endl;
    return 0;
}