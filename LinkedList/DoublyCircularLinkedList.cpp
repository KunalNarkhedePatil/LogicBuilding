#include "doublylinkedlist.h"
class DoublyCircularLL
{
    public:

    PNODE first;
    PNODE last;
    int size;

    DoublyCircularLL();
    void insertAtFirst(int iVal);
    void insertAtLast(int iVal);
    void insertAtPos(int iPos, int iVal);
    void deleteAtFirst();
    void deleteAtLast();
    void deleteAtPos(int iPos);
    void display();
    int count();
};

DoublyCircularLL::DoublyCircularLL()
{
   first=NULL;
   last=NULL;
   size=0;
}
void DoublyCircularLL::insertAtFirst(int iVal)
{
    PNODE newn=new Node(iVal);
    if(first==NULL)
    {
        first=newn;
        last=newn;
    }
    else
    {
        newn->next=first;
        newn->next->prev=newn;
        first=newn;
    }
    size++;
    last->next=first;
    first->prev=last;
}
void DoublyCircularLL::insertAtLast(int iVal)
{
    PNODE newn=new Node(iVal);
    if(first==NULL)
    {
        first=newn;
        last=newn;
    }
    else
    {
        last->next=newn;
        last->next->prev=last;
        last=newn;
    }
    size++;
    last->next=first;
    first->prev=last;
}
void DoublyCircularLL::insertAtPos(int iPos,int iVal)
{
   if(iPos<0 || iPos>size+1)
   {
      cout<<"Invalid Position\n";
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
void DoublyCircularLL::deleteAtFirst()
{
   if(first==NULL)
   {
      cout<<"Linked list is empty\n";
      return;
   }
   else if(first==last)
   {
      delete first;
      first=NULL;
      last=NULL;
   }
   else 
   {
       PNODE temp=first;
       first=first->next;
       delete temp;
   }
   last->next=first;
   first->prev=last;
   size--;
}
void DoublyCircularLL::deleteAtLast()
{
   if(first==NULL)
   {
      cout<<"Linked list is empty\n";
      return;
   }
   else if(first==last)
   {
      delete first;
      first=NULL;
      last=NULL;
   }
   else 
   {
      PNODE temp=last->prev;
      delete temp->next;
      last=temp;
   }
   last->next=first;
   first->prev=last;
   size--;
}
void DoublyCircularLL::deleteAtPos(int iPos)
{
   if(iPos<0 || iPos>size)
   {
      cout<<"Invalid Position\n";
   }
   else if(iPos==1)
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
      PNODE taragated=temp->next;
      temp->next=taragated->next;
      temp->next->prev=temp;
      delete taragated;
   }
}
void DoublyCircularLL::display()
{
    PNODE temp=first;
    do
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    } while (temp!=last->next);
    cout<<endl;
    
}
int DoublyCircularLL::count()
{
   return size;
}
int main()
{
    cout << "Doubly Linear Linked List\n";

    // insertion
    DoublyCircularLL *dobj = new DoublyCircularLL();
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