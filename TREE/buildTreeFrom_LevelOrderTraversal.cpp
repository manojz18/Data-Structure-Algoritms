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

// Node* levelOrder(Node* root){
//     queue <Node*> q;
//     q.push(root);
//     q.push(NULL);

//     while(!q.empty()){
//         Node* temp = q.front();
//         q.pop();

//         if(temp == NULL){
//             cout << endl;
//             if(!q.empty()){
//                 q.push(NULL);
//             }
//         }
//         else{
//             cout << temp -> data << " ";

//             if(temp -> left){
//                 q.push(temp -> left);
//             }

//             if(temp -> right){
//                 q.push(temp -> right);
//             }
//         }
        
//     }
// }

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

// void buildTreeFrom_levelOrder(Node* &root){
//     queue <Node*> q;
//     cout << "Enter data of root Node: ";
//     int data;
//     cin >> data;
//     root = new Node(data);
//     q.push(root);

//     while(!q.empty()){
//         Node* temp = q.front();
//         q.pop();

//         cout << "Enter the left node of: " << temp -> data << endl;
//         int leftData;
//         cin >> leftData;
//         if(leftData != -1){
//             temp -> left = new Node(leftData);
//             q.push(temp -> left);
//         }

//         cout << "Enter the right node of: " << temp -> data << endl;
//         int rightData;
//         cin >> rightData;
//         if(rightData != -1){
//             temp -> right = new Node(rightData);
//             q.push(temp -> right);
//         }
//     }
// }

void buildTreeFromLevelOrder(Node* root){
    queue <Node*> q;
    cout << "Enter the root data: ";
    int data;
    cin >> data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout << "Enter the data to left of: " << temp -> data << endl;
        int leftData;
        cin >> leftData;
        if(leftData != -1){
            temp -> left = new Node(leftData);
            q.push(temp -> left);
        }

        cout << "Enter the data to Right of: " << temp -> data << endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp -> right = new Node(rightData);
            q.push(temp -> right);
        }
    }

}

int main(){

    Node* root = NULL;

    buildTreeFromLevelOrder(root);
    return 0;
}