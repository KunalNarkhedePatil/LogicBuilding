#include <iostream>
#include <queue>
using namespace std;

class Demo
{
public:
    void displayQueue()
    {
       queue<int> q;

       q.push(10);
       q.push(20);
       q.push(30);
       q.push(40);
       q.push(50);
       q.push(60);

       q.pop();
       q.pop();

       cout<<"Size of queue is "<<q.size()<<endl;
       cout<<"Front element is "<<q.front()<<endl;
       cout<<"Back element is "<<q.back()<<endl;

       //check queue is empty

       if(q.empty())
       {
          cout<<"Queue is empty\n";
       }
       else
       {
          cout<<"Queue is not empty\n";
       }
    }
};
int main()
{
    Demo *dobj = new Demo();

    dobj->displayQueue();
    return 0;
}