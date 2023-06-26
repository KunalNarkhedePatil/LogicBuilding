#include<iostream>
using namespace std;
class Demo
{
    public:
    int sumOfTwoNo(int iNo1,int iNo2)
    {
        int iAns=0;
        iAns=iNo1+iNo2;

        return iAns;
    }
};
int main()
{
    Demo dobj;
    int iRet=dobj.sumOfTwoNo(10,21);

    cout<<"Sum of two number is "<<iRet<<endl;

    return 0;
}