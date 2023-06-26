#include<iostream>
using namespace std;
class Demo
{
    public:

    void findFobonacciSeries(int a,int b,int iNo)
    {
        if(iNo==0)
        {
            return;
        }
        int c=a+b;
        cout<<c<<" ";
        findFobonacciSeries(b,c,iNo-1);
    }
};
int main()
{
    int iNo=0;
    int a=0,b=1;

    cout<<"Enter the number\n";
    cin>>iNo;
    Demo dobj;
    cout<<"Fobonacci Series:";
    cout << a << " " << b<<" ";
    
    dobj.findFobonacciSeries(a,b,iNo-2);

    return 0;
}