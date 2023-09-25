#include <iostream>
using namespace std;
class Demo
{
public:
    bool checkPrimeNo(int iNo)
    {
        if(iNo==1)
        {
            return false;
        }
        static int i = iNo / 2;

        if (i == 1)
        {
            return true;
        }
        else if (iNo % i == 0)
        {
            return false;
        }
        else
        {
            i = i - 1;
        }
    }
};
int main()
{
    int iNo = 0;
    cout << "Enter the number\n";
    cin >> iNo;

    Demo *dobj = new Demo();

    bool bRet = dobj->checkPrimeNo(iNo);

    if (bRet == true)
    {
        cout << iNo << " is the prime number\n";
    }
    else
    {
        cout << iNo << " is not an prime number\n";
    }
    return 0;
}