#include "BinaryTreeNode.h"

int main()
{
    BinaryTreeNode *root=new BinaryTreeNode(10);
    BinaryTreeNode *node1=new BinaryTreeNode(20);
    BinaryTreeNode *node2=new BinaryTreeNode(30);
    
            
    root->left=node1;
    root->right=node2;

    return 0;
}