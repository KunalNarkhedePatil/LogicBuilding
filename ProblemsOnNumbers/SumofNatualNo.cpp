#include <iostream>
using namespace std;
class Demo
{
public:
    int sumOfNaturalNo(int iNo)
    {
        int iSum = 0;

        for (int i = 1; i <= iNo; i++)
        {
            iSum = iSum + i;
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

    int iRet = dobj.sumOfNaturalNo(iNo);

    cout << "Sum of natural no is " << iRet << endl;

    return 0;
}