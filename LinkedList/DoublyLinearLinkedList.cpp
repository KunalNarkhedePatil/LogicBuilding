#include "doublylinkedlist.h"

class DoublyLinearLL
{
public:
    PNODE first;
    int size;

    DoublyLinearLL();
    void insertAtFirst(int iVal);
    void insertAtLast(int iVal);
    void insertAtPos(int iPos, int iVal);
    void deleteAtFirst();
    void deleteAtLast();
    void deleteAtPos(int iPos);
    void display();
    int count();
};
DoublyLinearLL::DoublyLinearLL()
{
    first=NULL;
    size=0;
}
void DoublyLinearLL::insertAtFirst(int iVal)
{
    PNODE newn=new Node(iVal);
    if(first==NULL)
    {
        first=newn;
    }
    else
    {
        newn->next=first;
        newn->next->prev=newn;
        first=newn;
    }
    size++;
}
void DoublyLinearLL::insertAtLast(int iVal)
{
     PNODE newn=new Node(iVal);
    if(first==NULL)
    {
        first=newn;
    }
    else
    {
        PNODE temp=first;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        temp->next->prev=temp;
    }
    size++;
}
void DoublyLinearLL::insertAtPos(int iPos, int iVal)
{
    if(iPos<0 || iPos>size+1)
    {
        cout<<"Invalid Position\n";
        return;
    }
    else if(iPos==1)
    {
        insertAtFirst(iVal);
    }
    else if(iPos==size+1)
    {
        insertAtLast(iVal);
    }
    else
    {
        PNODE newn=new Node(iVal);
        PNODE temp=first;
        for(int i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        newn->next->prev=newn;
        temp->next=newn;
        temp->next->prev=temp;
        size++;
    }
}
void DoublyLinearLL::deleteAtFirst()
{
    if(first==NULL)
    {
        cout<<"Linked list is empty\n";
        return;
    }
    else if(first->next==NULL)
    {
        delete first;
        first=NULL;
    }
    else
    {
        PNODE temp=first;
        first=first->next;
        delete temp;
    }
    size--;
}
void DoublyLinearLL::deleteAtLast()
{
     if(first==NULL)
    {
        cout<<"Linked list is empty\n";
        return;
    }
    else if(first->next==NULL)
    {
        delete first;
        first=NULL;
    }
    else
    {
        PNODE temp=first;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
    size--;
}
void DoublyLinearLL::deleteAtPos(int iPos)
{
    if(iPos<0 || iPos>size)
    {
        cout<<"Invalid Position\n";
        return;
    }
    if(iPos==1)
    {
        deleteAtFirst();
    }
    else if(iPos==size)
    {
        deleteAtLast();
    }
    else
    {
        PNODE temp=first;
        for(int i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        PNODE targated=temp->next;
        temp->next=targated->next;
        temp->next->prev=temp;
        delete targated;
        size--;
    }
}
void DoublyLinearLL::display()
{
    PNODE temp=first;

    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
int DoublyLinearLL::count()
{
    return size;
}
int main()
{
    cout << "Doubly Linear Linked List\n";

    // insertion
    DoublyLinearLL *dobj = new DoublyLinearLL();
    dobj->insertAtFirst(50);
    dobj->insertAtFirst(40);
    dobj->insertAtFirst(30);
    dobj->insertAtFirst(20);
    dobj->insertAtFirst(10);
    dobj->insertAtLast(60);
    dobj->insertAtPos(3, 25);

    // deletion

    dobj->deleteAtFirst();
    dobj->deleteAtLast();
    dobj->deleteAtPos(2);

    dobj->display();
    cout << "Number of node in the linked list are:" << dobj->count() << endl;

    return 0;
}