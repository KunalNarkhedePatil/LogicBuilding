/*
Input:
Before Reverse:
10->20->30->40->50->NULL
Output:
After Reverse:
50->40->30->20->10->NULL
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
    void reverse(PNODE prevNode, PNODE currNode)
    {
        if (currNode == NULL)
        {
            sobj->first = prevNode;
            return;
        }
        PNODE nextNode = currNode->next;
        reverse(currNode, nextNode);
        currNode->next = prevNode;
    }
    void ReverseLinkedListRecursively()
    {
        PNODE prevNode = NULL;
        PNODE currNode = sobj->first;
        reverse(prevNode, currNode);
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

    dobj->ReverseLinkedListRecursively();

    sobj->display();

    return 0;
}