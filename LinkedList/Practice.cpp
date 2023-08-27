#include "linkedlist.h"
#include <map>
class Demo
{
public:
    SinglyLinearLL *sobj;

    Demo(SinglyLinearLL *sobj)
    {
        this->sobj = sobj;
    }
    bool checkCircularLL()
    {
        if (sobj->first == NULL)
        {
            return true;
        }
        else if (sobj->first->next == NULL)
        {
            return false;
        }
        else
        {
            PNODE temp = sobj->first->next;

            while (temp != NULL && temp != sobj->first)
            {
                temp = temp->next;
            }
            if (temp == sobj->first)
            {

                return true;
            }
            else
            {
                return false;
            }
        }
    }
    PNODE display()
    {
       if(sobj->first==NULL)
       {
          return NULL;
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
            break;
          }
       }
       return slow;

    }
};
int main()
{
    SinglyLinearLL *sobj = new SinglyLinearLL();

    sobj->insertAtLast(10);
    sobj->insertAtLast(20);
    sobj->insertAtLast(30);
    sobj->insertAtLast(40);
    sobj->insertAtLast(50);
    sobj->insertAtLast(60);
    sobj->insertAtLast(70);

    sobj->display();

    Demo *dobj = new Demo(sobj);

    PNODE temp = sobj->first;

    // if want to check the linked list contain loop then uncomment this
    PNODE Temp = NULL;
    while (temp->next != NULL)
    {
        if (temp->data == 50)
        {
            Temp = temp;
        }
        temp = temp->next;
    }
    temp->next = Temp;
    
    PNODE Intersection=dobj->display();

    PNODE slow=sobj->first;

    while(slow->next!=Intersection)
    {
        slow=slow->next;
        Intersection=Intersection->next;
    }
    slow->next=NULL;
    bool bRet = dobj->checkCircularLL();

    if (bRet == true)
    {
        cout << "Linked list is circular\n";
    }
    else
    {
        cout << "Linked list is not circular\n";
    }
    
    return 0;
}