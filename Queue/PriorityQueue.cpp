#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    int prt;
    Node *next;

    Node(int iVal,int P)
    {
        this->data=iVal;
        this->prt=P;
        this->next=NULL;
    }
};
typedef class Node * PNODE;
class PriorityQueue
{
    public:

    PNODE front;
    PNODE rare;
    int iSize;
    int iCnt;

    PriorityQueue(int iSize)
    {
        front=NULL;
        rare=NULL;
        this->iSize=iSize;
        iCnt=0;
    }
    bool isEmpty()
    {
        if(this->front==NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void insert(int iVal,int P)
    {
        if(iCnt==iSize)
        {
            cout<<"Queue is full\n";
            return;
        }
        PNODE newNode=new Node(iVal,P);
        if(isEmpty())
        {
            front=newNode;
            rare=newNode;
            iCnt++;
        }
        else if(front->prt>newNode->prt)
        {
            newNode->next=front;
            front=newNode;
            iCnt++;
            return;
        }
        else if(front==rare) //queue contain only one node 
        {
            rare->next=newNode;
            rare=newNode;
            iCnt++;
            return;
        } 
        else 
        {
            PNODE temp=front;
            while(temp->next!=NULL && temp->next->prt<newNode->prt)
            {
                temp=temp->next;
            }
            newNode->next=temp->next;
            temp->next=newNode;
            iCnt++;
        }

    }
    void display()
    {
        PNODE temp=front;

        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
};
int main()
{
    PriorityQueue *obj=new PriorityQueue(10);
    obj->insert(10,3);
    obj->insert(20,1);
    obj->insert(30,4);
    obj->insert(70,6);
    obj->insert(30,4);
    obj->insert(110,2);
    obj->insert(28,5);
    obj->insert(78,7);

    obj->display();
    return 0;
}