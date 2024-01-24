#include <iostream>
using namespace std;
class Demo
{
public:
    int largestAmongThree(int iNo1, int iNo2, int iNo3)
    {
        if (iNo1 > iNo2 && iNo1 > iNo3)
        {
            return iNo1;
        }
        else if (iNo2 > iNo3)
        {
            return iNo2;
        }
         else
        {
            return iNo3;
        }
    }
};
int main()
{
    int iNo1 = 0, iNo2 = 0, iNo3 = 0;
    cout << "Enter the three numbers\n";
    cin >> iNo1 >> iNo2 >> iNo3;

    Demo dobj;

    int iRet = dobj.largestAmongThree(iNo1, iNo2, iNo3);

    cout << "Largest number is " << iRet << endl;

    return 0;
}