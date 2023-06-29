#include<iostream>
using namespace std;
class Demo
{
    public:
    int findFactorial(int iNo)
    {
        int iFact=1;
        for(int i=1;i<=iNo;i++)
        {
            iFact=iFact*i;
        }
        return iFact;
    }
    bool checkStrong(int iNo)
    {
        int iTemp=iNo;
        int iSum=0;
        while(iTemp!=0)
        {
            iSum=iSum+findFactorial(iTemp%10);
            iTemp=iTemp/10;
        }
        if(iNo==iSum)
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
 int iNo = 0;
    cout << "Enter the number\n";
    cin >> iNo;

    Demo dobj;

    bool bRet = dobj.checkStrong(iNo);

    if (bRet == true)
    {
        cout << "Number is strong\n";
    }
    else
    {
        cout << "Number is not strong\n";
    }
    return 0;
}