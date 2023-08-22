#include "linkedlist.h"
class Demo
{
    public:

    SinglyLinearLL *sobj;

    Demo(SinglyLinearLL *sobj)
    {
        this->sobj=sobj;
    }

    bool floydDetectLoop()
    {
        int iFlag=1;
        if(sobj->first==NULL)
        {
            return false;
        }

        PNODE slow=sobj->first;
        PNODE fast=sobj->first;

        while(slow!=NULL && fast!=NULL)
        {
            fast=fast->next;

            if(fast!=NULL)
            {
                fast=fast->next;
            }
            slow=slow->next;

            if(slow==fast)
            {
                iFlag=0;
                break;
            }
        }
        if(iFlag==0)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
int main()
{
SinglyLinearLL *sobj=new SinglyLinearLL();

    sobj->insertAtLast(10);
    sobj->insertAtLast(20);
    sobj->insertAtLast(30);
    sobj->insertAtLast(40);
    sobj->insertAtLast(50);
    sobj->insertAtLast(60);
    sobj->insertAtLast(70);

    sobj->display();

    Demo *dobj=new Demo(sobj);
    
    PNODE temp=sobj->first;

    //if want to check the linked list contain loop then uncomment this 
    // PNODE Temp=NULL;
    // while(temp->next!=NULL)
    // {
    //     if(temp->data==50)
    //     {
    //          Temp=temp;
    //     }
    //     temp=temp->next;
    // }
    // temp->next=Temp;

    if(dobj->floydDetectLoop())
    {
        cout<<"Linked list contain loop\n";
    }
    else
    {
        cout<<"Linked list not contain loop\n";
    }

        
    return 0;
}