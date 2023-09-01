#include<iostream>
#include<stack>

using namespace std;
class Demo
{
    public:

    stack<int> s;

    Demo(stack<int> &s)
    {
        this->s=s;
    }
    void insertAtBottom(int iValue)
    {
        if(s.empty())
        {
            s.push(iValue);
            return;
        }
        int iNo=s.top();
        s.pop();
        insertAtBottom(iValue);
        s.push(iNo);
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

    Demo *dobj=new Demo(sobj);

    dobj->insertAtBottom(70);

    return 0;
}