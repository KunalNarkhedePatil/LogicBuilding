/*
Input:
1->2->3->4->NULL
5->3->4->NULL
Output:
Intersection found at 3
*/
#include "linkedlist.h"
class Demo
{
public:
    SinglyLinearLL *sobj1;
    SinglyLinearLL *sobj2;
    
    Demo(SinglyLinearLL *sobj1, SinglyLinearLL *sobj2)
    {
        this->sobj1 = sobj1;
        this->sobj2 = sobj2;
    }

    int intersectionOfTwoLL()
    {
        int iFlag = 0;

        PNODE temp1 = sobj1->first;
        int iCnt = 0;
        while (temp1 != NULL)
        {
            PNODE temp2 = sobj2->first;
            iCnt++;
            while (temp2 != NULL)
            {
                if (temp1->data == temp2->data)
                {
                    return iCnt;
                }
                temp2 = temp2->next;
            }
            temp1 = temp1->next;
        }
        return iCnt;
    }
};
int main()
{
    SinglyLinearLL *sobj1 = new SinglyLinearLL();

    sobj1->insertAtLast(1);
    sobj1->insertAtLast(2);
    sobj1->insertAtLast(3);
    sobj1->insertAtLast(4);

    SinglyLinearLL *sobj2 = new SinglyLinearLL();

    sobj2->insertAtLast(5);
    sobj2->insertAtLast(3);
    sobj2->insertAtLast(4);

    Demo *dobj = new Demo(sobj1, sobj2);

    sobj1->display();
    sobj2->display();

    int iRet = dobj->intersectionOfTwoLL();

    if (iRet == -1)
    {
        cout << "Intersection not found\n";
    }
    else
    {
        cout << "Intersection found at " << iRet << endl;
    }
    return 0;
}