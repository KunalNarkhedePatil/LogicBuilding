#include<iostream>
#include<queue>
using namespace std;
class Demo
{
    public:

    queue<int> q;

    Demo(queue<int> &q)
    {
        this->q=q;
    }
    void removeAllEvenElements()
    {
        queue<int> temp;
        while(!q.empty())
        {
            if(q.front()%2==0)
            {
                q.pop();
            }
            else
            {
                int iNo=q.front();
                q.pop();
                temp.push(iNo);
            }
        }
        q=temp;
    } 
    void display()
    {
        queue<int> temp=q;

        while(!temp.empty())
        {
            cout<<temp.front()<<" ";
            temp.pop();
        }
        cout<<endl;
    }
};
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    Demo *dobj = new Demo(q);
    cout << "Before Remove Queue is:";
    dobj->display();

    dobj->removeAllEvenElements();
    cout << "After Remove Queue is:";
    dobj->display();
    return 0;
}