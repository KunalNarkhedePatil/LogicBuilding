#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    class Node *next;

    Node(int iVal)
    {
        this->data = iVal;
        this->next = NULL;
    }
};
typedef class Node *PNODE;
class Queue
{
public:
    PNODE iFront;
    PNODE iRare;
    int iSize;

    Queue();
    bool isEmpty();
    void enQueue(int iNo);
    void deQueue();
    int getFront();
    int getBack();
    int size();
};
Queue::Queue()
{
    this->iFront = NULL;
    this->iRare = NULL;
    this->iSize = 0;
}
bool Queue::isEmpty()
{
    if (iFront == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Queue::enQueue(int iNo)
{
    PNODE newn = new Node(iNo);
    if (iFront == NULL)
    {
        iFront = newn;
        iRare = newn;
    }
    else
    {
        iRare->next = newn;
        iRare = newn;
    }
    iSize++;
}
void Queue::deQueue()
{
    if (isEmpty())
    {
        cout << "Queue is empty\n";
        return;
    }
    else if (iFront == iRare)
    {
        delete iFront;
        delete iRare;
        iFront = NULL;
        iRare = NULL;
    }
    else
    {
        PNODE temp = iFront;
        iFront = iFront->next;
        delete temp;
    }
    iSize--;
}
int Queue::getFront()
{
    return iFront->data;
}
int Queue::getBack()
{
    return iRare->data;
}