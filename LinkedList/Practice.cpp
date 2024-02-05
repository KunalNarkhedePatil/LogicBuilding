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

    int seachFirstOccurrence(int no)
    {
        PNODE temp=first;
        int iCnt=0;

        while(temp!=NULL)
        {
            iCnt++;
            if(temp->data==no)
            {
                return iCnt;
            }
            temp=temp->next;
        }
        return -1;

    }
    void FindLargestElement()
    {
        PNODE temp=first;

        int Max=temp->data;

        while(temp!=NULL)
        {
            if(temp->data>Max)
            {
                Max=temp->data;
            }
            temp=temp->next;
        }
        cout<<"Maximum number in the linked list is "<<Max<<endl;
    }
    void SumOfAllElement()
    {
        PNODE temp=first;
        int Sum=0;

        while(temp!=NULL)
        {
            Sum=Sum+temp->data;
            temp=temp->next;
        }
        cout<<"Sum of all element in the linked list are "<<Sum<<endl;
    }
    void findMiddleElement()
    {
        int iCnt=0;
        int Mid=(this->size/2)+1;
        PNODE temp=first;

        while(temp!=NULL)
        {
            iCnt++;
            if(iCnt==Mid)
            {
                cout<<"Middle element is "<<temp->data<<endl;
            }
            temp=temp->next;
        }
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

    int iRet=lobj->seachFirstOccurrence(30);

    if(iRet==-1)
    {
        cout<<"There is no element present in the linkedlist"<<endl;
    }
    else{
        cout<<"Element is present on the "<<iRet<<" index"<<endl;
    }

    //lobj->FindLargestElement();
    //lobj->SumOfAllElement();
    lobj->findMiddleElement();


    return 0;
}

