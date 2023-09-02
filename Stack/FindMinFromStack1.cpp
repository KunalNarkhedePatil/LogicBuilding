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

    int findMinFromStack()
    {
        int iMin = s.top();

        while (!s.empty())
        {
            if (s.top() < iMin)
            {
                iMin = s.top();
            }
            s.pop();
        }
        return iMin;
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

    int iRet = dobj->findMinFromStack();
    cout << "Maximum element in the stack is " << iRet << endl;

    return 0;
}
