#include "linkedlist.h"
class Demo
{
public:
    SinglyLinearLL *sobj;

    Demo(SinglyLinearLL *sobj)
    {
        this->sobj = sobj;
    }

    int getNthNode(int iPos)
    {
        if (iPos < 0 || iPos > sobj->size)
        {
            return -1;
        }
        PNODE temp = sobj->first;

        for (int i = 1; i < iPos; i++)
        {
            temp = temp->next;
        }
        return temp->data;
    }
};
int main()
{
    int iNo = 0;
    SinglyLinearLL *sobj = new SinglyLinearLL();

    sobj->insertAtLast(10);
    sobj->insertAtLast(20);
    sobj->insertAtLast(30);
    sobj->insertAtLast(40);
    sobj->insertAtLast(50);

    sobj->display();

    Demo *dobj = new Demo(sobj);

    cout << "Enter the number\n";
    cin >> iNo;

    int iRet = dobj->getNthNode(iNo);

    if (iRet == -1)
    {
        cout << "Invalid position\n";
    }
    else
    {
        cout << iNo << " rd node is " << iRet << endl;
    }

    return 0;
}