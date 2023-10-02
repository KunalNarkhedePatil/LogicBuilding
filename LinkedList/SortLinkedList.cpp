/*
Input:
10->30->20->10->70->30->40->40->NULL
Output:
10->10->20->30->30->40->40->70->NULL
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
};
int main()
{
    SinglyLinearLL *sobj = new SinglyLinearLL();
    
    sobj->insertAtLast(10);
    sobj->insertAtLast(30);
    sobj->insertAtLast(20);
    sobj->insertAtLast(10);
    sobj->insertAtLast(70);
    sobj->insertAtLast(30);
    sobj->insertAtLast(40);
    sobj->insertAtLast(40);

    sobj->display();

    Demo *dobj = new Demo(sobj);

    dobj->sortLinkedList();

    sobj->display();

    return 0;
}