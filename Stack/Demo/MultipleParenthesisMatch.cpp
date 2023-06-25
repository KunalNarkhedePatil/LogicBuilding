#include <iostream>
using namespace std;
class Stack
{
public:
    int Top;
    int size;
    int *Arr;

    Stack();
    int isEmpty();
    int isFull();
    void Push(char ch);
    char Pop();
    int isMatch(char a, char b);
    bool MultipleParenthesisMatch(char Exp[]);
};
Stack::Stack()
{
    Top = -1;
    size = 10;
    Arr = new int[size];
}
int Stack::isEmpty()
{
    if (Top == -1)
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
    if (Top == size - 1)
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
    if (isFull())
    {
        cout << "Stack is full\n";
        return;
    }
    else
    {
        Top++;
        Arr[Top] = ch;
    }
}
char Stack::Pop()
{
    char ch = '\0';
    if (isEmpty())
    {
        cout << "Stack is empty\n";
    }
    else
    {
        ch = Arr[Top];
        Top--;
    }
    return ch;
}
int Stack::isMatch(char a, char b)
{
    if ((a == '(' && b == ')' )|| (a == '[' && b == ']') || (a == '{' && b == '}'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool Stack::MultipleParenthesisMatch(char Exp[])
{
    int i = 0;
    while (Exp[i] != '\0')
    {
        if (Exp[i] == '(' || Exp[i] == '{' || Exp[i] == '[')
        {
            Push(Exp[i]);
        }
        else if (Exp[i] == ')' || Exp[i] == '}' || Exp[i] == ']')
        {
            if (isEmpty())
            {
                return false;
            }
            char ch = Pop();
            if (!isMatch(ch, Exp[i]))
            {
                return false;
            }
        }
        i++;
    }
    if (isEmpty())
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
    Stack *sobj = new Stack();

    char Exp[20];
    cout << "Enter the Expression\n";
    gets(Exp);

    if (sobj->MultipleParenthesisMatch(Exp))
    {
        cout << "Parenthesis are match\n";
    }
    else
    {
        cout << "Parenthesis are not match\n";
    }
}