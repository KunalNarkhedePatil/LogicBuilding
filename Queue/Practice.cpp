#include<iostream>
using namespace std;
class Queue
{
    public:
    int Front;
    int Rear;
    int *Arr;
    int iSize;

    Queue()
    {
        Front=Rear=-1;
        this->iSize=10;
        Arr=new int[iSize];
    }
    bool empty()
    {
        if(Front==-1 && Rear ==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool full()
    {
        if(Front==0 && Rear == iSize-1 || Rear+1%iSize==Front)
        {
            return true;
        }
        else{
            return false;
        }
    }
    void push(int val)
    {
        if(full())
        {
            cout<<"Queue is full"<<endl;
            return ;
        }
        if(empty())
        {
            Front++;
            Rear++;
            Arr[Rear]=val;
        }
        else
        {
            Rear=((Rear+1)%iSize);
            Arr[Rear]=val;
        }
        
    }
    void pop()
    {
        if(empty())
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        if(Front==Rear)
        {
            Front=-1;
            Rear=-1;
        }
        else
        {
            Front=(Front+1)%iSize;
        }
    }
    void display()
    {
        int i=0;
        for(i=Front;i!=Rear;i=(i+1)%iSize)
        {
            cout<<i<<" ";
            cout<<Arr[i]<<" ";
        }
        cout<<Arr[i]<<" ";
        cout<<endl;
    }
};
int main()
{
    Queue *obj=new Queue();

    obj->push(10);
    obj->push(10);
    obj->push(10);
    obj->push(10);
    obj->push(10);
    obj->push(10);
    obj->push(10);
    obj->push(10);
    obj->push(10);
    obj->push(10);

    obj->pop();
    obj->pop();
    obj->pop();
    obj->pop();
    obj->push(10);
    obj->push(10);
    obj->push(10);
    obj->push(10);

    

    obj->display();
    return 0;
}