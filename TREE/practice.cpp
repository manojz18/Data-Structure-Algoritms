#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data) {
            this -> data = data;
            this -> left = NULL;
            this -> right = NULL;
        }
};

Node* buildTree(Node* &root){
    int data;
    cout << "Enter the data: " ;
    cin >> data;

    if(data == -1){
        return NULL;
    }

    root = new Node(data);
    cout << "Enter the data to left of " << data << endl;
    root -> left = buildTree(root -> left);
    cout << "Enter the data to right of " << data << endl;
    root -> right = buildTree(root -> right);

    return root;
}

Node* levelOrderTraversal(Node* root){
    queue <Node*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp -> data << " ";

            if(temp -> left){
                q.push(temp -> left);
            }
            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
}

// o/p: 10 8 4 -1 -1 9 -1 -1 19 17 -1 -1 21 -1 -1

int main(){
    Node* root = NULL;
    buildTree(root);
    levelOrderTraversal(root);

    return 0;
}