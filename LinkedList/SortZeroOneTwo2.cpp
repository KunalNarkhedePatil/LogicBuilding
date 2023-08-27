/*
Input:
1->0->0->2->1->0->1->2->0->NULL
Output:
0->0->0->0->1->1->1->2->2->NULL
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

    void sortZeroOneTwo()
    {
        PNODE zeroLL = NULL;
        PNODE zeroLast = NULL;

        PNODE oneLL = NULL;
        PNODE oneLast = NULL;

        PNODE twoLL = NULL;
        PNODE twoLast = NULL;

        PNODE currNode = sobj->first;

        while (currNode != NULL)
        {
            int iValue = currNode->data;
            if (iValue == 0)
            {
                if (zeroLL == NULL)
                {
                    zeroLL = currNode;
                    zeroLast = currNode;
                }
                else
                {
                    zeroLast->next = currNode;
                    zeroLast = currNode;
                }
            }
            else if (iValue == 1)
            {
                if (oneLL == NULL)
                {
                    oneLL = currNode;
                    oneLast = currNode;
                }
                else
                {
                    oneLast->next = currNode;
                    oneLast = currNode;
                }
            }
            else if (iValue == 2)
            {
                if (twoLL == NULL)
                {
                    twoLL = currNode;
                    twoLast = currNode;
                }
                else
                {
                    twoLast->next = currNode;
                    twoLast = currNode;
                }
            }
            currNode = currNode->next;
        }

        sobj->first = zeroLL;
        zeroLast->next = oneLL;
        oneLast->next = twoLL;
        twoLast->next = NULL;
    }
};
int main()
{
    SinglyLinearLL *sobj = new SinglyLinearLL();

    sobj->insertAtLast(1);
    sobj->insertAtLast(0);
    sobj->insertAtLast(0);
    sobj->insertAtLast(2);
    sobj->insertAtLast(1);
    sobj->insertAtLast(0);
    sobj->insertAtLast(1);
    sobj->insertAtLast(2);
    sobj->insertAtLast(0);
    cout << "Before Sort\n";
    sobj->display();

    Demo *dobj = new Demo(sobj);

    cout << "After Sort\n";
    dobj->sortZeroOneTwo();

    sobj->display();

    return 0;
}