#include<iostream>
using namespace std;
class Demo
{
    public:

    int sumOfNaturalNo(int iNo,int i)
    {
        static int iSum=0;

        if(i==iNo)
        {
            iSum=iSum+i;
            return iSum;
        }
        iSum=iSum+i;
        sumOfNaturalNo(iNo,i+1);
    }

};
int main()
{
    Demo dobj;
    int iRet=dobj.sumOfNaturalNo(5,1);

    cout<<"Sum is :"<<iRet<<endl;

    return 0;
}