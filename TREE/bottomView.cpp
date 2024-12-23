#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
};

vector <int> BottomView(Node* root){
    vector <int> ans;
        
    // base case
    if (root == NULL){
        return ans;
    }
    
    // map <HD, NodeData>
    map <int, int> topNode;
    
    // queue <Node, HD>
    queue <pair <Node*, int>> q;
    q.push(make_pair(root, 0));
    
    while(!q.empty()){
        pair<Node*, int> temp = q.front();
        q.pop();
        
        int HD = temp.second;
        Node* frontNode = temp.first;
        
        if(topNode.find(HD) == topNode.end()){
            topNode[HD] = frontNode -> data;
        }
        
        if(frontNode -> left)
            q.push(make_pair(frontNode -> left, HD-1));
            
        if(frontNode -> right)
            q.push(make_pair(frontNode -> right, HD+1));
    }
    
    for(auto i : topNode){
        ans.push_back(i.second);
    }
        
    return ans;
}


int main(){
    
    return 0;
}