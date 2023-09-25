#include <iostream>
using namespace std;
class Demo
{
public:
    int countDigit(int iNo)
    {
        static int iCnt = 0;
        if (iNo == 0)
        {
            return iCnt;
        }
        iCnt++;
        countDigit(iNo / 10);
    }
};
int main()
{
    int iNo = 0;
    cout << "Enter the number\n";
    cin >> iNo;

    Demo *dobj = new Demo();

    int iRet = dobj->countDigit(iNo);

    cout << "count of digit is in number is " << iRet << endl;
    return 0;
}