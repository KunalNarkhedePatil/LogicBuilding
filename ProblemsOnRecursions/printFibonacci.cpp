#include<iostream>
using namespace std;
class Demo
{
    public:

    void printFibonacci(int a,int b,int iNo)
    {
         if(iNo==0)
         {
            return;
         }
         int c=a+b;
         cout<<c<<" ";
         printFibonacci(b,c,iNo-1);
    }
};

int main()
{
    int a=0;
    int b=1;
    int iNo=0;
    cout<<"Enter the Number\n";
    cin>>iNo;

    Demo dobj;
    cout<<a<<" "<<b<<" ";
    dobj.printFibonacci(a,b,iNo);
    return 0;
}