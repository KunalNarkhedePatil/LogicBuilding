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
typedef BinaryTreeNode *PBTNODE;
typedef BinaryTreeNode BTNODE;
class BinaryTree
{
private:
    PBTNODE root;

public:
    BinaryTree()
    {
        this->root = NULL;
    }
    PBTNODE getRoot()
    {
        return this->root;
    }
    void takeInputLevelWise()
    {
        int rootData = 0;
        cout << "Enter the rootData" << endl;
        cin >> rootData;

        if (rootData == -1)
        {
            return;
        }
        PBTNODE root = new BTNODE(rootData);
        queue<PBTNODE> pendingnodes;
        pendingnodes.push(root);

        while (pendingnodes.size() != 0)
        {
            PBTNODE front = pendingnodes.front();
            pendingnodes.pop();

            int leftChildData = 0;
            cout << "Enter the leftChild data of " << front->data << endl;
            cin >> leftChildData;

            if (leftChildData != -1)
            {
                PBTNODE leftChild = new BTNODE(leftChildData);
                front->left = leftChild;
                pendingnodes.push(leftChild);
            }
            int rightChildData = 0;
            cout << "Enter the rightChild data of " << front->data << endl;
            cin >> rightChildData;

            if (rightChildData != -1)
            {
                PBTNODE rightChild = new BTNODE(rightChildData);
                front->right = rightChild;
                pendingnodes.push(rightChild);
            }
        }
        this->root = root;
    }
    void levelOrderTravarsal()
    {
        queue<PBTNODE> pendingnodes;
        pendingnodes.push(this->root);

        while (pendingnodes.size() != 0)
        {
            PBTNODE front = pendingnodes.front();
            pendingnodes.pop();

            cout << front->data << " ";

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
    void preOrderTravarsal(PBTNODE root)
    {
        if (root == NULL)
        {
            return;
        }
        cout << root->data << " ";
        preOrderTravarsal(root->left);
        preOrderTravarsal(root->right);
    }
    void postOrderTravarsal(PBTNODE root)
    {
        if (root == NULL)
        {
            return;
        }
        postOrderTravarsal(root->left);
        postOrderTravarsal(root->right);
        cout << root->data << " ";
    }
    void inOrderTravarsal(PBTNODE root)
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
    obj.takeInputLevelWise();
    PBTNODE root = obj.getRoot();
    cout << "Level Order Travarsal: ";
    obj.levelOrderTravarsal();
    cout << endl;

    cout << "Pre Order Travarsal: ";
    obj.preOrderTravarsal(root);
    cout << endl;

    cout << "Post Order Travarsal: ";
    obj.postOrderTravarsal(root);
    cout << endl;

    cout << "In Order Travarsal: ";
    obj.inOrderTravarsal(root);

    return 0;
}