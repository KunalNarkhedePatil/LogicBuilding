#include<iostream>
#include<stack>

using namespace std;
class Demo
{
    public:

    stack<int> s;

    Demo(stack<int> s)
    {
        this->s=s;
    }
    bool isMatch(char a,char b)
    {
        if(a=='(' && b==')'||a=='[' && b==']'||a=='{' && b=='}')
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
    bool multipleParenthesisMatch(char *Exp)
    {
        while(*Exp!='\0')
        {
            char ch=*Exp;
            if(ch=='(' || ch=='['|| ch=='{')
            {
                s.push(ch);
            }
            else if(ch==')' || ch==']'|| ch=='}')
            {
                if(s.empty())
                {
                    return false;
                }
                char a=s.top();
                s.pop();
                if(!isMatch(a,ch))
                {
                    return false;
                }
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

    Demo *dobj=new Demo(sobj);

    cout<<"Enter the Expression\n";
    gets(Exp);

    if(dobj->multipleParenthesisMatch(Exp))
    {
        cout<<"Parenthesis are match\n";
    }
    else
    {
        cout<<"Parenthesis are not match\n";
    }
    return 0;

}