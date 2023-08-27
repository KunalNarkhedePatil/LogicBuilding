#include <iostream>
#include <stack>
using namespace std;

class Demo
{
public:
    void displayStack()
    {
        stack<int> s1;

        s1.push(10);
        s1.push(20);
        s1.push(30);
        s1.push(40);
        s1.push(50);

        s1.pop();

        cout << "Top element is " << s1.top() << endl;

        cout << "Size of stack is " << s1.size() << endl;

        // check stack is empty or not

        if (s1.empty())
        {
            cout << "Stack is empty\n";
        }
        else
        {
            cout << "Stack is not empty\n";
        }
    }
};
int main()
{
    Demo *dobj = new Demo();

    dobj->displayStack();
    return 0;
}