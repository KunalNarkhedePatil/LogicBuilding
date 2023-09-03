#include<iostream>
#include<stack>
using namespace std;
class TwoStack
{
    public:
    
    int *Arr;
    int iTop1;
    int iTop2;
    int iSize;

    TwoStack(int iSize=10)
    {
        this->iSize=iSize;
        iTop1=-1;
        iTop2=iSize;
        Arr=new int[iSize];
    }

    void push1(int iVal)
    {
         if(iTop2-iTop1>1)   //or iTop1<iTop2-1
         {
            iTop1++;
            Arr[iTop1]=iVal;
         }
         else
         {
            cout<<"Stack is full\n";
         }
    }
    void push2(int iVal)
    {
        if(iTop2-iTop1>1)
        {
            iTop2--;
            Arr[iTop2]=iVal;
        }
        else
        {
            cout<<"Stack is full\n";
        }
    }
    int pop1()
    {
        if(iTop1>=0)
        {
            int iNo=Arr[iTop1];
            iTop1--;
            return iNo;
        }
        else
        {
            cout<<"Stack is empty\n";
        }
    }
    int pop2()
    {
        if(iTop2<iSize)
        {
            int iNo=Arr[iTop2];
            iTop2--;
            return iNo;
        }
        else
        {
            cout<<"Stack is empty\n";
        }
    }
};
int main()
{
    int size_of_stack=8;
    TwoStack *obj=new TwoStack(size_of_stack);

    obj->push1(10);
    obj->push1(20);
    obj->push1(30);
    obj->push1(40);
    obj->push1(50);

    obj->push2(60);
    obj->push2(70);
    obj->push2(80);

    //obj->push1(90);

    return 0;
}