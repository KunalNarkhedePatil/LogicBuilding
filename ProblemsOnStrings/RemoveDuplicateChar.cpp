#include <iostream>
#include <string>
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
    void removeDuplicateChar()
    {
        int size = StrLenX(Str);
        cout << size << endl;
        char TempStr[size];
        int k = 0;
        for (int i = 0; i < size; i++)
        {
            if (Str[i] == '\0')
            {
                continue;
            }
            for (int j = i + 1; j < size; j++)
            {
                if (Str[i] == Str[j])
                {
                    Str[j] = '\0';
                }
            }
            TempStr[k] = Str[i];
            k++;
        }
        TempStr[k] = '\0';
        int i = 0;
        for (i = 0; i < k; i++)
        {
            Str[i] = TempStr[i];
        }
        Str[i] = '\0';
    }
};
int main()
{
    char Str[MAX];

    cout << "Enter the string\n";
    cin.getline(Str, 25);

    Demo *dobj = new Demo(Str);
    cout << "Original String " << dobj->Str << endl;
    dobj->removeDuplicateChar();
    cout << "After removing duplicate string is " << dobj->Str << endl;

    return 0;
}