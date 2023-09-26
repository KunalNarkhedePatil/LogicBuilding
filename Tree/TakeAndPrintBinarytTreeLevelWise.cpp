#include<iostream>
#include<queue>
using namespace std;
class BinaryTreeNode
{
    public:
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
class Demo
{
    public:
    queue<BinaryTreeNode *> pendingnodes;

    BinaryTreeNode* takeInputLevelWise()
    {
        int rootData=0;
        cout<<"Enter the rootData"<<endl;
        cin>>rootData;

        if(rootData==-1)
        {
            return NULL;
        }
        BinaryTreeNode *root=new BinaryTreeNode(rootData);
        pendingnodes.push(root);

        while(pendingnodes.size()!=0)
        {
            BinaryTreeNode *front=pendingnodes.front();
            pendingnodes.pop();
            int leftData=0;
            cout<<"Enter the left child of "<<front->data<<endl;
            cin>>leftData;

            if(leftData!=-1)
            {
                BinaryTreeNode *leftChild=new BinaryTreeNode(leftData);
                front->left=leftChild;
                pendingnodes.push(leftChild);
            }

            int rightData=0;
            cout<<"Enter the right child of "<<front->data<<endl;
            cin>>rightData;

            if(rightData!=-1)
            {
                BinaryTreeNode *rightChild=new BinaryTreeNode(rightData);
                front->right=rightChild;
                pendingnodes.push(rightChild);
            }
        }
        return root;
    }
    void printBinaryTree(BinaryTreeNode *root)
    {
         pendingnodes.push(root);

         while(pendingnodes.size()!=0)
         {
            BinaryTreeNode *front=pendingnodes.front();
            pendingnodes.pop();

            cout<<front->data<<":";

            if(front->left!=NULL)
            {
                cout<<"L"<<front->left->data;
                pendingnodes.push(front->left);
            }
            if(front->right!=NULL)
            {
                cout<<"R"<<front->right->data;
                pendingnodes.push(front->right);
            }
            cout<<endl;
         }
    }
};
int main()
{
    Demo dobj;
    BinaryTreeNode *root=dobj.takeInputLevelWise();
    dobj.printBinaryTree(root);
    return 0;
}