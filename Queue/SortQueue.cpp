#include <iostream>
#include <queue>
using namespace std;

class Demo
{
public:
    deque<int> q;
    Demo(deque<int> &q)
    {
        this->q = q;
    }
    void insertSorted(int iVal)
    {
        if (q.empty() || q.back() < iVal)
        {
            q.push_back(iVal);
            return;
        }
        int num = q.back();
        q.pop_back();
        insertSorted(iVal);
        q.push_back(num);
    }
    void sortQueue()
    {
        if (q.empty())
        {
            return;
        }
        int iNo = q.front();
        q.pop_front();
        sortQueue();
        insertSorted(iNo);
    }
    void display()
    {
        deque<int> temp = q;
        while (!temp.empty())
        {
            cout << temp.front() << " ";
            temp.pop_front();
        }
        cout << endl;
    }
};
int main()
{
    deque<int> q;

    q.push_back(10);
    q.push_back(30);
    q.push_back(20);
    q.push_back(40);
    q.push_back(50);
    q.push_back(30);

    Demo *dobj = new Demo(q);
    cout << "Before sort queue is:";
    dobj->display();

    dobj->sortQueue();
    cout << "After sort queue is:";
    dobj->display();
    return 0;
}