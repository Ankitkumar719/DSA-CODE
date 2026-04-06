#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// return root node of the tree
Node *buildTree()
{
    int val = 0;
    cin >> val;

    if (val == -1)
    {
        return NULL;
    }
    else
    {
        // 1 case complete
        Node *root = new Node(val);

        root->left = buildTree();
        root->right = buildTree();
        return root;
    }
}

void preOrderTraversal(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // N
    cout << root->data << " ";
    // L
    preOrderTraversal(root->left);
    // R
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // L
    inOrderTraversal(root->left);
    // N
    cout << root->data << " ";
    // R
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // L
    postOrderTraversal(root->left);
    // R
    postOrderTraversal(root->right);
    // N
    cout << root->data << " ";
}

void levelOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> q;

    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();

        if (front == NULL) 
        {
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else
        {
            cout << front->data << " ";

            if (front->left != NULL)
            {
                q.push(front->left);
            }

            if (front->right != NULL)
            {
                q.push(front->right);
            }
        }
    }
}

int main()
{
    Node *root = buildTree();

    cout << "Printing Preorder Traversal" << endl;
    preOrderTraversal(root);

    cout << endl
         << "Printing Inorder Traversal" << endl;
    inOrderTraversal(root);

    cout << endl
         << "Printing Postorder Traversal" << endl;
    postOrderTraversal(root);

    cout << endl
         << "Printing Levelorder Traversal" << endl;
    levelOrderTraversal(root);

    return 0;
}
