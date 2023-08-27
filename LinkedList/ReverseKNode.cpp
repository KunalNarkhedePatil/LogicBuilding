#include "linkedlist.h"
class Demo
{
public:
    SinglyLinearLL *sobj;

    Demo(SinglyLinearLL *sobj)
    {
        this->sobj = sobj;
    }
    PNODE kReverse(PNODE first, int k)
    {
        if (first == NULL)
        {
            return NULL;
        }

        PNODE prevNode = NULL;
        PNODE currNode = first;
        PNODE nextNode = NULL;
        int iCnt = 0;

        while (currNode != NULL && iCnt < k)
        {
            nextNode = currNode->next;
            currNode->next = prevNode;

            prevNode = currNode;
            currNode = nextNode;
            iCnt++;
        }

        if (nextNode != NULL)
        {
            first->next = kReverse(nextNode, k);
        }
        return prevNode;  //pratek itaration madhala last vala prev 
    }
    void display(PNODE first)
    {
        while (first != NULL)
        {
            cout << first->data << "->";
            first = first->next;
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

    PNODE first = dobj->kReverse(sobj->first, 2);
    dobj->display(first);

    return 0;
}
