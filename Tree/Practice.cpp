#include <iostream>
#include <queue>
#include <vector>
using namespace std;
template <class T>
class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> children;

    TreeNode(T data)
    {
        this->data = data;
    }
};
TreeNode<int> *takeInput()
{
    int rootData;
    cout << "Enter the rootData\n";
    cin >> rootData;

    TreeNode<int> *root = new TreeNode<int>(rootData);
    queue<TreeNode<int> *> pendingnodes;
    pendingnodes.push(root);

    while (pendingnodes.size() != 0)
    {
        TreeNode<int> *front = pendingnodes.front();
        pendingnodes.pop();

        int numChild = 0;
        cout << "Enter the number of child of " << front->data << endl;
        cin >> numChild;

        for (int i = 0; i < numChild; i++)
        {
            int childData = 0;
            cout << "Enter the " << i << " th child of " << front->data<<endl;
            cin >> childData;

            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingnodes.push(child);
        }
    }
    return root;
}
void printTree(TreeNode<int> *root)
{
    queue<TreeNode<int> *> pendingnodes;
    pendingnodes.push(root);

    while (pendingnodes.size() != 0)
    {
        TreeNode<int> *front = pendingnodes.front();
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
int main()
{
    TreeNode<int> *root = takeInput();
    printTree(root);

    return 0;
}