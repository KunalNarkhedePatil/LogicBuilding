/*
Input:
10->30->20->10->20->30->40->20->NULL
Output:
10->30->20->40->NULL
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
    void sortLinkedList()
    {
        PNODE currNode = sobj->first;

        while (currNode != NULL)
        {
            PNODE nextNode = currNode->next;

            while (nextNode != NULL)
            {
                if (currNode->data > nextNode->data)
                {
                    int Temp = currNode->data;
                    currNode->data = nextNode->data;
                    nextNode->data = Temp;
                }
                else
                {
                    nextNode = nextNode->next;
                }
            }
            currNode = currNode->next;
        }
    }
    void removeDuplicates()
    {
        sortLinkedList();

        PNODE currNode = sobj->first;

        while (currNode->next != NULL)
        {
            if (currNode->data == currNode->next->data)
            {
                PNODE Targated = currNode->next;
                PNODE NextnextNode = Targated->next;
                delete (Targated);
                currNode->next = NextnextNode;
            }
            else
            {
                currNode = currNode->next;
            }
        }
    }
};
int main()
{
    SinglyLinearLL *sobj = new SinglyLinearLL();

    sobj->insertAtLast(10);
    sobj->insertAtLast(30);
    sobj->insertAtLast(20);
    sobj->insertAtLast(10);
    sobj->insertAtLast(20);
    sobj->insertAtLast(30);
    sobj->insertAtLast(40);
    sobj->insertAtLast(40);

    sobj->display();

    Demo *dobj = new Demo(sobj);

    dobj->removeDuplicates();

    sobj->display();

    return 0;
}