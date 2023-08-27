/*
Input:
10->20->30->40->50->NULL
Enter the number to search:
40
Output:
Element present at 4 index
*/
#include "linkedlist.h"
class Demo
{
public:
    int seachFirstOccurrence(SinglyLinearLL *sobj, int iNo)
    {
        PNODE temp = sobj->first;
        int iCnt = 0;
        while (temp != NULL)
        {
            iCnt++;
            if (temp->data == iNo)
            {
                return iCnt;
            }
            temp = temp->next;
        }
        return -1;
    }
};
int main()
{
    int iNo = 0;
    int iRet = 0;
    Demo *dobj = new Demo();
    SinglyLinearLL *sobj = new SinglyLinearLL();

    sobj->insertAtLast(10);
    sobj->insertAtLast(20);
    sobj->insertAtLast(30);
    sobj->insertAtLast(40);
    sobj->insertAtLast(50);

    sobj->display();
    cout << "Enter the number to search:\n";
    cin >> iNo;
    iRet = dobj->seachFirstOccurrence(sobj, iNo);

    if (iRet == -1)
    {
        cout << "Element is not present in the linked list\n";
    }
    else
    {
        cout << "Element present at " << iRet << " index\n";
    }

    return 0;
}
