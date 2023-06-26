#include <iostream>
using namespace std;
class Demo
{
public:
    int countDigit(int iNo)
    {
        int iCnt = 0;

        while (iNo != 0)
        {
            iCnt++;
            iNo = iNo / 10;
        }
        return iCnt;
    }
};
int main()
{
    int iNo = 0;
    Demo dobj;

    cout << "Enter the number\n";
    cin >> iNo;

    int iRet = dobj.countDigit(iNo);

    cout << "Number of digit in number are " << iRet << endl;
    return 0;
}