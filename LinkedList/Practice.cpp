#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;

    Node (int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
typedef class Node * PNODE;
class LinkedList
{
   private:

    PNODE first;
    int size;

    public:

    LinkedList()
    {
        first=NULL;
        size=0;
    }

    void insertAtLast(int data)
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
    void Display()
    {
        PNODE temp=first;

        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }

    int Count()
    {
        return this->size;
    }

};
int main()
{
    LinkedList *lobj=new LinkedList();

    lobj->insertAtLast(10);
    lobj->insertAtLast(20);
    lobj->insertAtLast(30);
    lobj->insertAtLast(40);
    lobj->insertAtLast(50);

    lobj->Display();

    cout<<"Number of node in the linked list are "<<lobj->Count()<<endl;



    return 0;
}

