#include "stackarray.h"
class Demo
{
public:
    void solve(Stack *sobj, int count, int size)
    {
        if (count == size / 2)
        {
            cout << "Middle element is " << sobj->Arr[sobj->iTop] << endl;
            sobj->pop();
            return;
        }
        int iNo = sobj->Arr[sobj->iTop]; // top ka element side me rakh diya
        sobj->pop();                     // aur pop kr diya
        solve(sobj, count + 1, size);    // recursive call
        sobj->push(iNo);                 // bad me side me rakhe hue element ko push kr diya
    }
    void deleteMiddleFromStack(Stack *sobj)
    {
        int count = 0;
        int size = sobj->size();
        solve(sobj, count, size);
    }
    void display(Stack *sobj)
    {
        for (int i = 0; i <= sobj->iTop; i++)
        {
            cout << sobj->Arr[i] << "->";
        }
    }
};
int main()
{
    Stack *sobj = new Stack();

    sobj->push(10);
    sobj->push(20);
    sobj->push(30);
    sobj->push(40);
    sobj->push(50);
    // sobj->display();
    Demo *dobj = new Demo();

    dobj->deleteMiddleFromStack(sobj);

    dobj->display(sobj);
    return 0;
}