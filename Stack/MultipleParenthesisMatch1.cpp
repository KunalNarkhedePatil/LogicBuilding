#include <iostream>
using namespace std;
class Stack
{
private:
    int Top;
    int iSize;
    int *Arr;

public:
    Stack(int iNo);
    void push(char ch);
    char pop();
    int isMatch(char a,char b);
    int isEmpty();
    int isFull();
    bool multipleParenthesis(char Exp[]);
};
Stack::Stack(int iNo = 20)
{
    Top = -1;
    iSize = iNo;
    Arr = new int[iSize];
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
    if (Top == iSize - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Stack::isMatch(char a,char b)
{
    if((a=='(' && b==')')||(a=='[' && b==']')||a=='{' && b=='}')
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
    if (isFull())
    {
        cout << "Stack is Full\n";
    }
    else
    {
        Top++;
        Arr[Top] = ch;
    }
}
char Stack::pop()
{
    if (isEmpty())
    {
        cout << "Stack is Empty\n";
    }
    else
    {
        char ch = Arr[Top];
        Top--;
        return ch;
    }
}
bool Stack::multipleParenthesis(char *Exp)
{
    int i = 0;
    while (*Exp != '\0')
    {
        if (*Exp == '(' || *Exp == '[' || *Exp == '{')
        {
            push(Exp[i]);
        }
        else if (*Exp == ')' || *Exp == ']' || *Exp == '}')
        {
            if (isEmpty())
            {
                return false;
            }
            char ch = pop();
            if (!isMatch(ch, *Exp))
            {
                return false;
            }
        }
        Exp++;
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
    Stack *sobj = new Stack(20);
    char Exp[20];
    cout << "Enter the Expression\n";
    cin.getline(Exp, 20);

    if (sobj->multipleParenthesis(Exp))
    {
        cout << "Parentheisis are match\n";
    }
    else
    {
        cout << "Parenthesis are not match\n";
    }

    return 0;
}