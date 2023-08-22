#include"linkedlist.h"
#include<map>

class Demo
{
    public:

    SinglyLinearLL *sobj;

    Demo(SinglyLinearLL *sobj)
    {
        this->sobj=sobj;
    }

    bool detectLoop()
    {
        int iFlag=1;
        if(sobj->first==NULL)
        {
            return false;
        }

        map<PNODE,bool> visited;

        PNODE temp=sobj->first;

        while(temp!=NULL)
        {
            if(visited[temp]==true)
            {
                iFlag=0;
                break;
            }
            visited[temp]=true;
            temp=temp->next;
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

    if(dobj->detectLoop())
    {
        cout<<"Linked list contain loop\n";
    }
    else
    {
        cout<<"Linked list not contain loop\n";
    }

    
    return 0;
}