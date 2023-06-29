#include <iostream>
using namespace std;
class Demo
{
public:
    int findSumOfFactors(int iNo)
    {
        int iSum = 0;
        for (int i = 1; i <= iNo / 2; i++)
        {
            if (iNo % i == 0)
            {
                iSum = iSum + i;
            }
        }
        return iSum;
    }
    bool checkPerfect(int iNo)
    {
        int iRet = findSumOfFactors(iNo);

        if (iRet == iNo)
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

    bool bRet = dobj.checkPerfect(iNo);
    if (bRet == true)
    {
        cout << "This is perfect number\n";
    }
    else
    {
        cout << "This is not perfect number\n";
    }

    return 0;
}