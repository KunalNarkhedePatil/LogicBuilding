#include "queuearray.h"
int main()
{
    Queue *obj = new Queue();

    obj->enQueue(10);
    obj->enQueue(20);
    obj->enQueue(30);
    obj->enQueue(40);
    obj->enQueue(50);
    obj->enQueue(60);
    obj->enQueue(70);

    obj->display();

    cout << "Front:" << obj->getFront() << endl;
    cout << "Back:" << obj->getBack() << endl;
    obj->deQueue();
    cout << "Front:" << obj->getFront() << endl;
    cout << "Back:" << obj->getBack() << endl;

    obj->display();
}