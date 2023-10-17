/*
CASE1:
Input:
1->2->5->4->5->NULL
Enter the Node No
3
Output:
Node is 2

CASE2:
Input:
1->2->5->4->5->NULL
Enter the Node No
-2
Output:
Invalid postion

CASE3:
Input:
1->2->5->4->5->NULL
Enter the Node No
7
Output:
Invalid postion
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

    PNODE FindNthNodeFromEnd(int iNodeNo)
    {
        int Pos = sobj->size - iNodeNo;
        if (iNodeNo < 1 || Pos < 0) //if iNodeNo is less than 1 or Pos<0 then invalid position
        {
            cout << "Invalid postion" << endl;
            return NULL;
        }

        PNODE temp = sobj->first;

        for (int i = 0; i < Pos - 1; i++)
        {
            temp = temp->next;
        }
        return temp;
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
    sobj->insertAtLast(5);

    sobj->display();

    int iNodeNo;

    cout << "Enter the Node No" << endl;
    cin >> iNodeNo;

    PNODE RetNode = dobj->FindNthNodeFromEnd(iNodeNo);

    if (RetNode != NULL)
    {
        cout << "Node is " << RetNode->data << endl;
    }

    return 0;
}
