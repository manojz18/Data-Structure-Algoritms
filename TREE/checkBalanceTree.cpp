#include<bits/stdc++.h>

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

int height(Node* root){
    if(root == NULL){
        return 0;
    }

    int lHeight = height(root -> left);
    int rHeight = height(root -> right);

    int ans = max(lHeight, rHeight) + 1;

    return ans;
}

// Brute Force

bool isBalanced(Node* root){
    if(root == NULL){
        return true;
    }

    bool left = isBalanced(root -> left);
    bool right = isBalanced(root -> right);

    bool diff = abs(height(root -> left) - height(root -> right)) <= 1;

    if(left && right && diff){
        return true;
    }

    return false;
}

// optimized approach

pair <bool, int> isBalancedFast(Node* root){
    if(root == NULL){
        pair <bool, int> p = make_pair(true, 0);
        return p;
    }

    pair <bool, int> left = isBalancedFast(root -> left);
    pair <bool, int> right = isBalancedFast(root -> right);

    bool diff = abs(left.second - right.second) <= 1;

    pair <bool, int> ans;

    ans.second = max(left.second, right.second) + 1;

    bool leftAns = left.first;
    bool rightAns = right.first;

    if(leftAns && rightAns && diff){
        ans.first = true;
    }
    else{
        ans.first = false;
    }

    return ans;
}

int main(){
    
    return 0;
}