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
    void insertAtBottom(int iValue)
    {
        if (s.empty())
        {
            s.push(iValue);
            return;
        }
        int iNo = s.top();
        s.pop();
        insertAtBottom(iValue);
        s.push(iNo);
    }
    void reverseStack()
    {
        if (s.empty())
        {
            return;
        }
        int iNo = s.top();
        s.pop();
        reverseStack();
        insertAtBottom(iNo);
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

    cout << "Before stack reverse..top value is " << sobj.top() << endl;

    dobj->reverseStack();

    cout << "After stack reverse..top value is " << dobj->s.top() << endl;

    return 0;
}
