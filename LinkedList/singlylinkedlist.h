#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int iVal)
    {
        this->data = iVal;
        this->next = NULL;
    }
};
typedef class Node *PNODE;