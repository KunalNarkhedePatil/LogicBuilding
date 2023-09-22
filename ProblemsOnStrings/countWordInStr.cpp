#include<iostream>
#include<string>
using namespace std;
class Demo
{
    public:

    string str;

    Demo(string str)
    {
        this->str=str;
    }

    int countWordInStr()
    {
        if(str.length()==0)
        {
            return 0;
        }
       int i=0;
       int iCnt=0;
       while(str[i]!='\0')
       {
          if(str[i]==' ' || str[i]=='\n')
          {
             cout<<"inside";
             iCnt++;
          }
          i++;
       }
       return iCnt+1;
    }
};
int main()
{
    string str;

    cout<<"Enter the string"<<endl;
    cin>>str;

    Demo *dobj=new Demo(str);

    cout<<"Count of word is "<<dobj->countWordInStr()<<endl;

    return 0;
}