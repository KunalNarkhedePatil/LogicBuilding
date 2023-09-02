#include <iostream>
#include <stack>
using namespace std;
class Demo
{
public:
    stack<int> s;

    Demo(stack<int> &s)
    {
        this->s = s;
    }
    void deleteMiddle(int mid)
    {
        stack<int> temp;
        while (mid != 0)
        {
            int iNo = s.top();
            s.pop();
            mid--;
            temp.push(iNo);
        }

        s.pop();

        while (!temp.empty())
        {
            int iValue = temp.top();
            s.push(iValue);
            temp.pop();
        }
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
    sobj.push(60);

    Demo *dobj = new Demo(sobj);

    int count = 0;

    int mid = sobj.size() / 2;

    dobj->deleteMiddle(mid);
    return 0;
}