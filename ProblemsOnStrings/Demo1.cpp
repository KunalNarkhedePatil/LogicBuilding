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
    int countLength(char str[])
    {
        int iCnt = 0;

        while (*str != '\0')
        {
            iCnt++;
            str++;
        }
        return iCnt;
    }
    void Display()
    {
        int size=countLength(str);

        int startIndex=0;
        int endIndex=size-1;

        for(int i=size-1;i>=0;i--)
        {
            if(str[i]==' '|| i==0)
            {
                if(i==0)
                {
                    startIndex=0;
                }
                else
                {
                    startIndex=i+1;
                }
                for(int j=startIndex;j<=endIndex;j++)
                {
                    cout<<str[j];
                }
                cout<<" ";
                endIndex=i-1;
            }
        }
    }
};
int main()
{
    char str[50];

    cout << "Enter the string\n";
    cin.getline(str, 20);

    Demo *dobj = new Demo(str);

    dobj->Display();
    return 0;
}