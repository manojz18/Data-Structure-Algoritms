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

int heightBinaryTree(Node* root){
    if(root == NULL){
        return 0;
    }

    int lHeight = heightBinaryTree(root -> left);
    int rHeight = heightBinaryTree(root -> right);

    int ans = max(lHeight, rHeight) + 1;

    return ans;
}

int main(){

    
    
    return 0;
}