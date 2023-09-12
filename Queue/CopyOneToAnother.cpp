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
    queue<int> copy_one_to_another()
    {
        queue<int> temp;
        while (!q.empty())
        {
            temp.push(q.front());
            q.pop();
        }
        return temp;
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
    q.push(70);
    q.push(40);
    q.push(30);
    q.push(120);
    q.push(60);

    Demo *dobj = new Demo(q);

    cout << "Original queue :";
    dobj->display(q);

    queue<int> temp = dobj->copy_one_to_another();

    cout << "Copied queue:";
    dobj->display(temp);

    return 0;
}