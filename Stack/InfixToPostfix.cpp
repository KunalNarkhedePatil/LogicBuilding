#include <iostream>
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
    char Pop();
    int isOperator(char ch);
    int Precedence(char ch);
    char StackTop();
    void InfixToPostfix(char *Infix, char *Postfix);
};
Stack::Stack()
{
    Top = -1;
    size = 20;
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
    if (isEmpty())
    {
        cout << "Stack is empty\n";
    }
    else
    {
        char ch = Arr[Top];
        Top--;
        return ch;
    }
}
int Stack::isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '/' || ch == '*')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Stack::Precedence(char ch)
{
    if (ch == '/' || ch == '*')
    {
        return 2;
    }
    else if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
char Stack::StackTop()
{
    return Arr[Top];
}
void Stack::InfixToPostfix(char *Infix, char *Postfix)
{
    int i = 0;
    int j = 0;

    while (Infix[i] != '\0')
    {
        if (!isOperator(Infix[i]))
        {
            Postfix[j] = Infix[i];
            i++;
            j++;
        }
        else
        {
            if (Precedence(Infix[i]) > Precedence(StackTop()))
            {
                Push(Infix[i]);
                i++;
            }
            else
            {
                Postfix[j] = Pop();
                j++;
            }
        }
    }
    while (!isEmpty())
    {
        Postfix[j] = Pop();
        j++;
    }
    Postfix[j] = '\0';
}
int main()
{
    Stack *sobj = new Stack();

    char Infix[20];

    cout << "Enter the Expression\n";
    gets(Infix);

    char *Postfix = NULL;

    Postfix = new char(sizeof(char) + 1);

    sobj->InfixToPostfix(Infix, Postfix);

    cout << "Postfix expression is " << Postfix << endl;

    return 0;
}