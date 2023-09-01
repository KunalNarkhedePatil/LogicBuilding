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
    void solve(int count, int mid)
    {
        if (count == mid)
        {
            cout <<"Middle element is "<< s.top() << endl;
            s.pop();
            return;
        }
        int iNo = s.top();
        s.pop();
        solve(count + 1, mid);
        s.push(iNo);
    }
    void deleteMiddle()
    {
        int count = 0;
        int mid = s.size() / 2;

        solve(count, mid);
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

    dobj->deleteMiddle();
}