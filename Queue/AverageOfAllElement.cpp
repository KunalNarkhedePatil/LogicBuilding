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

    int averageOfAllElement()
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

    float iAvg = dobj->averageOfAllElement() / q.size();

    cout << "Average of all element in queue is " << iAvg << endl;

    return 0;
}