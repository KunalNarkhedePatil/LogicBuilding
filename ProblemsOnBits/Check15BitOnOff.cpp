#include<iostream>
using namespace std;
typedef unsigned int UINT;
class Demo
{
    public:

    bool check15BitOnOf(UINT iNo)
    {
        UINT iResult=0;

        //Logic
        //0000 0000 0000 0000 0000 0100 0000 0000 0000
        //0x00000400

        UINT iMask=0x00004000;

        iResult=iNo&iMask;

        if(iResult==iMask)
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
    int iValue=0;
    bool bRet=false;

    cout<<"Enter the value"<<endl;
    cin>>iValue;

    Demo dobj;

    bRet=dobj.check15BitOnOf(iValue);

    if(bRet==true)
    {
        cout<<"15 th bit is ON"<<endl;
    }
    else
    {
        cout<<"15 th bit is OFF"<<endl;
    }


    return 0;
}