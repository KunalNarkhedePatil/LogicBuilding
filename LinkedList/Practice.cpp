#include<iostream>
using namespace std;
class Node
{
    public:

    int data;
    Node *next;

    Node(int iVal)
    {
        this->data=iVal;
        this->next=NULL;
    }
};
typedef class Node * PNODE;
class Linkedlist
{
    private:

    PNODE first;
    int iSize;
public:
    Linkedlist()
    {
        first=NULL;
        iSize=0;
    }

    void insertAtLast(int iVal)
    {
        PNODE newn=new Node(iVal);
        if(first==NULL)
        {
            first=newn;
        }
        else
        {
            PNODE temp=first;

            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newn;
        }
        iSize++;
    }
    void Display()
    {
        PNODE temp=first;
        
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
    bool checkArrPalindromic(int Arr[],int iSize)
    {
         int iStart=0;
         int iEnd=iSize-1;
         bool iFlag=true;
         while(iStart<=iEnd)
         {
            if(Arr[iStart]!=Arr[iEnd])
            {
                iFlag=false;
                break;
            }
            iStart++;
            iEnd--;
         }
         if(iFlag==true)
         {
            return true;
         }
         else
         {
            return false;
         }
    }
    bool checkPalindromic()
    {
       int Arr[iSize];

       PNODE temp=first;
         int i=0;
       while(temp!=NULL)
       {
           Arr[i]=temp->data;
           temp=temp->next;
           i++;
       }
       if(checkArrPalindromic(Arr,iSize))
       {
            cout<<"Palinderomic LL"<<endl;
       }
       else
       {
         cout<<"Not Palinderomic LL"<<endl;
       }
    }
    PNODE reverseLL(PNODE first)
    {
        PNODE prevNode=NULL;
        PNODE currNode=first;
        PNODE nextNode=NULL;

        while(currNode!=NULL)
        {
            nextNode=currNode->next;
            currNode->next=prevNode;

            //update 
            prevNode=currNode;
            currNode=nextNode;
        }
        return prevNode;
    }
    void checkLLPalindromic()
    {
        PNODE temp=NULL;
        temp=first;
        int iPos=(iSize/2)+1;
        for(int i=1;i<iPos;i++)
        {
            temp=temp->next;
        }
        PNODE middle=temp;
        PNODE RevLL=reverseLL(middle);
        temp=first;
        int iFlag=1;
        while(temp!=middle->next)
        {
            if(RevLL->data!=temp->data)
            {
                iFlag=0;
                break;
            }
            temp=temp->next;
            RevLL=RevLL->next;
        }
        if(iFlag==1)
        {
            cout<<"Palindromic LL"<<endl;
        }
        else
        {
            cout<<"not Palindromic LL"<<endl;
        }
    }
    int count()
    {
        return iSize;
    }
};
int main()
{
    Linkedlist obj;

    obj.insertAtLast(30);
    obj.insertAtLast(20);
    obj.insertAtLast(10);
    obj.insertAtLast(20);
    obj.insertAtLast(30);

    obj.Display();

    //obj.checkPalindromic();

    obj.checkLLPalindromic();

    cout<<"Size is:"<<obj.count()<<endl;
    return 0;
}
