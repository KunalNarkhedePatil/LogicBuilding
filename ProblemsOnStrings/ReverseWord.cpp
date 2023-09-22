#include <iostream>
#include <string>
using namespace std;
class Demo
{

public:
    char *str;
    Demo(char *str)
    {
        this->str = str;
    }
    int countLength(char *Str)
    {
        int iCnt = 0;

        while (*Str != '\0')
        {
            iCnt++;
            Str++;
        }
        return iCnt;
    }
    void reverseWord()
    {
        int size = countLength(str);

        int startIndex = 0;
        int endIndex = size - 1;

        for (int i = size - 1; i >= 0; i--)
        {
            if (str[i] == ' ' || i == 0)
            {
                if (i == 0)
                {
                    startIndex = 0;
                }
                else
                {
                    startIndex = i + 1;
                }
                for (int j = startIndex; j <= endIndex; j++)
                {
                    cout << str[j];
                }
                endIndex = i - 1;
                cout << " ";
            }
        }
    }
};
int main()
{
    char Str[100];

    cout << "Enter the string\n";
    cin.getline(Str, 20);

    Demo *dobj = new Demo(Str);

    cout<<"Original String "<<Str<<endl;
    dobj->reverseWord();

    return 0;
}