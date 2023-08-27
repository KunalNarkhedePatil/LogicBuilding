/*
CASE1:
Input:
10->20->30->40->50->NULL
Output:
Linked list is not circular
CASE2:
Input:
10->20->30->40->50->NULL
Output:
Linked list is circular
*/
#include "linkedlist.h"
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
};
int main()
{
    SinglyLinearLL *sobj = new SinglyLinearLL();

    sobj->insertAtLast(10);
    sobj->insertAtLast(20);
    sobj->insertAtLast(30);
    sobj->insertAtLast(40);
    sobj->insertAtLast(50);

    sobj->display();

    Demo *dobj = new Demo(sobj);

    // PNODE temp=sobj->first;
    // while(temp->next!=NULL)
    // {
    //     temp=temp->next;
    // }
    // temp->next=sobj->first;

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