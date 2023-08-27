/*
Input:
10->20->30->40->50->NULL
Output:
Sum of all element in the linked list are: 150
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

    int sumOfAllElementInLinkedList()
    {
        int iSum = 0;
        PNODE temp = sobj->first;

        while (temp != NULL)
        {
            iSum = iSum + temp->data;
            temp = temp->next;
        }
        return iSum;
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

    sobj->display();

    cout << "Sum of all element in the linked list are: " << dobj->sumOfAllElementInLinkedList() << endl;

    return 0;
}
