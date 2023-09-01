/*
CASE1:
Input:
Enter the Expression
(a+b) 
Output:
Parenthesis are match
CASE2:
Input:
Enter the Expression
(1+2))
Output:
Parenthesis are not match
*/
#include<iostream>
using namespace std;
class Stack
{
    public:

    int Top;
    int size;
    int *Arr;

    Stack();
    int isFull();
    int isEmpty();
    void push(char ch);
    void pop();
    bool parenthesisMatch(char Exp[]);
};
Stack::Stack()
{
    Top=-1;
    size=10;
    Arr=new int[size];
}
int Stack::isEmpty()
{
   if(Top==-1)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}
int Stack::isFull()
{
   if(Top==size-1)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}
void Stack::push(char ch)
{
   if(isFull())
   {
      cout<<"Stack is full\n";
      return;
   }
   else
   {
      Top++;
      Arr[Top]=ch;
   }
}
void Stack::pop()
{
   if(isEmpty())
   {
      cout<<"Stack is empty\n";
      return;
   }
   else
   {
      Top--;
   }
}
bool Stack::parenthesisMatch(char *Exp)
{
   while(*Exp!='\0')
   {
       if(*Exp=='(')
       {
          push(*Exp);
       }
       else if(*Exp==')')
       {
          if(isEmpty())
          {
              return false;
          }
          pop();
       }
       Exp++;
   }
   if(isEmpty())
   {
      return true;
   }
   else
   {
      return false;
   }
}

int main()
{
    Stack *sobj=new Stack();

    char Exp[20];

    cout<<"Enter the Expression\n";
    gets(Exp);

    if(sobj->parenthesisMatch(Exp))
    {
        cout<<"Parenthesis are match\n";
    }
    else
    {
        cout<<"Parenthesis are not match\n";
    }
    return 0;
}