#include <iostream>
using namespace std;
class Queue
{
public:
    int iSize;
    int *Arr;
    int iFront;
    int iRare;
    Queue(int iSize = 10)
    {
        this->iSize = iSize;
        this->Arr = new int[iSize];
        this->iFront = -1;
        this->iRare = -1;
    }
    bool isEmpty()
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
    bool isFull()
    {
        if (iFront == 0 && iRare == iSize - 1 || iRare + 1 == iFront)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enQueueFront(int iVal)
    {
        if (isFull())
        {
            cout << "Queue is full\n";
            return;
        }
        if (isEmpty())
        {
            iFront = 0;
            iRare = 0;
        }
        else if (iFront == 0)
        {
            iFront = iSize - 1;
        }
        else
        {
            iFront--;
        }
        Arr[iFront] = iVal;
    }

    void enQueueRare(int iVal)
    {
        if (isFull())
        {
            cout << "Queue is full\n";
            return;
        }
        if (isEmpty())
        {
            iFront = 0;
            iRare = 0;
        }
        else if (iRare == iSize - 1)
        {
            iRare = 0;
        }
        else
        {
            iRare++;
        }
        Arr[iRare] = iVal;
    }
    void deQueueFront()
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
        else if (iFront == iSize - 1)
        {
            iFront = 0;
        }
        else
        {
            iFront++;
        }
    }
    void deQueueRare()
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
        else if (iRare == 0)
        {
            iRare = iSize - 1;
        }
        else
        {
            iRare--;
        }
    }
    int getFront()
    {
        return Arr[iFront];
    }
    int getRare()
    {
        return Arr[iRare];
    }
};
int main()
{

    Queue *obj = new Queue();

    obj->enQueueRare(10);
    obj->enQueueRare(20);
    obj->enQueueRare(30);
    obj->enQueueRare(40);

    cout << "Front :" << obj->getFront() << endl;
    cout << "Rare :" << obj->getRare() << endl;

    obj->enQueueFront(5);

    cout << "Front :" << obj->getFront() << endl;
    cout << "Rare :" << obj->getRare() << endl;

    obj->deQueueFront();

    cout << "Front :" << obj->getFront() << endl;
    cout << "Rare :" << obj->getRare() << endl;
    obj->deQueueRare();

    cout << "Front :" << obj->getFront() << endl;
    cout << "Rare :" << obj->getRare() << endl;

    return 0;
}