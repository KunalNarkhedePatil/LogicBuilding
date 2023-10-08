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
    pair<char, int> findHigestOccurringChar()
    {
        int size = StrLenX(Str);

        int iFreq[size];
        // int *iFreq=new int[size];

        for (int i = 0; i < size; i++)
        {
            iFreq[i] = -1;
        }
        int iCnt = 0;

        for (int i = 0; i < size; i++)
        {
            iCnt = 1;
            for (int j = i + 1; j < size; j++)
            {
                if (Str[i] == Str[j])
                {
                    iCnt++;
                    iFreq[j] = 0;
                }
            }
            if (iFreq[i] != 0)
            {
                iFreq[i] = iCnt;
            }
        }
        int iMax = iFreq[0];
        int j = 0;
        int i = 0;
        for (i = 0; i < size; i++)
        {
            if (iFreq[i] != 0)
            {
                if (iFreq[i] > iMax)
                {
                    j = i;
                    iMax = iFreq[i];
                }
            }
        }
        pair<char, int> p;
        p.first = Str[j];
        p.second = iMax;
        return p;
    }
};
int main()
{

    char str[50];
    cout << "Enter the string:\n";
    cin.getline(str, 30);

    Demo *dobj = new Demo(str);

    pair<char, int> pair = dobj->findHigestOccurringChar();

    cout << "Maximum occuring character is " << pair.first << " = " << pair.second << endl;

    return 0;
}