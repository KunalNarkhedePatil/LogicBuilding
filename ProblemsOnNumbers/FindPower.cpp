#include <iostream>
using namespace std;
class Demo
{
public:
    int findPower(int iBase, int iExponent)
    {
        int iResult = 1;

        while (iExponent != 0)
        {
            iResult = iResult * iBase;
            iExponent--;
        }
        return iResult;
    }
};
int main()
{
    int iBase = 0, iExponent = 0;

    cout << "Enter the Base\n";
    cin >> iBase;

    cout << "Enter the Exponent\n";
    cin >> iExponent;

    Demo dobj;

    int iRet = dobj.findPower(iBase, iExponent);

    cout << "Power is " << iRet << endl;

    return 0;
}