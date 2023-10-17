/*
Input:
Enter the node data
5
Output:
Before Linked list is :1->2->5->4->3->5->7->NULL
After Linked list is :1->2->5->4->3->7->NULL
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

    void deleteLastOccFromLL(int iNo)
    {
        PNODE temp = sobj->first;
        int iCnt = 0;

        int iFlag = 0;

        while (temp != NULL)
        {
            iCnt++;
            if (temp->data == iNo)
            {
                iFlag = iCnt;
            }
            temp = temp->next;
        }
        if (iFlag != 0)
        {
            sobj->deleteAtPos(iFlag);
        }
    }
};
int main()
{
    int iNo = 0;
    int iRet = 0;
    SinglyLinearLL *sobj = new SinglyLinearLL();
    Demo *dobj = new Demo(sobj);

    sobj->insertAtLast(1);
    sobj->insertAtLast(2);
    sobj->insertAtLast(5);
    sobj->insertAtLast(4);
    sobj->insertAtLast(3);
    sobj->insertAtLast(5);
    sobj->insertAtLast(7);

    int iNodeNo;

    cout << "Enter the node data" << endl;
    cin >> iNo;
    cout << "Before Linked list is :";
    sobj->display();
    dobj->deleteLastOccFromLL(iNo);

    cout << "After Linked list is :";
    sobj->display();

    return 0;
}
