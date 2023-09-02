#include <iostream>
#include <stack>

using namespace std;
class Demo
{
public:
    bool checkRedundantParenthesis(char *Exp)
    {
        stack<char> st;
        while (*Exp != '\0')
        {
            char ch = *Exp;

            if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
            {
                st.push(ch);
            }
            else
            {
                if (ch == ')')
                {
                    bool isRedundant = true;

                    while (st.top() != '(')
                    {
                        char top = st.top();

                        if (top == '+' || top == '-' || top == '*' || top == '/')
                        {
                            isRedundant = false;
                        }
                        st.pop();
                    }

                    if (isRedundant == true)
                    {
                        return true;
                    }
                    st.pop();
                }
            }
            Exp++;
        }
        return false;
    }
};

int main()
{
    char Exp[20];

    Demo *dobj = new Demo();

    cout << "Enter the Expression\n";
    gets(Exp);

    if (dobj->checkRedundantParenthesis(Exp))
    {
        cout << "Redundant parenthesis\n";
    }
    else
    {
        cout << "not Redundant parenthesis\n";
    }
    return 0;
}