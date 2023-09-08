#include<iostream>
using namespace std;

class Queue
{
    public:
    int iFront;
    int iRare;
    int *Arr;
    int iSize;

    Queue(int iSize=10)
    {
        iSize=iSize;
        Arr=new int[iSize];
        iFront=-1;
        iRare=-1;
    }
    int isEmpty()
    {
       if(iFront==-1 && iRare ==-1)
       {
          return 1;
       }
       else
       {
          return 0;
       }
    }
    int isFull()
    {
        if(iRare==iSize-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void enQueue(int iNo)
    {
        if(isFull())
        {
            cout<<"Queue is full\n";
            return;
        }
        else
        {
            iRare++;
            Arr[iRare]=iNo;
        }
    }
    void deQueue()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty\n";
            return;
        }
        else
        {
            iFront++;
        }
    }
    int getFront()
    {
       return Arr[iFront+1];
    }
    int getRare()
    {
       return Arr[iRare];
    }
};
int main()
{
    Queue *obj=new Queue();

    obj->enQueue(10);
    obj->enQueue(20);
    obj->enQueue(30);
    obj->enQueue(40);
    obj->enQueue(50);
    obj->enQueue(60);

    cout<<"Front is "<<obj->getFront()<<endl;
    cout<<"Rare is "<<obj->getRare()<<endl;

    obj->deQueue();

    
    cout<<"Front is "<<obj->getFront()<<endl;
    cout<<"Rare is "<<obj->getRare()<<endl;

    return 0;
}