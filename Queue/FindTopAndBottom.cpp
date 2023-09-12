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
    pair<int, int> find_top_and_bottom()
    {
        int iTop = q.front();
        int iBottom = q.back();
        return make_pair(iTop, iBottom);
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
    q.push(60);
    q.push(70);

    Demo *dobj = new Demo(q);

    cout<<"Elements of queue is :";
    dobj->display();

    pair<int, int> iRet = dobj->find_top_and_bottom();

    cout << "Top element is :" << iRet.first << endl;
    cout << "Bottom element is :" << iRet.second << endl;
    return 0;
}