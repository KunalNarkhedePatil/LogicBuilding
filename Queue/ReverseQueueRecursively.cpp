#include <iostream>
#include <queue>
using namespace std;
class Demo
{
public:
    void reverseQueue(queue<int> &q)
    {
        if (q.empty())
        {
            return;
        }
        int iNo = q.front();
        q.pop();
        reverseQueue(q);
        q.push(iNo);
    }
    void display(queue<int> &q)
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

    Demo *dobj = new Demo();
    cout << "Before Reverse Queue is:";
    dobj->display(q);

    dobj->reverseQueue(q);
    cout << "After Reverse Queue is:";
    dobj->display(q);

    return 0;
}