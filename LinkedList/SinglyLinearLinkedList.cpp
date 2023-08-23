#include "singlylinkedlist.h"

class SinglyLinearLL
{
public:
    // characterstics
    int size;
    PNODE first;

    // method

    SinglyLinearLL();
    void insertAtFirst(int iVal);
    void insertAtLast(int iVal);
    void insertAtPos(int iPos, int iVal);
    void deleteAtFirst();
    void deleteAtLast();
    void deleteAtPos(int iPos);
    void dispaly();
    int count();
};
SinglyLinearLL::SinglyLinearLL()
{
    size = 0;
    first = NULL;
}
void SinglyLinearLL::insertAtFirst(int iVal)
{
    PNODE newn = new Node(iVal);
    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    size++;
}
void SinglyLinearLL::insertAtLast(int iVal)
{
    PNODE newn = new Node(iVal);
    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        PNODE temp = first;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    size++;
}
void SinglyLinearLL::insertAtPos(int iPos, int iVal)
{

    if (iPos < 0 || iPos > size + 1)
    {
        cout << "Invalid Position\n";
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
void SinglyLinearLL::deleteAtFirst()
{
    if (first == NULL)
    {
        cout << "Linked list is empty\n";
        return;
    }
    else if (first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        PNODE temp = first;
        first = first->next;
        delete temp;
    }
    size--;
}
void SinglyLinearLL::deleteAtLast()
{
    if (first == NULL)
    {
        cout << "Linked list is empty\n";
        return;
    }
    else if (first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        PNODE temp = first;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    size--;
}
void SinglyLinearLL::deleteAtPos(int iPos)
{
    if (iPos < 0 || iPos > size)
    {
        cout << "Invalid Position\n";
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
void SinglyLinearLL::dispaly()
{
    PNODE temp = first;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}
int SinglyLinearLL::count()
{
    return size;
}
int main()
{
    cout << "Singly Linear Linked List\n";

    // insertion
    SinglyLinearLL *sobj = new SinglyLinearLL();
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

    sobj->dispaly();
    cout << "Number of node in the linked list are:" << sobj->count() << endl;
}