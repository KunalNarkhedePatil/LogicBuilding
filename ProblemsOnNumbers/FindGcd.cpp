#include <iostream>
using namespace std;
class Demo
{
public:
    /*
    int findGcd(int iNo1,int iNo2)
    {
        int iGcd=0;
        int iNum=0;
        if(iNo1<iNo2)
        {
            iNum=iNo1;
        }
        else
        {
            iNum=iNo2;
        }
        for(int i=0;i<=iNum;i++)
        {
            if(iNo1%i==0 && iNo2%i==0)
            {
                iGcd=i;
            }
        }
        return iGcd;
    }
    */
    int findGcd(int iNo1, int iNo2)
    {
        int iGcd = 0;
        int i = 0;
        //here i should be init with i=1;
        for (i = 1; i <= iNo1 && i<=iNo2; i++)
        {
            if ((iNo1 % i == 0) && (iNo2 % i == 0))
            {
                iGcd = i;
            }
        }
        return iGcd;
    }
};
int main()
{
    int iNo1 = 0, iNo2 = 0;
    cout << "Enter the first number\n";
    cin >> iNo1;

    cout << "Enter the second number\n";
    cin >> iNo2;

    Demo dobj;

    int iRet = dobj.findGcd(iNo1, iNo2);

    cout << "GCD of " << iNo1 << " and " << iNo2 << " is " << iRet << endl;

    return 0;
}