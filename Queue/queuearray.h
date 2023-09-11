#include <iostream>
using namespace std;
class Queue
{
public:
    // characterstics
    int iFront;
    int iRare;
    int *Arr;
    int iSize;

    // behaviour
    Queue(int iSize = 10);
    bool isEmpty();
    bool isFull();
    int getFront();
    int getBack();
    void enQueue(int iVal);
    void deQueue();
    void display();
};
// constructor
Queue::Queue(int iSize)
{
    this->iFront = -1;
    this->iRare = -1;
    this->iSize = iSize;
    this->Arr = new int[this->iSize];
}
bool Queue::isEmpty()
{
    if (iFront == -1) // if(iFornt==-1  && iRare ==-1)
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
    if (iRare == iSize - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int Queue::getFront()
{
    if (isEmpty())
    {
        cout << "Queue is empty\n";
        return -1;
    }
    else
    {
        return Arr[iFront + 1];
    }
}
int Queue::getBack()
{
    if (isEmpty())
    {
        cout << "Queue is empty\n";
        return -1;
    }
    else
    {
        return Arr[iRare];
    }
}
void Queue::enQueue(int iVal)
{
    if (isFull())
    {
        cout << "Queue is full\n";
        return;
    }

    if (isEmpty())
    {
        iFront++;
        iRare++;

        Arr[iRare] = iVal;
    }
    else
    {
        iRare++;
        Arr[iRare] = iVal;
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
        iFront++;
    }
}
void Queue::display()
{
    if (isEmpty())
    {
        cout << "Queue is empty\n";
        return;
    }
    else
    {
        for (int i = iFront; i <= iRare; i++)
        {
            cout << Arr[i] << "->";
        }
        cout << endl;
    }
}