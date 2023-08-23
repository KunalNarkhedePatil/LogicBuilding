#include "doublylinkedlist.h"

using namespace std;

class DoublyLL
{
public:
    PNODE first;
    PNODE last;
    int size;

    DoublyLL();
    void insertAtLast(int iVal);
    void Display();
    void reverseLL();
    int Count();
};
DoublyLL::DoublyLL()
{
    this->first = NULL;
    this->last = NULL;
    this->size = 0;
};
void DoublyLL::insertAtLast(int iVal)
{
    PNODE newn = new Node(iVal);

    if (this->first == NULL && this->last == NULL)
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        last->next = newn;
        newn->prev = last;
        last = newn;
    }
    size++;
}
void DoublyLL::Display()
{
    PNODE temp = first;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}
void DoublyLL::reverseLL()
{
    PNODE temp = last->prev->next;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->prev;
    }
    cout << "NULL\n";
}
int main()
{
    DoublyLL *dobj = new DoublyLL();

    dobj->insertAtLast(10);
    dobj->insertAtLast(20);
    dobj->insertAtLast(30);
    dobj->insertAtLast(40);
    dobj->insertAtLast(50);

    dobj->Display();

    dobj->reverseLL();

    return 0;
}
