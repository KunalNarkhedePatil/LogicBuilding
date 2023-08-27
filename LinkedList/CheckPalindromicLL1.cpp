/*
CASE1:
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
    bool checkArrPalindromic(int Arr[], int iSize)
    {
        int iStart = 0;
        int iEnd = iSize - 1;
        int iFlag = 1;
        while (iStart < iEnd)
        {
            if (Arr[iStart] != Arr[iEnd])
            {
                iFlag = 0;
                break;
            }
            iStart++;
            iEnd--;
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

    bool checkPalindromicLL()
    {
        int iSize = sobj->count();

        int Arr[iSize];

        PNODE temp = sobj->first;
        int i = 0;
        while (temp != NULL)
        {
            Arr[i] = temp->data;
            temp = temp->next;
            i++;
        }

        bool bRet = checkArrPalindromic(Arr, iSize);
        if (bRet == true)
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
