#include <iostream>
using namespace std;
class Demo
{
public:
    int iNo;
    Demo(int iNo)
    {
        if (iNo < 0)
        {
            iNo = -iNo;
        }
        this->iNo = iNo;
    }
    int countDigit(int iNo)
    {
        int iCnt=0;
        while(iNo!=0)
        {
            iCnt++;
            iNo=iNo/10;
        }
        return iCnt;
    }
    bool checkArmstrong()
    {
        int iCnt=countDigit(this->iNo);

        int iTemp=this->iNo;
        int iSum=0;
        while(iTemp!=0)
        {
            int iDigit=iTemp%10;
            int iMult=1;
            for(int i=1;i<=iCnt;i++)
            {
               iMult=iMult*iDigit;
            }
            iTemp=iTemp/10;
            iSum=iSum+iMult;
        }
        if(iSum==this->iNo)
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

    Demo dobj(iNo);

    bool bRet = dobj.checkArmstrong();

    if (bRet == true)
    {
        cout << "Number is Armstrong\n";
    }
    else
    {
        cout << "Number is not Armstrong\n";
    }
}