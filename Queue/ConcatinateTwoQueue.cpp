//Concatenate two queues
#include <iostream>
#include <queue>
using namespace std;
class Demo
{
public:
    void concatinate_two_queue(queue<int> &q1, queue<int> &q2)
    {
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
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
    Demo *dobj = new Demo();
    queue<int> q1;
    queue<int> q2;

    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);

    cout << "Queue 1:";
    dobj->display(q1);

    q2.push(60);
    q2.push(70);
    q2.push(80);
    q2.push(90);
    q2.push(100);

    cout << "Queue 2:";
    dobj->display(q2);

    cout << "After concatonation queue is :";
    dobj->concatinate_two_queue(q1, q2);
    dobj->display(q1);

    return 0;
}