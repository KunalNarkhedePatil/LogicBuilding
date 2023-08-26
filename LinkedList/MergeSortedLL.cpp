#include"linkedlist.h"

int main()
{
    SinglyLinearLL *sobj1=new SinglyLinearLL();

    sobj1->insertAtLast(10);
    sobj1->insertAtLast(30);
    sobj1->insertAtLast(50);

    SinglyLinearLL *sobj2=new SinglyLinearLL();

    sobj2->insertAtLast(20);
    sobj2->insertAtLast(40);
    sobj2->insertAtLast(50);
    
    sobj1->display();
    sobj2->display();
    return 0;
}