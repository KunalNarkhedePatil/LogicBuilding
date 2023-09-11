#include<iostream>
#include<queue>
#include<stack>

using namespace std;
class Demo
{
    public:
    stack<int> s;

    queue<int> reverseQueue(queue<int> &q)
    {
        int element=0;
        while(!q.empty())
        {
            element=q.front();
            q.pop();
            s.push(element);
        }
        while(!s.empty())
        {
            element=s.top();
            s.pop();
            q.push(element);
        }
        return q;
    }
    void display(queue<int> &q)
    {
       queue<int> temp=q;

       while(!temp.empty())
       {
           cout<<temp.front()<<" ";
           temp.pop();
       }
       cout<<endl;
    }
};
int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    Demo *dobj=new Demo();
    cout<<"Before Reverse Queue is:";
    dobj->display(q);

    q=dobj->reverseQueue(q);
    cout<<"After Reverse Queue is:";
    dobj->display(q);


    

    return 0;
}