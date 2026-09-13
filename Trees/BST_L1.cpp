#include <iostream>
#include <queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int value){
            data = value;
            left = right = NULL;
        }
};

Node* builtBST(Node* root, int value){
    if(root == NULL){
        root = new Node(value);
        return root;
    }
    else if(value > root->data){
        root->right = builtBST(root->right, value); 
    }
    else{
        root->left = builtBST(root->left, value);
    }
    return root;
}

Node* createBST(){
    Node* root = NULL;
    cout<<"Enter the value for the node"<<endl;
    int value;
    cin>>value;

    while(value != -1){
        root = builtBST(root, value);
        cout<<"Enter the values for the node"<<endl;
        cin>>value;
    }
    return root;
}


void preOrder(Node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root){
    if(root == NULL){
        return;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(Node* root){
    if(root == NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void levelOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* front = q.front();
        q.pop();
        if(front == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<front->data<<" ";
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }
    }
}

int getMin(Node* root){
    if(root == NULL){
        return -1;
    }
    if(root->left != NULL){
        getMin(root->left);
    }
    else{
        return root->data;
    }
}

int getMax(Node* root){
    if(root == NULL){
        return -1;
    }
    if(root->right != NULL){
        getMax(root->right);
    }
    else{
        return root->data;
    }
}

bool searchBST(Node* root, int target){
    if(root == NULL){
        return false;
    }

    if(target == root->data){
        return true;
    }
    else{
        if(target > root->data ){
            bool rightAns = searchBST(root->right, target);
            if(rightAns == true){
                return true;
            }
        }
        if(target < root->data){
            bool leftAns = searchBST(root->left, target);
            if(leftAns == true){
                return true;
            }
        }
    }
    return false;
}

int main(){
    Node* root = NULL;
    root = createBST();
    cout<<endl;

    // cout<<"Printing Preorder : ";
    // preOrder(root);
    // cout<<endl;

    // cout<<"Printing Inorder : ";
    // inOrder(root);
    // cout<<endl;

    // cout<<"Printing Postorder : ";
    // postOrder(root);
    // cout<<endl;

    // cout<<"Printing Levelorder : ";
    // levelOrderTraversal(root);
    // cout<<endl;

    // cout<<"Minimum value : "<<getMin(root);
    // cout<<endl;
    // cout<<"Maximum value : "<<getMax(root);

    cout<<searchBST(root, 40);

    return 0;
}