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
    int calculateAverageStack(int iSum)
    {
        if (s.empty())
        {
            return 0;
        }
        int iNo = s.top();
        s.pop();
        iSum = iNo + calculateAverageStack(iSum);
        s.push(iNo);
        return iSum;
    }
};

int main()
{
    int iAns = 0;
    stack<int> sobj;
    sobj.push(10);
    sobj.push(20);
    sobj.push(30);
    sobj.push(40);
    sobj.push(50);

    Demo *dobj = new Demo(sobj);

    int iRet = dobj->calculateAverageStack(iAns) / sobj.size();

    cout << "Average of stack is " << iRet << endl;

    return 0;
}