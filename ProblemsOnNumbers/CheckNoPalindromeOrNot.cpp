#include <iostream>
using namespace std;
class Demo
{
public:
    int iNo;
    Demo(int iNo)
    {
        if (iNo < 0)
        {
            iNo = -iNo;
        }
        this->iNo = iNo;
    }
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
    bool checkPalindrome()
    {
        int iRet = reverseNo(this->iNo);
        if (iRet == this->iNo)
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

    Demo dobj(iNo);

    bool bRet = dobj.checkPalindrome();

    if (bRet == true)
    {
        cout << "Number is palindrome\n";
    }
    else
    {
        cout << "Number is not palindrome\n";
    }

    return 0;
}