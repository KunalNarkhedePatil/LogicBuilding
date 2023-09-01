/*
Input:
Enter the string
kunal narkhede
Output:
Reverse string is edehkran lanuk
*/
#include "stackarray.h"
#include <string>
class StackArray
{
public:
    Stack *sobj;

    StackArray(Stack *sobj)
    {
        this->sobj = sobj;
    }

    string reverseStringUsingStack(char *Str)
    {
        string ansStr = "";
        while (*Str != '\0')
        {
            sobj->push(*Str);
            Str++;
        }
        while (!this->sobj->isEmpty())
        {
            char ch = sobj->Arr[sobj->iTop];
            ansStr.push_back(ch);
            sobj->pop();
        }
        return ansStr;
    }
};
int main()
{
    char str[50];
    string resultStr;

    Stack *sobj = new Stack();
    StackArray *obj = new StackArray(sobj);

    cout << "Enter the string\n";
    cin.getline(str, 20);

    resultStr = obj->reverseStringUsingStack(str);

    cout << "Reverse string is " << resultStr << endl;

    return 0;
}