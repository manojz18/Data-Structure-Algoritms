#include<iostream>
#include<queue>

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

/// First build the Binary tree

Node* buildTree(Node* &root){

    int data;
    cout << "Enter data: ";
    cin >> data;

    if(data == -1){
        return NULL;
    }

    root = new Node(data);

    cout << "Enter the data to the left of: " << data << endl;
    root -> left = buildTree(root -> left);

    cout << "Enter the data to the right of: " << data << endl;
    root -> right = buildTree(root -> right);

    return root;
}


void sumOfLevels(Node* root){
    if(root == NULL){
        return;
    }
    // BFS (queue)

    queue <Node*> q;

    int sum = 0;
    int level = 0;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* node = q.front();
        q.pop();

        if(node != NULL){
            sum += node -> data;
            if(node -> left){
                q.push(node -> left);
            }
            if(node -> right){
                q.push(node -> right);
            }
            
        }
        
        // node == NULL
        else if(!q.empty()){
            q.push(NULL);
        }

        if(node == NULL){
            cout << "sum at level "<< level << "is : " << sum << endl;
            sum = 0;
            level++;
            
        }
        
    }
}

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

int main(){

    Node* root = NULL;

    buildTree(root);

    sumOfLevels(root);
    
    return 0;
}