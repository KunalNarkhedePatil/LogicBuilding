/*
Input:
Before Reverse:
10->20->30->40->50->NULL
Output:
After Reverse:
50->40->30->20->10->NULL
*/
#include "linkedlist.h"
class Demo
{
public:
   
   
    void ReverseLinkedListRecursively(PNODE first)
    {
        if(first==NULL)
        {
            return;
        }
        ReverseLinkedListRecursively(first->next);
        cout<<first->data<<"->";
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

    sobj->display();

    Demo *dobj = new Demo();

    dobj->ReverseLinkedListRecursively(sobj->first);
    cout<<endl;

    return 0;
}