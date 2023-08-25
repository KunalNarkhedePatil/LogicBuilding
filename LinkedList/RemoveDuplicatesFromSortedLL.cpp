#include "linkedlist.h"
class Demo
{
public:
    SinglyLinearLL *sobj;

    Demo(SinglyLinearLL *sobj)
    {
        this->sobj = sobj;
    }

    void removeDuplicates()
    {
        if (sobj->first == NULL)
        {
            return;
        }

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
    sobj->insertAtLast(20);
    sobj->insertAtLast(20);
    sobj->insertAtLast(30);
    sobj->insertAtLast(30);
    sobj->insertAtLast(40);

    sobj->display();

    Demo *dobj=new Demo(sobj);

    dobj->removeDuplicates();

    sobj->display();
    return 0;
}