#include <iostream>
#include <queue>
using namespace std;

class Demo
{
public:
    queue<int> q1;
    queue<int> q2;

    Demo(queue<int> &q1, queue<int> &q2)
    {
        this->q1 = q1;
        this->q2 = q2;
    }

    bool checkTwoQueueEqual()
    {
        if (q1.size() != q2.size())
        {
            return false;
        }
        int iFlag = 1;
        while (!q1.empty())
        {
            if (q1.front() != q2.front())
            {
                iFlag = 0;
                break;
            }
            q1.pop();
            q2.pop();
        }
        if (iFlag == 1)
        {
            return true;
        }
        else
        {
            return false;
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
    queue<int> q1;
    queue<int> q2;

    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);

    q2.push(10);
    q2.push(30);
    q2.push(30);
    q2.push(40);
    q2.push(50);

    Demo *dobj = new Demo(q1, q2);

    cout << "Queue 1:";
    dobj->display(q1);

    cout << "Queue 2:";
    dobj->display(q2);

    bool bRet = dobj->checkTwoQueueEqual();

    if (bRet == true)
    {
        cout << "Both queue are eual\n";
    }
    else
    {
        cout << "Both queue are not equal\n";
    }

    return 0;
}