#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node * next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

class SinglyLL
{
    Node * first;
    int size;
   public:
    SinglyLL()
    {
        first=NULL;
        size=0;
    }

    bool isEmpty()
    {
        if(first==NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void insertAtFirst(int iVal)
    {
        Node * newn=new Node(iVal);

        if(isEmpty())
        {
            first=newn;
        }
        else
        {
            Node *temp=first;

            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newn;
        }
        size++;
    }
    void Display()
    {
        Node * temp=first;

        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    Node * findNthNodeFromEnd(int nodeNo)
    {
        if(nodeNo<0)
        {
            return NULL;
        }
        int Pos=size-nodeNo;
        if(Pos<0)
        {
            cout<<"Invalid position"<<endl;
            return NULL;
        }
        Node *temp=first;
        for(int i=0;i<Pos;i++)
        {
            temp=temp->next;
        }
        return temp;
    }
    int Count()
    {
        return size;
    }
};
int main()
{
    SinglyLL *obj=new SinglyLL();
    obj->insertAtFirst(1);
    obj->insertAtFirst(2);
    obj->insertAtFirst(3);
    obj->insertAtFirst(4);

    obj->Display();

    Node * RetNode=obj->findNthNodeFromEnd(4);

    cout<<"Node is "<<RetNode->data<<endl;

    
    return 0;
}