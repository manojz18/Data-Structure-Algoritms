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

vector<int> zigZag_traversal(Node* root){
    vector <int> res;
    if(root == NULL){
        return res;
    }
    
    bool LeftToRight = true;

    queue <Node*> q;
    q.push(root);

    while(!q.empty()){
        int size = q.size();
        vector <int> ans(size);
        // process the level
        for(int i = 0; i < size; i++){
            Node* temp = q.front();
            q.pop();

            int index = LeftToRight ? i : size - i - 1;
            ans[index] = temp -> data;

            if(temp -> left){
                q.push(temp -> left);
            }

            if(temp -> right){
                q.push(temp -> right);
            }
        }

        LeftToRight = !LeftToRight;
        for(auto i : ans){
            res.push_back(i);
        }
    }

    return res;

}

int main(){

    Node* root = NULL;
    buildTree(root);

    vector <int> ans = zigZag_traversal(root);
    for(auto i : ans){
        cout << i << " ";
    } 
    cout << endl;

    return 0;
}