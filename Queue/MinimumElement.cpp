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
    int minimumElement()
    {
        int iMin = q.front();

        queue<int> temp = q;

        while (!temp.empty())
        {
            int iNo = temp.front();
            if (temp.front() < iMin)
            {
                iMin = temp.front();
            }
            temp.pop();
        }
        return iMin;
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

    cout << "Minimum element from queue is " << dobj->minimumElement() << endl;

    return 0;
}