#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int iVal)
    {
        this->data = iVal;
        this->next = NULL;
    }
};
typedef class Node *PNODE;

class SinglyLinearLL
{
public:
    // characterstics
    int size;
    PNODE first;

    // method

    SinglyLinearLL();
    ~SinglyLinearLL();
    void insertAtLast(int iVal);
    void deleteAtFirst();
    void deleteAtLast();
    void deleteAtPos(int Pos);
    void display();
    int count();
};
SinglyLinearLL::SinglyLinearLL() // constructor
{
    size = 0;
    first = NULL;
}

SinglyLinearLL::~SinglyLinearLL()
{
    while (size != 0)
    {
        deleteAtFirst();
    }
}
void SinglyLinearLL::insertAtLast(int iVal) // insert element at last
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
void SinglyLinearLL::deleteAtFirst() // delete element at first
{
    if (first == NULL)
    {
        cout << "Linked list is empty" << endl;
        return;
    }
    if (size == 1)
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

void SinglyLinearLL::deleteAtLast()  //// delete element at last
{
    if (first == NULL)
    {
        cout << "Linked list is empty" << endl;
        return;
    }
    if (size == 1)
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

void SinglyLinearLL::deleteAtPos(int iPos)  //// delete element at given pos
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
void SinglyLinearLL::display()
{
    PNODE temp = first;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}
int SinglyLinearLL::count()
{
    return size;
}