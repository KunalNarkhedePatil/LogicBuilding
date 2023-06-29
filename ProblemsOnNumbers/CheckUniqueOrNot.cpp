//unique number means in numbers digits are not reapeted.
#include <iostream>
using namespace std;
class Demo
{
public:
    bool checkUnique(int iNo)
    {
        int Arr[10]={0};
        int iFlag = 0;
        while (iNo != 0)
        {
            int iDigit = iNo % 10;
            Arr[iDigit]++;
            iNo = iNo / 10;
        }

        for (int i = 0; i <= 9; i++)
        {
            if (Arr[i] > 1)
            {
                iFlag = 1;
                break;
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

    Demo dobj;

    bool bRet = dobj.checkUnique(iNo);

    if (bRet == true)
    {
        cout << "Number is unique\n";
    }
    else
    {
        cout << "Number is not unique\n";
    }

    return 0;
}