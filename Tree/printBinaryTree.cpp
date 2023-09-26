#include <iostream>
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
void printBinaryTree(BinaryTreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";
    if (root->left != NULL)
    {
        cout << "L" << root->left->data;
    }
    if (root->right != NULL)
    {
        cout << "R" << root->right->data;
    }
    cout << endl;
    printBinaryTree(root->left);
    printBinaryTree(root->right);
}
int main()
{
    BinaryTreeNode *root = new BinaryTreeNode(10);
    BinaryTreeNode *node1 = new BinaryTreeNode(20);
    BinaryTreeNode *node2 = new BinaryTreeNode(30);

    root->left = node1;
    root->right = node2;

    printBinaryTree(root);
    return 0;
}
