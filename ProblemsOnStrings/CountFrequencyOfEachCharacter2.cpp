#include<iostream>

using namespace std;
class Demo
{
    public:

    char *str;

    Demo(char str[])
    {
        this->str=str;
    }
    int countLength(char str[])
    {
       int iCnt=0;

       while(*str!='\0')
       {
          iCnt++;
          str++;
       }
       return iCnt;
    }
    void countFrequencyOfEachCharacter()
    {
        int size=countLength(str);

        int Freq[size];

        for(int i=0;i<size;i++)
        {
            Freq[i]=-1;
        }
        int iCnt=0;

        for(int i=0;i<size;i++)
        {
            iCnt=1;
            for(int j=i+1;j<size;j++)
            {
                if(str[i]==str[j])
                {
                    iCnt++;
                    str[j]=0;
                }
            }
            if(Freq[i]!=0)
            {
                Freq[i]=iCnt;
            }
        }

        for(int i=0;i<size;i++)
        {
            if(str[i]!=0)
            {
                cout<<str[i]<<" occurs "<<Freq[i]<<" times"<<endl;
            }
        }

    }


};
int main()
{
    char str[50];

    cout<<"Enter the string\n";
    cin.getline(str,20);

    Demo *dobj=new Demo(str);

    dobj->countFrequencyOfEachCharacter();
    return 0;
}