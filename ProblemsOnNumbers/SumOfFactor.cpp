#include <iostream>
using namespace std;
class Demo
{
public:
    int sumOfFactor(int iNo)
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
};
int main()
{
    int iNo = 0;

    cout << "Enter the Number\n";
    cin >> iNo;

    Demo dobj;

    int iRet = dobj.sumOfFactor(iNo);

    cout << "Sum of factor is " << iRet << endl;

    return 0;
}