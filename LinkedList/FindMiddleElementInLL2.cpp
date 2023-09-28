#include "linkedlist.h"
class Demo
{
public:
    SinglyLinearLL *sobj;

    Demo(SinglyLinearLL *sobj)
    {
        this->sobj = sobj;
    }
    PNODE findMiddleNode()
    {
        if (sobj->first == NULL)
        {
            return NULL;
        }
        if (sobj->first->next == NULL)
        {
            return sobj->first;
        }
        PNODE fast = sobj->first->next;
        PNODE slow = sobj->first;

        while (fast != NULL)
        {
            fast = fast->next;
            /*
            if (fast == NULL)
            {
                break;
            }
            else
            {
                fast=fast->next;
            }
            */
            if (fast != NULL)
            {
                fast = fast->next;
            }
            slow = slow->next;
        }
        return slow;
    }
};
int main()
{
    SinglyLinearLL *sobj = new SinglyLinearLL();
    Demo *dobj = new Demo(sobj);

    sobj->insertAtLast(10);
    sobj->insertAtLast(20);
    sobj->insertAtLast(30);
    sobj->insertAtLast(40);
    sobj->insertAtLast(50);
    sobj->insertAtLast(60);

    sobj->display();

    PNODE MiddleNode = dobj->findMiddleNode();

    if (MiddleNode != NULL)
    {
        cout << "Middle node is " << MiddleNode->data << endl;
    }

    return 0;
}