#include<iostream>
using namespace std;
class Demo
{
    public:
    bool checkEvenOdd(int iNo)
    {
        if(iNo%2==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    int iNo=0;

    cout<<"Enter the number\n";
    cin>>iNo;

    Demo dobj;
    bool bRet=dobj.checkEvenOdd(iNo);

    if(bRet==true)
    {
        cout<<"Number is Even\n";
    }
    else
    {
        cout<<"Number is Odd\n";
    }
    return 0;
}