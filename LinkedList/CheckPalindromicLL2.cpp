/*
CASE2:
Input:
10->20->30->20->10->NULL
Output:
Linked list is palindromic
CASE2:

Input:
10->20->30->20->10->NULL
Output:
Linked list is not palindromic
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
    PNODE reverseLL(PNODE first)
    {
        PNODE prevNode = NULL;
        PNODE currNode = first;
        PNODE nextNode = NULL;

        while (currNode != NULL)
        {
            nextNode = currNode->next;
            currNode->next = prevNode;

            prevNode = currNode;
            currNode = nextNode;
        }
        return prevNode;
    }
    PNODE findMiddle()
    {
        int iSize = sobj->count();
        int iPos = iSize / 2;
        PNODE temp = sobj->first;
        for (int i = 1; i < iPos; i++)
        {
            temp = temp->next;
        }
        return temp;
    }
    bool checkPalindromicLL()
    {
        if(sobj->first==NULL || sobj->first->next==NULL)
        {
            return true;
        }
        PNODE MiddleNode = findMiddle();
        PNODE Temp = MiddleNode->next;
        PNODE ReverseLL = reverseLL(Temp);
        PNODE temp = sobj->first;
        int iFlag = 1;

        while (temp != MiddleNode->next && ReverseLL != NULL)
        {
            if (temp->data != ReverseLL->data)
            {
                iFlag = 0;
                break;
            }
            temp = temp->next;
            ReverseLL = ReverseLL->next;
        }
        if (iFlag == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    SinglyLinearLL *sobj = new SinglyLinearLL();

    sobj->insertAtLast(10);
    sobj->insertAtLast(20);
    sobj->insertAtLast(30);
    //sobj->insertAtLast(30);
    sobj->insertAtLast(20);
    sobj->insertAtLast(10);

    sobj->display();

    Demo *dobj = new Demo(sobj);

    bool bRet = dobj->checkPalindromicLL();
    if (bRet == true)
    {
        cout << "Linked list is palindromic\n";
    }
    else
    {
        cout << "Linked list is not palindromic\n";
    }

    return 0;
}