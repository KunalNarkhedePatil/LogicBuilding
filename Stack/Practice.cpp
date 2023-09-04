#include <iostream>
#include <stack>

using namespace std;
class Demo
{
public:
    stack<int> s;

    Demo(stack<int> s)
    {
        this->s = s;
    }

    bool parenthesisMatch(char *Exp)
    {
        while(*Exp!='\0')
        {
            char ch=*Exp;
            if(ch=='(')
            {
                s.push(ch);
            }
            else if(ch==')')
            {
                if(s.empty())
                {
                    return false;
                }
                s.pop();
            }
            Exp++;
        }
        if(s.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    stack<int> sobj;

    char Exp[20];

    Demo *dobj = new Demo(sobj);

    cout << "Enter the Expression\n";
    gets(Exp);

    if (dobj->parenthesisMatch(Exp))
    {
        cout << "Parenthesis are match\n";
    }
    else
    {
        cout << "Parenthesis are not match\n";
    }
    return 0;
}