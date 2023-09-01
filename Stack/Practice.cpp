#include"stackarray.h"
class StackArray:public Stack
{
    public:
    int iSize;

    StackArray(int iSize):Stack(iSize)
    {
       cout<<"Stack using array\n";
    }

};
int main()
{
    int iSize=0;
    cout<<"Enter the size of stack"<<endl;
    cin>>iSize;

    StackArray *sobj=new StackArray(iSize);

    sobj->push(10);
    sobj->push(20);
    sobj->push(30);
    sobj->push(40);
    sobj->push(50);

    sobj->display();

    sobj->pop();
    sobj->pop();
    sobj->pop();
    sobj->pop();
    sobj->pop();
    sobj->pop();

    sobj->display();

    return 0;
}