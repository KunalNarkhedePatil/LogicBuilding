/*Input:
10->20->30->40->30->50->NULL
Enter the number to search:
30
Output:
Element present at 5 index
*/
#include "linkedlist.h"
class Demo
{
public:
    int seachLastOccurrence(SinglyLinearLL *sobj, int iNo)
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
        if (iFlag == 0)
        {
            return -1;
        }
        else
        {
            return iFlag;
        }
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
    sobj->insertAtLast(30);
    sobj->insertAtLast(50);

    sobj->display();
    cout << "Enter the number to search:\n";
    cin >> iNo;
    iRet = dobj->seachLastOccurrence(sobj, iNo);

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
