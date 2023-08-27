/*
Input:
10->30->20->10->20->30->40->20->NULL
Output:
10->30->20->40->NULL
*/
#include"linkedlist.h"
class Demo
{
    public:
    SinglyLinearLL *sobj;
    Demo(SinglyLinearLL *sobj)
    {
        this->sobj=sobj;
    }
    void removeDuplicates() 
    {
        if(sobj->first==NULL)
        {
            return;
        }

        PNODE currNode=sobj->first;

        while(currNode!=NULL)
        {
            PNODE nextNode=currNode->next;
            PNODE prevNode=currNode;
            while(nextNode!=NULL)
            {
               if(currNode->data==prevNode->next->data)
               {
                   PNODE Targated=prevNode->next;
                   PNODE NextNextNode=Targated->next;

                   delete(Targated);

                   prevNode->next=NextNextNode;
                   nextNode=NextNextNode;
               }
               else
               {
                   nextNode=nextNode->next;
                   prevNode=prevNode->next;
               }
            }
            currNode=currNode->next;
        }
    }
};
int main()
{
    SinglyLinearLL *sobj=new SinglyLinearLL();

    sobj->insertAtLast(10);
    sobj->insertAtLast(30);
    sobj->insertAtLast(20);
    sobj->insertAtLast(10);
    sobj->insertAtLast(20);
    sobj->insertAtLast(30);
    sobj->insertAtLast(40);
    sobj->insertAtLast(20);

    sobj->display();

    Demo *dobj=new Demo(sobj);

    dobj->removeDuplicates();

    sobj->display();

    return 0;
}