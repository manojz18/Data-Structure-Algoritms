#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
};

void solve(Node* root, vector <int> &ans, int level){
     // base case
    if(root == NULL){
        return;
    }

    if(level = ans.size()){
        ans.push_back(root -> data);
    }

    solve(root -> left, ans, level+1);
    solve(root -> right, ans, level+1);
}

vector <int> LeftView(Node* root){
    
    vector <int> ans;
    int level = 0;

    solve(root, ans, level);
    return ans;
}

int main(){
    
    return 0;
}