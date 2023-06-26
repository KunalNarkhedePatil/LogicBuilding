#include <iostream>
using namespace std;
class Demo
{
public:
    int sumOfDigitOfNo(int iNo)
    {
        int iSum = 0;

        while (iNo != 0)
        {
            iSum = iSum + iNo % 10;
            iNo = iNo / 10;
        }
        return iSum;
    }
};
int main()
{
    int iNo = 0;
    cout << "Enter the number\n";
    cin >> iNo;

    Demo dobj;

    int iRet = dobj.sumOfDigitOfNo(iNo);

    cout << "Sum of all digit are " << iRet << endl;

    return 0;
}