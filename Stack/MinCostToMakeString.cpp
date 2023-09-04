/*
Input:
Enter the Expression
{}{{{}
Output:
Minimum cost to make a string is 2
*/
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

    int minCostToMakeString(char *Exp)
    {
        while (*Exp != '\0')
        {
            char ch = *Exp;
            if (*Exp == '{')
            {
                s.push(ch);
            }
            else
            {
                //closed brace
                if (!s.empty() && s.top() == '{')
                {
                    s.pop();
                }
                else
                {
                    s.push(ch);
                }
            }
            Exp++;
        }
        int a = 0;
        int b = 0;

        while (!s.empty())
        {
            if (s.top() == '{')
            {
                b++;
            }
            else
            {
                a++;
            }
            s.pop();
        }
        return (a + 1) / 2 + (b + 1) / 2;
    }
};
int main()
{
    stack<int> sobj;

    char Exp[20];

    Demo *dobj = new Demo(sobj);

    cout << "Enter the Expression\n";
    gets(Exp);

    int minCost = dobj->minCostToMakeString(Exp);

    cout << "Minimum cost to make a string is " << minCost << endl;
    return 0;
}