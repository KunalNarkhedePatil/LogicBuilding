#include "linkedlist.h"
class Demo
{
public:
    SinglyLinearLL *sobj;
    Demo(SinglyLinearLL *sobj)
    {
        this->sobj = sobj;
    }

    int findMiddleElement()
    {
        if (sobj->first == NULL)
        {
            return -1;
        }
        PNODE temp = sobj->first;
        int iPos = (sobj->size / 2) + 1;

        for (int i = 1; i < iPos; i++)
        {
            temp = temp->next;
        }
        return temp->data;
    }
};
int main()
{
    int iNo = 0;
    int iRet = 0;
    SinglyLinearLL *sobj = new SinglyLinearLL();
    Demo *dobj = new Demo(sobj);

    sobj->insertAtLast(10);
    sobj->insertAtLast(20);
    sobj->insertAtLast(30);
    sobj->insertAtLast(40);
    sobj->insertAtLast(50);
    sobj->insertAtLast(60);

    sobj->display();
    iRet = dobj->findMiddleElement();
    if (iRet == -1)
    {
        cout << "Linked list is empty\n";
    }
    else
    {
        cout << "Middle element is " << iRet << endl;
    }

    return 0;
}
