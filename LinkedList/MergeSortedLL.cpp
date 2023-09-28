#include"linkedlist.h"
class Demo
{
    public:
    SinglyLinearLL *sobj1,*sobj2;

    Demo(SinglyLinearLL *sobj1,SinglyLinearLL *sobj2)
    {
        this->sobj1=sobj1;
        this->sobj2=sobj2;
    }
    void mergeSortedLL() 
    {
        PNODE temp=sobj1->first;

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=sobj2->first;
    }
    void display()
    {
        PNODE temp=sobj1->first;

        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    SinglyLinearLL *sobj1=new SinglyLinearLL();

    sobj1->insertAtLast(10);
    sobj1->insertAtLast(30);
    sobj1->insertAtLast(50);

    SinglyLinearLL *sobj2=new SinglyLinearLL();

    sobj2->insertAtLast(20);
    sobj2->insertAtLast(40);
    sobj2->insertAtLast(50);
    
    sobj1->display();
    sobj2->display();

    Demo *dobj=new Demo(sobj1,sobj2);

    dobj->mergeSortedLL();
    cout<<"After two sorted linked list:"<<endl;
    dobj->display();
    return 0;
}