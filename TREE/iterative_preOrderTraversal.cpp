#include<iostream>
#include<queue>
#include<stack>
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

void preOrderTraversal(Node* root){
    if(root == NULL) return;
    vector <int> v;
    stack <Node*> st;
    st.push(root);

    while(!st.empty()){
        Node* curr = st.top();
        st.pop();

        v.push_back(curr -> data);

        if(curr -> right){
            st.push(curr -> right);
        }
        if(curr -> left){
            st.push(curr -> left);
        }

    }

    for(int val : v){
        cout << val << " ";
    }
    cout << endl;

}

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

int main(){

    Node* root = NULL;

    buildTree(root);
    preOrderTraversal(root);
    return 0;
}