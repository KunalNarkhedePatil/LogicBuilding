#include <iostream>
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
        this->Front = -1;
        this->Rear = -1;
        this->iSize = iSize;
        this->Rear;
    }
    bool isEmpty()
    {
        if (Front == -1 && Rear == -1)
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
        if ((Front == 0 && Rear == iSize - 1) || ((Rear + 1) % iSize) == Front)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enQueue(int val)
    {
        if (isFull())
        {
            cout << "Queue is full" << endl;
            return;
        }
        if (isEmpty())
        {
            Front++;
            Rear++;

            Arr[Rear] = val;
        }
        else
        {
            Rear = (Rear + 1) % iSize;
            Arr[Rear] = val;
        }
    }
    void deQueue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        if (Front == Rear)
        {
            cout << "HElo" << endl;
            Front = -1;
            Rear = -1;
        }
        else
        {
            Front = (Front + 1) % iSize;
        }
    }
    void Display()
    {
        for (int i = Front; i != Rear+1; i = (i + 1) % iSize)
        {
            cout << Arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{

    Queue obj(10);

    obj.enQueue(10);
    obj.enQueue(20);
    obj.enQueue(30);
    obj.enQueue(40);
    obj.enQueue(50);

    obj.Display();

    obj.deQueue();
    obj.deQueue();
    obj.deQueue();
    obj.deQueue();
    obj.deQueue();

    obj.Display();

    return 0;
}