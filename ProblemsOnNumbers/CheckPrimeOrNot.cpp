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
        int iFlag = 1;
        int M=this->iNo/2;
        for (int i = 2; i <= M; i++)
        {
            if (this->iNo % i == 0)
            {
                iFlag = 0;
                break;
            }
        }
        if (iFlag == 1)
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