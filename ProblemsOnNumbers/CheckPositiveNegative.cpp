#include<iostream>
using namespace std;
class Demo
{
    public:
    bool checkPosNeg(int iNo)
    {
        if(iNo>0)
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
    bool bRet=dobj.checkPosNeg(iNo);

    if(bRet==true)
    {
        cout<<"Number is Postive"<<endl;
    }
    else
    {
        cout<<"Number is nagative"<<endl;
    }
    return 0;
}