/*
Input:
10->20->30->40->50->60->NULL
Output:
First LinkedList
10->20->30->NULL
Second LinkedList
40->50->60->NULL
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

    void slpitLinkedlistIntoTwo()
    {
        if (sobj->first == NULL)
        {
            return;
        }

        int iSize = sobj->count();
        // cout<<iSize<<endl;
        PNODE NextLL = NULL;

        PNODE temp = sobj->first;
        int iPos = 0;
        if (iSize % 2 == 0)
        {
            iPos = iSize / 2;
            // cout<<"hello\n";
            for (int i = 1; i <= iPos - 1; i++)
            {
                temp = temp->next;
            }
        }
        else
        {
            iPos = (iSize / 2) + 1;

            for (int i = 1; i < iPos; i++)
            {
                temp = temp->next;
            }
        }
        PNODE LastOfFirst = temp;
        NextLL = temp->next;
        LastOfFirst->next = sobj->first;
        temp = sobj->first;
        cout << "First LinkedList\n";
        do
        {
            cout << temp->data << "->";
            temp = temp->next;
        } while (temp != sobj->first);

        cout << "NULL\n";

        temp = NextLL;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        PNODE LastOfSecond = temp;
        LastOfSecond->next = NextLL;

        temp = NextLL;
        cout << "Second LinkedList\n";
        do
        {
            cout << temp->data << "->";
            temp = temp->next;
        } while (temp != NextLL);
        cout << "NULL\n";
    }
};
int main()
{
    SinglyLinearLL *sobj = new SinglyLinearLL();

    sobj->insertAtLast(10);
    sobj->insertAtLast(20);
    sobj->insertAtLast(30);
    sobj->insertAtLast(40);
    sobj->insertAtLast(50);
    sobj->insertAtLast(60);
    //sobj->insertAtLast(70);

    sobj->display();

    Demo *dobj = new Demo(sobj);

    dobj->slpitLinkedlistIntoTwo();

    return 0;
}