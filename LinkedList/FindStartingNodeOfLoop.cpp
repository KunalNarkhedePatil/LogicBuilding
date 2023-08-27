/*
Input:
10->20->30->40->50->60->70->NULL
Output:
Linked list contain loop
Loop start at 50
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
    PNODE floydDetectLoop()
    {
        if (sobj->first == NULL)
        {
            return NULL;
        }
        int iFlag = 1;
        PNODE slow = sobj->first;
        PNODE fast = sobj->first;

        while (slow != NULL && fast != NULL)
        {
            fast = fast->next;

            if (fast != NULL)
            {
                fast = fast->next;
            }
            slow = slow->next;

            if (slow == fast)
            {
                iFlag = 1;
                break;
            }
        }
        if (iFlag == 1)
        {
            return slow;
        }
        else
        {
            return NULL;
        }
    }
    PNODE findStartingLoop()
    {
        PNODE interSection = floydDetectLoop();
        PNODE slow = sobj->first;

        while (slow != interSection)
        {
            slow = slow->next;
            interSection = interSection->next;
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
    PNODE RetPNODE = dobj->floydDetectLoop();
    if (RetPNODE != NULL)
    {
        cout << "Linked list contain loop\n";
        PNODE LoopNode = dobj->findStartingLoop();
        cout << "Loop start at " << LoopNode->data << endl;
    }
    else
    {
        cout << "Linked list not contain loop\n";
    }

    return 0;
}