#include<iostream>
using namespace std;

class Node
{
    public:
   int data;
   class Node *next;

   Node(int data)
   {
      this->data=data;
      this->next=NULL;
   }
};
typedef class Node * PNODE;

class StackLL
{
    public:
    int size;
    PNODE first;
   StackLL();
   void Push(int data);
   void Pop();
   void Display();
   int Size();
};
StackLL::StackLL()
{
    first=NULL;
    size=0;
}
void StackLL::Push(int data)
{
    PNODE newn=new Node(data);
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
   }
   size++;
}
void StackLL::Pop()
{
   if(first==NULL)
   {
      cout<<"Stack is empty\n";
      return;
   }
   else if(size==1)
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
void StackLL::Display()
{
   PNODE temp=first;

   while(temp!=NULL)
   {
     cout<<temp->data<<"->";
     temp=temp->next;
   }
   cout<<"NULL\n";
}
int StackLL::Size()
{
   return size;
}
int main()
{
    StackLL *sobj=new StackLL();
    sobj->Push(10);
    sobj->Push(20);
    sobj->Push(30);
    sobj->Push(40);
    sobj->Push(50);
    sobj->Pop();
    sobj->Display();

    cout<<"Number of element in the stack is "<<sobj->Size()<<endl;

    return 0;
}