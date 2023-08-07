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
    void insertAtLast(int iVal);
    void dispaly();
    int count();
};
SinglyLinearLL::SinglyLinearLL()
{
    size = 0;
    first = NULL;
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