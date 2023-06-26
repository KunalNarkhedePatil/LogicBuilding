#include<iostream>
using namespace std;
class Demo
{
    public:

    int findFactorial(int iNo)
    {
        int iFact=1;

        for(int i=1;i<=iNo;i++)
        {
            iFact=iFact*i;
        }
        return iFact;
    }
};
int main()
{
    int iNo=0;

    cout<<"Enter the number to find factorial\n";
    cin>>iNo;

    Demo dobj;

    int iRet=dobj.findFactorial(iNo);

    cout<<"Factorial of "<<iNo<<" is "<<iRet<<endl;

    
    return 0;
}