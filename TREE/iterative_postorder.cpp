#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data = d;
        left = right = NULL;
    }
};

void postOrder_iterative(Node* root){
    stack <Node*> s1, s2;

    if(root == NULL) return;

    s1.push(root);

    while(!s1.empty()){
        Node* temp = s1.top();
        s1.pop();
        s2.push(temp);

        if(temp -> left){
            s1.push(temp -> left);
        }

        if(temp -> right){
            s1.push(temp -> right);
        }
    }

    while(!s2.empty()){
        cout << s2.top() << " ";
        s2.pop();
    }
}

int main(){
    
    return 0;
}