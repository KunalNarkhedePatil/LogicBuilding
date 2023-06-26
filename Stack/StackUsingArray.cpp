#include<iostream>
using namespace std;
class stack
{
    public:
    int top;
    int size;
    int *Arr;

    stack()
    {
        top=-1;
        size=5;
        Arr=new int[size];
    }
};
typedef class stack *PSTACK;
class StackArray
{
    public:

    void Push(PSTACK sp,int data);
    void Pop(PSTACK sp);
    int isEmpty(PSTACK sp);
    int isFull(PSTACK sp);
    void Display(PSTACK sp);
    int Size(PSTACK sp);
};
int StackArray::isFull(PSTACK sp)
{
   if(sp->top==sp->size-1)
   {
       return 1;
   }
   else
   {
      return 0;
   }
}
int StackArray::isEmpty(PSTACK sp)
{
    if(sp->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void StackArray::Push(PSTACK sp,int data)
{
    if(isFull(sp))
    {
        cout<<"Stack is full\n";
        return;
    }
    else
    {
        sp->top++;
        sp->Arr[sp->top]=data;
    }
}
void StackArray::Pop(PSTACK sp)
{
   if(isEmpty(sp))
   {
     cout<<"Stack is empty\n";
     return;
   }
   else
   {
      sp->top--;
   }
}
void StackArray::Display(PSTACK sp)
{
    for(int i=0;i<=sp->top;i++)
    {
        cout<<sp->Arr[i]<<"->";
    }

}
int StackArray::Size(PSTACK sp)
{
    return sp->top+1;
}
int main()
{
    stack *sp=new stack();
    StackArray *sobj=new StackArray();

    // sobj->Push(sp,10);
    // sobj->Push(sp,20);
    // sobj->Push(sp,30);
    // sobj->Push(sp,40);
    // sobj->Push(sp,50);
    // sobj->Push(sp,60);
    // sobj->Push(sp,70);
    sobj->Pop(sp);

    sobj->Display(sp);
    return 0;
}