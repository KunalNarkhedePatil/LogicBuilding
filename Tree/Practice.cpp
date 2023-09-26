#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class TreeNode
{
    public:
    int data;
    vector<TreeNode *> children;

    TreeNode(int data)
    {
        this->data=data;
    }
};

class Demo
{
    public:

    TreeNode * takeInput()
    {
        int rootData=0;
        cout<<"Enter the root data"<<endl;
        cin>>rootData;

        TreeNode *root=new TreeNode(rootData);

        queue<TreeNode *> pendingnodes;
        pendingnodes.push(root);
        while(pendingnodes.size()!=0)
        {
            TreeNode *front=pendingnodes.front();
            pendingnodes.pop();

            int numChild=0;
            cout<<"Enter the number of children of "<<front->data<<endl;
            cin>>numChild;

            for(int i=0;i<numChild;i++)
            {
                int childData=0;
                cout<<"Enter the "<<i<<"th children of "<<front->data<<endl;
                cin>>childData;

                TreeNode *child=new TreeNode(childData);
                front->children.push_back(child);
                pendingnodes.push(child);
            }
        }
        return root;

    }
    void printTreeLevelWise(TreeNode *root)
    {
         queue<TreeNode *> pendingnodes;
         pendingnodes.push(root);

         while(pendingnodes.size()!=0)
         {
            TreeNode *front=pendingnodes.front();
            cout<<front->data<<":";
            pendingnodes.pop();

            for(int i=0;i<front->children.size();i++)
            {
                cout<<front->children[i]->data<<",";
                pendingnodes.push(front->children[i]);
            }
            cout<<endl;
         }
    }
    void printTree(TreeNode *root)
    {
        cout<<root->data<<":";
        for(int i=0;i<root->children.size();i++)
        {
            cout<<root->children[i]->data<<",";
        }
        cout<<endl;
        for(int i=0;i<root->children.size();i++)
        {
            printTree(root->children[i]);
        }
    }
};
int main()
{
    Demo dobj;
    TreeNode *root=dobj.takeInput();
    //dobj.printTree(root);
    dobj.printTreeLevelWise(root);


    return 0;
}