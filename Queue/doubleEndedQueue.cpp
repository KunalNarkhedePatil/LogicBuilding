#include <iostream>
using namespace std;

class DeQueue
{
public:
    int Front;
    int Rare;
    int iSize;
    int *Arr;

    DeQueue(int data);
    int isEmpty();
    int isFull();
    int getFront();
    int getRare();
    void EnQueueFront(int iNo);
    void EnQueueRare(int iNo);
    void DeQueueFront();
    void DeQueueRare();
};
DeQueue::DeQueue(int data)
{
    Front = Rare = -1;
    iSize = data;
    Arr = new int[iSize];
}
int DeQueue::isEmpty()
{
    if (Front == -1 && Rare == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int DeQueue::isFull()
{
    if ((Front == 0 && Rare == iSize - 1) || Rare + 1 == Front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int DeQueue::getFront()
{
    return Arr[Front];
}
int DeQueue::getRare()
{
    return Arr[Rare];
}
void DeQueue::EnQueueFront(int iNo)
{
    if (isFull())
    {
        cout << "Queue is Full\n";
    }
    if (Front == -1)
    {
        Front = 0;
        Rare = 0;
    }
    else if (Front == 0)
    {
        Front = iSize - 1;
    }
    else
    {
        Front--;
    }
    Arr[Front] = iNo;
}
void DeQueue::EnQueueRare(int iNo)
{
    if (isFull())
    {
        cout << "Queue is full\n";
        return;
    }
    if (Front == -1)
    {
        Front = 0;
        Rare = 0;
    }
    else if (Rare == iSize - 1)
    {
        Rare = 0;
    }
    else
    {
        Rare++;
    }
    Arr[Rare] = iNo;
}
void DeQueue::DeQueueFront()
{
    if (isEmpty())
    {
        cout << "Queue is empty\n";
    }
    else
    {
        if (Front == Rare)
        {
            Front = -1;
            Rare = -1;
        }
        else if (Front == iSize - 1)
        {
            Front = 0;
        }
        else
        {
            Front++;
        }
    }
}
void DeQueue::DeQueueRare()
{
    if (isEmpty())
    {
        cout << "Queue is Empty\n";
    }
    else
    {
        if (Front == Rare)
        {
            Front = -1;
            Rare = -1;
        }
        else if (Rare == 0)
        {
            Rare = iSize - 1;
        }
        else
        {
            Rare--;
        }
    }
}
int main()
{
    DeQueue *qp = new DeQueue(6);
    qp->EnQueueRare(10);
    qp->EnQueueRare(20);
    qp->EnQueueRare(30);
    qp->EnQueueRare(40);
    qp->EnQueueRare(50);

    qp->DeQueueFront();

    cout << "Front : " << qp->getFront() << endl;
    cout << "Back : " << qp->getRare() << endl;

    return 0;
}