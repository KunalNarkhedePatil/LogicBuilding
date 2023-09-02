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
    void insertSorted(int iNo)
    {
        if (s.empty() || (!s.empty() && s.top() < iNo))
        {
            s.push(iNo);
            return;
        }
        int num = s.top();
        s.pop();
        insertSorted(iNo);
        s.push(num);
    }
    void sortStack()
    {
        if (s.empty())
        {
            return;
        }
        int iNo = s.top();
        s.pop();
        sortStack();
        insertSorted(iNo);
    }
};
int main()
{
    stack<int> sobj;

    sobj.push(10);
    sobj.push(40);
    sobj.push(20);
    sobj.push(50);
    sobj.push(5);

    Demo *dobj = new Demo(sobj);

    cout<<"Before sort stack top is "<<sobj.top()<<endl;

    dobj->sortStack();

    cout<<"After sort stack top is "<<dobj->s.top()<<endl;
        return 0;
}