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

int height(Node* root){
    if(root == nullptr)return 0;

    int left = height(root -> left);
    int right = height(root -> right);

    int ans = max(left, right) + 1;

    return ans;
}

int diameterTree(Node* root){
    if(root == nullptr) return 0;

    int ldiameter = diameterTree(root -> left);
    int rdiameter = diameterTree(root -> right);

    int combination = height(root -> left) + height (root -> right) + 1;

    int ans = max(ldiameter, max(rdiameter, combination));
    return ans;
}

int main(){
    
    return 0;
}