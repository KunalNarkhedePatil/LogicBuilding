#include <iostream>
#include <queue>
using namespace std;
class Demo
{
public:
    queue<int> q;
    Demo(queue<int> &q)
    {
        this->q = q;
    }
    void solve(int count, int k)
    {
        if (count == k)
        {
            return;
        }
        int iNo = q.front();
        q.pop();
        solve(count + 1, k);
        q.push(iNo);
    }
    void reverseQueue(int k)
    {
        int count = 0;
        solve(count, k);

        int rem = q.size() - k;

        while (rem--)
        {
            int iNo = q.front();
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