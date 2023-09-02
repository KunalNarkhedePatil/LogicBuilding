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

    void findMaxFromStack(int *iMax)
    {
        if (s.empty())
        {
            return;
        }
        int iNo = s.top();
        s.pop();
        findMaxFromStack(iMax);

                s.push(iNo);
        if (iNo > *iMax)
        {
            *iMax = iNo;
        }
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

    int iMax = 0;

    Demo *dobj = new Demo(sobj);

    dobj->findMaxFromStack(&iMax);
    cout << "Maximum element in the stack is " << iMax << endl;

    return 0;
}
