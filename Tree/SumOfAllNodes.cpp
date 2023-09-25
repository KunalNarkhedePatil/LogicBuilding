#include <iostream>
#include <vector>
#include <queue>
using namespace std;

using namespace std;
class TreeNode
{
public:
    int data;
    vector<TreeNode *> children;

    TreeNode(int data)
    {
        this->data = data;
    }
};
class Tree
{
public:
    TreeNode *takeInput()
    {
        int rootData = 0;
        cout << "Enter the rootData\n";
        cin >> rootData;

        TreeNode *root = new TreeNode(rootData);
        queue<TreeNode *> pendingnodes;

        pendingnodes.push(root);

        while (pendingnodes.size() != 0)
        {
            TreeNode *front = pendingnodes.front();
            pendingnodes.pop();

            int numChild = 0;
            cout << "Enter the number of children of " << front->data << endl;
            cin >> numChild;

            for (int i = 0; i < numChild; i++)
            {
                int childData = 0;
                cout << "Enter the " << i << "th child of " << front->data << endl;
                cin >> childData;

                TreeNode *child = new TreeNode(childData);

                front->children.push_back(child);
                pendingnodes.push(child);
            }
        }
        return root;
    }
    void printTree(TreeNode *root)
    {
        queue<TreeNode *> pendingnodes;
        pendingnodes.push(root);

        while (pendingnodes.size() != 0)
        {
            TreeNode *front = pendingnodes.front();
            pendingnodes.pop();

            cout << front->data << ":";
            for (int i = 0; i < front->children.size(); i++)
            {
                cout << front->children[i]->data << ",";
                pendingnodes.push(front->children[i]);
            }
            cout << endl;
        }
    }
    int sumOfNodes(TreeNode *root)
    {
        static int iSum;
        iSum=iSum+root->data;

        for (int i = 0; i < root->children.size(); i++)
        {
            sumOfNodes(root->children[i]);
        }
        return iSum;
    }
};
int main()
{
    Tree obj;
    TreeNode *root = obj.takeInput();
    obj.printTree(root);

    int iRet = obj.sumOfNodes(root);

    cout << "Sum of nodes is " << iRet << endl;

    return 0;
}