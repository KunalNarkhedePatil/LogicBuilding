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

    bool parenthesisMatch(char *Str)
    {
        while (*Str != '\0')
        {
            if (*Str == '(')
            {
                s.push(*Str);
            }
            else if (*Str == ')')
            {
                if (s.empty())
                {
                    return false;
                }
                s.pop();
            }
            Str++;
        }
        if (s.empty())
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