#include"linkedlist.h"
class Demo
{
    public:

    SinglyLinearLL *sobj;

    Demo(SinglyLinearLL *sobj)
    {
        this->sobj=sobj;
    }

    void reverse(PNODE prevNode,PNODE currNode)
    {
        if(currNode==NULL)
        {
            sobj->first=prevNode;
            return;
        }

        PNODE nextNode=currNode->next;
        reverse(currNode,nextNode);
        currNode->next=prevNode;
    }
    void ReverseLL()
    {
       PNODE prevNode=NULL;
       PNODE currNode=sobj->first;

       reverse(prevNode,currNode);
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

    sobj->display();

    Demo *dobj=new Demo(sobj);

    dobj->ReverseLL();

    sobj->display();




    return 0;
}