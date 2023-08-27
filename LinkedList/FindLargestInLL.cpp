/*
Input:
10->20->70->40->50->NULL
Output:
Largest element in the linked list is: 70
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

    int largestElement()
    {
        PNODE temp = sobj->first;
        int iMax = temp->data;

        while (temp != NULL)
        {
            if (temp->data > iMax)
            {
                iMax = temp->data;
            }
            temp = temp->next;
        }
        return iMax;
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
    sobj->insertAtLast(70);
    sobj->insertAtLast(40);
    sobj->insertAtLast(50);

    sobj->display();

    cout << "Largest element in the linked list is: " << dobj->largestElement() << endl;

    return 0;
}
