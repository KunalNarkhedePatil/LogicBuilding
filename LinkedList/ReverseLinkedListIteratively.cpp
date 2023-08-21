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