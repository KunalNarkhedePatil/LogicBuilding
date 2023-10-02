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

    void reverseLinkedListIteratively()
    {
        if(sobj->first==NULL||sobj->first==NULL)
        {
            return;
        }
        PNODE prevNode = NULL;
        PNODE currNode = sobj->first;
        PNODE nextNode = NULL;

        while (currNode != NULL)
        {
            nextNode = currNode->next;
            currNode->next = prevNode;

            prevNode = currNode;
            currNode = nextNode;
        }
        sobj->first = prevNode;
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

    cout << "Before Reverse:\n";
    sobj->display();
    Demo *dobj = new Demo(sobj);

    dobj->reverseLinkedListIteratively();
    cout << "After Reverse:\n";
    sobj->display();

    return 0;
}