/*
Input:
1->0->0->2->1->0->1->2->0->NULL
Output:
0->0->0->0->1->1->1->2->2->NULL
*/
// in this problem we only replacing the data.
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
        int zeroCount = 0;
        int oneCount = 0;
        int twoCount = 0;

        PNODE temp = sobj->first;

        while (temp != NULL)
        {
            if (temp->data == 0)
            {
                zeroCount++;
            }
            else if (temp->data == 1)
            {
                oneCount++;
            }
            else if (temp->data == 2)
            {
                twoCount++;
            }
            temp = temp->next;
        }
        // cout<<zeroCount<<endl;
        // cout<<oneCount<<endl;
        // cout<<twoCount<<endl;

        temp = sobj->first;

        while (temp != NULL)
        {
            if (zeroCount != 0)
            {
                temp->data = 0;
                zeroCount--;
            }
            else if (oneCount != 0)
            {
                temp->data = 1;
                oneCount--;
            }
            else if (twoCount != 0)
            {
                temp->data = 2;
                twoCount--;
            }
            temp = temp->next;
        }
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