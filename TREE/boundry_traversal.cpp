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

class Solution {
  public:
  // left part traversal
    void leftPartTraversal(Node* root, vector <int> &ans){
        // base case
        if(root == NULL){
            return;
        }
        
        // leaf node
        if(root -> left == NULL && root -> right == NULL){
            return;
        }
        
        ans.push_back(root -> data);
        
        if(root -> left){
            leftPartTraversal(root -> left, ans);
        }
        else if(root -> right){
            leftPartTraversal(root -> right, ans);
        }
    }
    
  // leaf node treaversal
  
    void leafTraversal(Node* root, vector <int> &ans){
        // base case
        if(root == NULL){
            return;
        }
        
        // leaf node
        if(root -> left == NULL && root -> right == NULL){
            ans.push_back(root -> data);
            return;
        }
        leafTraversal(root -> left, ans);
        leafTraversal(root -> right, ans);
    }
    
    // right part traversal
    void rightTraversal(Node* root, vector <int> &ans){
        // base case
        if(root == NULL){
            return;
        }
        
        // leaf node
        if(root -> left == NULL && root -> right == NULL){
            return;
        }
        
        if(root -> right){
            rightTraversal(root -> right, ans);
        }
        else if(root -> left){
            rightTraversal(root -> left, ans);
        }
        
        // wapas jate vakt
        ans.push_back(root -> data);
    }
    
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector <int> ans;
        // base case
        if(root == NULL){
            return ans;
        }
        
        // print the root
        ans.push_back(root -> data);
        
        // left part traversal
        leftPartTraversal(root -> left, ans);
        
        //leaf node traversal
        //leaf at left subtree
        leafTraversal(root -> left, ans);
        
        // leaf at right subtree
        leafTraversal(root -> right, ans);
        
        // right part in reverse
        rightTraversal(root -> right, ans);
        
        return ans;
    }
    
};

int main(){
    
    return 0;
}