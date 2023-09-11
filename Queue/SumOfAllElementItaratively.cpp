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

    int sumOfAllElement()
    {
        int iSum = 0;
        int iNo = 0;

        queue<int> temp = q;

        while (!temp.empty())
        {
            iNo = temp.front();
            iSum = iSum + iNo;
            temp.pop();
        }
        return iSum;
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

    cout << "Element of queue is :";
    dobj->display();

    cout << "Sum of all elements in the queue is " << dobj->sumOfAllElement() << endl;

    return 0;
}