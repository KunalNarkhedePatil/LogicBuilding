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
    int maximumElement()
    {
        int iMax = q.front();

        queue<int> temp = q;

        while (!temp.empty())
        {
            int iNo = temp.front();
            if (temp.front() > iMax)
            {
                iMax = temp.front();
            }
            temp.pop();
        }
        return iMax;
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
    q.push(70);
    q.push(40);
    q.push(30);
    q.push(120);
    q.push(60);

    Demo *dobj = new Demo(q);

    cout << "Element of queue is :";
    dobj->display();

    cout << "Maximum element from queue is " << dobj->maximumElement() << endl;

    return 0;
}