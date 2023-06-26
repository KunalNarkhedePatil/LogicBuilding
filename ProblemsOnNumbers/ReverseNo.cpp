#include <iostream>
using namespace std;
class Demo
{
public:
    int reverseNo(int iNo)
    {
        int iRev = 0;

        while (iNo != 0)
        {
            iRev = iRev * 10 + iNo % 10;
            iNo = iNo / 10;
        }
        return iRev;
    }
};
int main()
{
    int iNo = 0;
    cout << "Enter the number\n";
    cin >> iNo;

    Demo dobj;

    int iRet = dobj.reverseNo(iNo);

    cout << "Reverse No is " << iRet << endl;

    return 0;
}