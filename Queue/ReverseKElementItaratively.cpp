#include <iostream>
#include <queue>
#include <stack>
using namespace std;
class Demo
{
public:
    queue<int> q;

    Demo(queue<int> &q)
    {
        this->q = q;
    }
    void reverseQueue(int k)
    {
        int iNo = 0;
        stack<int> s;
        for (int i = 1; i <= k; i++)
        {
            iNo = q.front();
            q.pop();
            s.push(iNo);
        }

        while (!s.empty())
        {
            iNo = s.top();
            s.pop();
            q.push(iNo);
        }
        int rem = q.size() - k;

        while (rem--)
        {
            iNo = q.front();
            q.pop();
            q.push(iNo);
        }
    }
    void display()
    {
        queue<int> temp = q;

        while (!temp.empty())
        {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
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

    Demo *dobj = new Demo(q);
    cout << "Before Reverse Queue is:";
    dobj->display();

    dobj->reverseQueue(3);
    cout << "After Reverse Queue is:";
    dobj->display();

    return 0;
}