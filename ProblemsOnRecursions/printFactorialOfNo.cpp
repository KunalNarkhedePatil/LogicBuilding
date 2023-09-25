#include <iostream>
using namespace std;
class Demo
{
public:
    int printFactorial(int iNo, int i)
    {
        static int iMult = 1;

        if (i == iNo)
        {
            iMult = iMult * i;
            return iMult;
        }
        iMult = iMult * i;
        printFactorial(iNo, i + 1);
    }
};
int main()
{
    int iNo = 0;
    cout << "Enter the number\n";
    cin >> iNo;

    Demo dobj;

    cout << "Factorial of " << iNo << " is " << dobj.printFactorial(iNo, 1) << endl;
    return 0;
}