#include <iostream>
using namespace std;
class Demo
{
public:
    int iNo = 0;

    Demo(int iNo)
    {
        if (iNo < 0)
        {
            iNo = -iNo;
        }
        this->iNo = iNo;
    }
    bool checkPrime()
    {
        if (this->iNo == 1)
        {
            return false;
        }
        if (this->iNo == 2)
        {
            return true;
        }
        int iFlag = 0;
        int M=this->iNo/2;
        for (int i = 2; i <= M; i = i + 2)
        {
            if (this->iNo % i == 0)
            {
                iFlag = 1;
                break;
            }
            if(i==2)   
            {
                i++;
            }
        }
        if (iFlag == 0)
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

    bool bRet = dobj.checkPrime();

    if (bRet == true)
    {
        cout << "Number is prime\n";
    }
    else
    {
        cout << "Number is not prime\n";
    }

    return 0;
}