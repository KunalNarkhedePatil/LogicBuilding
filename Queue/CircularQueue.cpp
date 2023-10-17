#include <iostream>
using namespace std;
class Queue
{
public:
    int *Arr;
    int iFront;
    int iRare;
    int iSize;

    Queue(int iSize = 7);
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
    if (iFront == -1 && iRare == -1)
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
    if (iFront == 0 && iRare == iSize - 1 || (iRare + 1) % iSize == iFront)
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
        this->iRare = (this->iRare + 1) % iSize;
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
    if (iFront == iRare)
    {
        iFront = -1;
        iRare = -1;
    }
    else
    {
        iFront = (iFront + 1) % iSize;
    }
}
void Queue::display()
{
    if(isEmpty())
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    int i = 0;
    for (i = iFront; i != iRare; i = (i + 1) % iSize)
    {
        cout << this->Arr[i] << "->";
    }
    cout << this->Arr[i] << "->";
    cout << endl;
}
int main()
{

    Queue *obj = new Queue();

    obj->enQueue(10);
    obj->enQueue(20);
    obj->enQueue(30);
    obj->enQueue(40);
    obj->enQueue(50);
    obj->enQueue(60);
    obj->enQueue(70);

    obj->deQueue();
    obj->deQueue();
    obj->deQueue();
    cout << obj->iFront << endl;

    obj->display();

    obj->enQueue(20);
    obj->enQueue(20);
    cout << obj->iRare << endl;
    obj->display();

    return 0;
}