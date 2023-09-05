#include <iostream>
using namespace std;
class Queue
{
public:
    int *Arr;
    int iFront;
    int iRare;
    int iSize;

    Queue(int iSize = 10);
    bool isEmpty();
    bool isFull();
    void enQueue(int iVal);
    void deQueue();
    void display();
};
Queue::Queue(int iSize)
{
    this->iFront = -1;
    this->iRare = -1;
    this->iSize = iSize;
    this->Arr = new int[iSize];
}
bool Queue::isEmpty()
{
    if (iFront == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Queue::isFull()
{
    if (this->iFront == 0 && iRare == iSize - 1 || iRare + 1 % iSize == iFront)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Queue::enQueue(int iVal)
{
    if (this->isFull())
    {
        cout << "Queue is full\n";
        return;
    }
    else if (isEmpty())
    {
        this->iFront++;
        this->iRare++;
        this->Arr[iRare] = iVal;
    }
    else
    {
        this->iRare = this->iRare + 1 % iSize;
        this->Arr[this->iRare] = iVal;
    }
}
void Queue::deQueue()
{
    if (isEmpty())
    {
        cout << "Queue is empty\n";
        return;
    }
    else
    {
        iFront = iFront + 1 % iSize;
    }
}
void Queue::display()
{
    for (int i = iFront + 1; i <= iRare; i++)
    {
        cout << this->Arr[i] << "->";
    }
    cout << endl;
}
int main()
{

    Queue *obj = new Queue();

    obj->enQueue(10);
    obj->enQueue(20);
    obj->enQueue(30);
    obj->enQueue(50);
    obj->enQueue(60);
    obj->enQueue(70);

    obj->display();

    obj->deQueue();

    obj->display();

    return 0;
}