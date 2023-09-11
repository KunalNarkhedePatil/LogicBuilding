#include<iostream>
#include<queue>
using namespace std;

class Demo
{
    public:
    queue<int> &q; // Use a reference to the queue
    Demo(queue<int> &q) : q(q) // Initialize the reference in the constructor initializer list
    {
    }
    void insertSorted(int iVal)
    {
        if(q.empty() || iVal > q.front())
        {
            q.push(iVal);
            return;
        }
        int num = q.front();
        q.pop();
        insertSorted(iVal);
        q.push(num);
    }
    void sortQueue()
    {
        if(q.empty())
        {
            return;
        }
        int iNo = q.front();
        q.pop();
        sortQueue();
        insertSorted(iNo);
    }
    void display()
    {
       queue<int> temp = q;
       while(!temp.empty())
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
    q.push(80);
}