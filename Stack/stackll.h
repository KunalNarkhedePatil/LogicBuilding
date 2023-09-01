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
class linkedlist
{
    PNODE first;
    int iSize;

public:
    linkedlist();
    bool isEmpty();
    void push(int iVal);
    void pop();
    void display();
    int size();
};

linkedlist::linkedlist()
{
    this->first = NULL;
    this->iSize = 0;
}
bool linkedlist::isEmpty()
{
    if (first == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void linkedlist::push(int iVal)
{
    PNODE newn = new Node(iVal);
    if (this->isEmpty())
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
    iSize++;
}
void linkedlist::pop()
{
    if (this->isEmpty())
    {
        cout << "Linked list is empty\n";
    }
    else if (this->first->next == NULL)
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
    iSize--;
}
void linkedlist::display()
{
    PNODE temp = first;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}
int linkedlist::size()
{
    return iSize;
}