//Remove all elements greater than a number from a queue
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
    void remove_greater_than(int iNo)
    {
        queue<int> temp;
        while (!q.empty())
        {
            if (q.front() > iNo)
            {
                q.pop();
            }
            else
            {

                temp.push(q.front());
                q.pop();
            }
        }
        q = temp;
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
    q.push(50);
    q.push(60);
    q.push(40);
    q.push(70);
    q.push(80);

    Demo *dobj = new Demo(q);
    cout << "Before Remove Queue is:";
    dobj->display();

    dobj->remove_greater_than(40);
    cout << "After Remove Queue is:";
    dobj->display();
    return 0;
}