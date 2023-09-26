#include <iostream>
#include <queue>
using namespace std;
class BinaryTreeNode
{
public:
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class BinaryTree
{
public:
    BinaryTreeNode *takeInputLevelWise()
    {
        int rootData = 0;
        cout << "Enter the rootdata" << endl;
        cin >> rootData;

        if (rootData == -1)
        {
            return NULL;
        }
        BinaryTreeNode *root = new BinaryTreeNode(rootData);
        queue<BinaryTreeNode *> pendingnodes;
        pendingnodes.push(root);

        while (pendingnodes.size() != 0)
        {
            BinaryTreeNode *front = pendingnodes.front();
            pendingnodes.pop();

            int leftChildData = 0;
            cout << "Enter the left child of " << front->data << endl;
            cin >> leftChildData;

            if (leftChildData != -1)
            {
                BinaryTreeNode *leftChild = new BinaryTreeNode(leftChildData);
                front->left = leftChild;
                pendingnodes.push(leftChild);
            }
            int rightChildData = 0;
            cout << "Enter the right child of " << front->data << endl;
            cin >> rightChildData;

            if (rightChildData != -1)
            {
                BinaryTreeNode *rightChild = new BinaryTreeNode(rightChildData);
                front->right = rightChild;
                pendingnodes.push(rightChild);
            }
        }
        return root;
    }
    void levelOrderTravarsal(BinaryTreeNode *root)
    {
        queue<BinaryTreeNode *> pendingnodes;
        pendingnodes.push(root);

        while (pendingnodes.size() != 0)
        {
            BinaryTreeNode *front = pendingnodes.front();
            cout << front->data << " ";

            pendingnodes.pop();

            if (front->left != NULL)
            {
                pendingnodes.push(front->left);
            }
            if (front->right != NULL)
            {
                pendingnodes.push(front->right);
            }
        }
    }
    void preOrderTravarsal(BinaryTreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        cout << root->data << " ";
        preOrderTravarsal(root->left);
        preOrderTravarsal(root->right);
    }
    void postOrderTravarsal(BinaryTreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        postOrderTravarsal(root->left);
        postOrderTravarsal(root->right);
        cout << root->data << " ";
    }
    void inOrderTravarsal(BinaryTreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        inOrderTravarsal(root->left);
        cout << root->data << " ";
        inOrderTravarsal(root->right);
    }
};
int main()
{
    BinaryTree obj;
    BinaryTreeNode *root = obj.takeInputLevelWise();
    cout<<"Levelorder Travarsal:";
    obj.levelOrderTravarsal(root);
    cout<<endl;
    cout << "Preorder Travarsal is :";
    obj.preOrderTravarsal(root);
    cout<<endl;
    cout << "Postorder Travarsal is :";
    obj.postOrderTravarsal(root);
    cout<<endl;
    cout << "Inorder Travarsal is :";
    obj.inOrderTravarsal(root);

    return 0;
}