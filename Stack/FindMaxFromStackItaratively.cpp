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

    int findMaxFromStack()
    {
        int iMax = s.top();

        while (!s.empty())
        {
            if (s.top() > iMax)
            {
                iMax = s.top();
            }
            s.pop();
        }
        return iMax;
    }
};
int main()
{
    stack<int> sobj;

    sobj.push(10);
    sobj.push(20);
    sobj.push(30);
    sobj.push(60);
    sobj.push(50);

    Demo *dobj = new Demo(sobj);

    int iRet = dobj->findMaxFromStack();

    cout << "Maximum element in the stack is " << iRet << endl;

    return 0;
}
