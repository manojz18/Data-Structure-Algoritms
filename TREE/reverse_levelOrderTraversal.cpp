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

Node* levelOrder(Node* root){
    queue <Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp -> data << " ";

            if(temp -> left){
                q.push(temp -> left);
            }

            if(temp -> right){
                q.push(temp -> right);
            }
        }
        
    }
}

void reverseLevelOrder(Node* root){
    if(root == NULL) return;

    queue <Node*> q;
    stack <vector<int>> s;

    q.push(root);

    while(!q.empty()){
        int levelSize = q.size();
        vector <int> currLevel;

        for(int i = 0; i < levelSize; i++){
            Node* temp = q.front();
            q.pop();

            currLevel.push_back(temp -> data);

            if(temp -> left){
                q.push(temp -> left);
            }
            if(temp -> right){
                q.push(temp -> right);
            }
        }

        s.push(currLevel);

    }

    while(!s.empty()){
            vector <int> levels = s.top();
            s.pop();

            for(int val : levels){
                cout << val << " ";
            }
            cout << endl;
        }
    
}

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

int main(){

    Node* root = NULL;

    buildTree(root);
    reverseLevelOrder(root);
    return 0;
}