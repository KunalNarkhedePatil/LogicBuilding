#include <iostream>
using namespace std;
class Demo
{
public:
    int findGreter(int iNo1, int iNo2)
    {
        if(iNo1>iNo2)
        {
            return iNo1;
        }
        else
        {
            return iNo2;
        }
    }
    int findLcmOfTwoNo(int iNo1, int iNo2)
    {
        int iMax = findGreter(iNo1, iNo2);
        while (1)
        {
            if (iMax % iNo1 == 0 && iMax % iNo2 == 0)
            {
                break;
            }
            iMax++;
        }
        return iMax;
    }
};
int main()
{
    int iNo1 = 0, iNo2 = 0;

    cout << "Enter the first number\n";
    cin >> iNo1;

    cout << "Enter the second number\n";
    cin >> iNo2;

    Demo dobj;

    int iRet = dobj.findLcmOfTwoNo(iNo1, iNo2);

    cout << "Lcm of " << iNo1 << " and " << iNo2 << " is " << iRet;

    return 0;
}