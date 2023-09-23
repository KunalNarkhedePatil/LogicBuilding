#include <iostream>

using namespace std;
class Demo
{
public:
    char *Str;
    Demo(char *Str)
    {
        this->Str = Str;
    }
    void charFindHigestOccurringChar()
    {
        int i = 0;
        int Freq[256] = {0};
        while (Str[i] != '\0')
        {
            Freq[Str[i]]++;
            i++;
        }
        i = 0;
        for (i = 0; i < 256; i++)
        {
            if (Freq[i] != 0)
            {
                cout << "Freq of " << char(i) << " is " << Freq[i] << endl;
            }
        }
    }
};
int main()
{
    char Str[100];

    cout << "Enter the string\n";
    cin.getline(Str, 40);

    Demo *dobj = new Demo(Str);
    dobj->charFindHigestOccurringChar();
    return 0;
}