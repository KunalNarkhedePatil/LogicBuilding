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
    float calculateAverageOfStack()
    {
        int iSum = 0;
        int iCnt = 0;
        while (!s.empty())
        {
            iSum = iSum + s.top();
            iCnt++;
            s.pop();
        }
        return iSum / iCnt;
    }
};
int main()
{
    stack<int> sobj;

    sobj.push(10);
    sobj.push(20);
    sobj.push(30);
    sobj.push(40);
    sobj.push(50);

    Demo *dobj = new Demo(sobj);

    float fRet = dobj->calculateAverageOfStack();

    cout << "Average of stack is " << fRet << endl;
    return 0;
}