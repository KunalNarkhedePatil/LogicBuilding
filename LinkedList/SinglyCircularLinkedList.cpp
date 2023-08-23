#include "singlylinkedlist.h"

class SinglyCircularLL
{
public:
    // characterstics
    PNODE first;
    PNODE last;
    int size;

    // behaviour

    SinglyCircularLL();
    void insertAtFirst(int iVal);
    void insertAtLast(int iVal);
    void insertAtPos(int iPos, int iVal);
    void deleteAtFirst();
    void deleteAtLast();
    void deleteAtPos(int iPos);
    void display();
    int count();
};
SinglyCircularLL::SinglyCircularLL()
{
    first = NULL;
    last = NULL;
    size = 0;
}
void SinglyCircularLL::insertAtFirst(int iVal)
{
    PNODE newn = new Node(iVal);

    if (first == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    last->next = first;
    size++;
}
void SinglyCircularLL::insertAtLast(int iVal)
{
    PNODE newn = new Node(iVal);
    if (first == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        last = newn;
    }
    last->next = first;
    size++;
}
void SinglyCircularLL::insertAtPos(int iPos, int iVal)
{
    if (iPos < 0 || iPos > size + 1)
    {
        cout << "Invalid position\n";
        return;
    }
    if (iPos == 1)
    {
        insertAtFirst(iVal);
    }
    else if (iPos == size + 1)
    {
        insertAtLast(iVal);
    }
    else
    {
        PNODE temp = first;
        PNODE newn = new Node(iVal);

        for (int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        size++;
    }
}
void SinglyCircularLL::deleteAtFirst()
{
    if (first == NULL)
    {
        cout << "Linked list is empty\n";
        return;
    }
    else if (first == last)
    {
        delete first;
        delete last;
        first = NULL;
        last = NULL;
    }
    else
    {
        PNODE temp = first;
        first = first->next;
        delete temp;
    }
    last->next = first;
    size--;
}
void SinglyCircularLL::deleteAtLast()
{
    if (first == NULL)
    {
        cout << "Linked list is empty\n";
        return;
    }
    else if (first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        PNODE temp = first;

        while (temp->next->next != last->next)
        {
            temp = temp->next;
        }
        delete temp->next;
        last = temp;
    }
    last->next = first;
    size--;
}
void SinglyCircularLL::deleteAtPos(int iPos)
{
    if (iPos < 0 || iPos > size)
    {
        cout << "Invalid postion\n";
        return;
    }
    if (iPos == 1)
    {
        deleteAtFirst();
    }
    else if (iPos == size)
    {
        deleteAtLast();
    }
    else
    {
        PNODE temp = first;
        for (int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        PNODE targated = temp->next;
        temp->next = targated->next;
        delete targated;
        size--;
    }
}
void SinglyCircularLL::display()
{
    PNODE temp = first;

    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != last->next);
    cout << endl;
}
int SinglyCircularLL::count()
{
    return size;
}
int main()
{
    cout << "Singly Circular Linked List\n";

    // insertion
    SinglyCircularLL *sobj = new SinglyCircularLL();
    sobj->insertAtFirst(50);
    sobj->insertAtFirst(40);
    sobj->insertAtFirst(30);
    sobj->insertAtFirst(20);
    sobj->insertAtFirst(10);
    sobj->insertAtLast(60);
    sobj->insertAtPos(3, 25);

    // deletion

    sobj->deleteAtFirst();
    sobj->deleteAtLast();
    sobj->deleteAtPos(2);

    sobj->display();
    cout << "Number of node in the linked list are:" << sobj->count() << endl;

    return 0;
}