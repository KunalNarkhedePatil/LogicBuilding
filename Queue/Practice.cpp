#include<iostream>
using namespace std;
class Queue
{
    public:

    int Front;
    int Rear;
    int *Arr;
    int iSize;

    Queue(int iSize)
    {
        this->Front=-1;
        this->Rear=-1;
        this->iSize=iSize;
        this->Arr=new int[this->iSize];
    }
    bool isEmpty()
    {
        if(Front==-1 && Rear==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        if((Front==0 && Rear==iSize-1 ) || Rear+1==Front)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enQueueFront(int val)
    {
        if(isFull())
        {
            cout<<"Queue is full"<<endl;
            return;
        }
        if(isEmpty())
        {
            Front++;
            Rear++;
        }
        if(Front==0)
        {
            Front=iSize-1;
        }
        else
        {
            Front--;
        }
        Arr[Front]=val;
    }
    void enQueueRear(int val)
    {
       if(isFull())
       {
        cout<<"Queue is full"<<endl;
        return;
       }
       if(isEmpty())
       {
         Front++;
         Rear++;
       }
       if(Rear==iSize-1)
       {
           Rear=0;
       }
       else
       {
        Rear++;
       }
       Arr[Rear]=val;
    }
    void deQueueFront()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty"<<endl;
            return;
        }
        if(Front==Rear)
        {
            Front=-1;
            Rear=-1;
        }
        if(Front==iSize-1)
        {
            Front=0;
        }
        else
        {
            Front++;
        }
    }
    void deQueueRear()
    {
        if(isEmpty())
        {
            cout<<"Queue is full"<<endl;
            return;
        }

        if(Front==Rear)
        {
            Front=-1;
            Rear=-1;
        }
        if(Rear==0)
        {
            Rear==iSize-1;
        }
        else
        {
            Rear--;
        }
    }
}

int main()
{

    return 0;
}