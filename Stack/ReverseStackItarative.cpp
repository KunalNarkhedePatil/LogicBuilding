#include<iostream>
#include<stack>
using namespace std;
class Demo
{
    public:

    stack<int> s;

    Demo(stack<int> s)
    {
        this->s=s;
    }

    void reverseStackItarative()
    {
        stack<int> temp;
        while(!s.empty())
        {
            temp.push(s.top());
            s.pop();
        }
        s=temp;
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

    cout << "Before stack reverse..top value is " << sobj.top() << endl;
    dobj->reverseStackItarative();
    cout << "After stack reverse..top value is " << dobj->s.top() << endl;

    return 0;
}