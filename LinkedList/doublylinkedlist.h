#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int iVal)
    {
        this->data=iVal;
        this->next=NULL;
        this->prev=NULL;
    }
};

typedef class Node NODE;
typedef class Node * PNODE;