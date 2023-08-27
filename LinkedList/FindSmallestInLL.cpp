/*
Input:
10->20->5->40->50->NULL
Output:
Smallest element in the linked list is: 5
*/
#include "linkedlist.h"
class Demo
{
    public:
    SinglyLinearLL *sobj;
    Demo(SinglyLinearLL *sobj)
    {
        this->sobj=sobj;
    }

    int smallestElement()
    {
        PNODE temp=sobj->first;
        int iMin=temp->data;

        while(temp!=NULL)
        {
            if(temp->data<iMin)
            {
                iMin=temp->data;
            }
            temp=temp->next;
        }
        return iMin;
    }

    
};
int main()
{
    int iNo=0;
    int iRet=0;
    SinglyLinearLL *sobj=new SinglyLinearLL();
    Demo *dobj=new Demo(sobj);

    sobj->insertAtLast(10);
    sobj->insertAtLast(20);
    sobj->insertAtLast(5);
    sobj->insertAtLast(40);
    sobj->insertAtLast(50);

    sobj->display();
    
    cout<<"Smallest element in the linked list is: "<<dobj->smallestElement()<<endl;

    return 0;
}

