#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* buildTree(Node* &root){
    int data;
    cout << "Enter data: ";
    cin >> data;

    if(data == -1){
        return NULL;
    }

    root = new Node(data);

    cout << "Enter the data to the left Node of " << data << endl;
    root -> left = buildTree(root -> left);

    cout << "Enter the data to the Right Node of " << data << endl;
    root -> right = buildTree(root -> right);

    return root;
}

void PreOrder_Traversal(Node* root){
    if(root == NULL){
        return;
    }

    cout << root -> data << " ";
    PreOrder_Traversal(root -> left);
    PreOrder_Traversal(root -> right);
}

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

int main(){

    Node* root = NULL;

    buildTree(root);
    PreOrder_Traversal(root);
    return 0;
}