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
class StackLL
{
public:

    PNODE first;
    int iSize;

    StackLL();
    bool isEmpty();
    void push(int iVal);
    void pop();
    void display();
    int size();
};

 StackLL:: StackLL()
{
    this->first = NULL;
    this->iSize = 0;
}
bool  StackLL::isEmpty()
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
void  StackLL::push(int iVal)
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
void  StackLL::pop()
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
void  StackLL::display()
{
    PNODE temp = first;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}
int  StackLL::size()
{
    return iSize;
}