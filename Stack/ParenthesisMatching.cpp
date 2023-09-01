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
    void Push(char ch);
    void Pop();
    bool ParenthesisMatch(char Exp[]);
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
void Stack::Push(char ch)
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
void Stack::Pop()
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
bool Stack::ParenthesisMatch(char Exp[])
{
    int i=0;

    while(Exp[i]!='\0')
    {
        if(Exp[i]=='(')
        {
             Push(Exp[i]);
        }
        else if(Exp[i]==')')
        {
            if(isEmpty())
            {
                return false;
            }
            Pop();
        }
        i++;
    }
    if(isEmpty())
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    Stack *sobj=new Stack();

    char Exp[20];

    cout<<"Enter the Expression\n";
    gets(Exp);

    if(sobj->ParenthesisMatch(Exp))
    {
        cout<<"Parenthesis are match\n";
    }
    else
    {
        cout<<"Parenthesis are not match\n";
    }
    return 0;
}