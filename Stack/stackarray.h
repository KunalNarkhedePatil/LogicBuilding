#include <iostream>
using namespace std;

class Stack
{
public:
    int iTop;
    int iSize;
    int *iArr;

    Stack(int iSize = 20);
    bool isEmpty();
    bool isFull();
    void push(int iVal);
    void pop();
    char top();
    int size();
    void display();
};
Stack::Stack(int iSize)
{
    this->iTop = -1;
    this->iSize = iSize;
    //cout << "Size:" << this->iSize << endl;
    this->iArr = new int[this->iSize];
}
bool Stack::isEmpty()
{
    if (this->iTop == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Stack::isFull()
{
    if (this->iTop == iSize - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
char Stack::top()
{
    return this->iArr[this->iTop];
}
void Stack::push(int iVal)
{
    if (this->isFull())
    {
        cout << "Stack is full" << endl;
        return;
    }
    else
    {
        this->iTop++;
        this->iArr[this->iTop] = iVal;
    }
}
void Stack::pop()
{
    if (this->isEmpty())
    {
        cout << "Stack is empty" << endl;
        return;
    }
    else
    {
        this->iTop--;
    }
}
int Stack::size()
{
    if (this->isEmpty())
    {
        cout << "Stack is empty\n";
        return -1;
    }
    else
    {
        return this->iTop + 1;
    }
}
void Stack::display()
{
    if (this->isEmpty())
    {
        cout << "Stack is empty\n";
    }
    else
    {
        for (int i = 0; i <= this->iTop; i++)
        {
            cout << this->iArr[i] << "->";
        }
        cout<<endl;
    }
}
