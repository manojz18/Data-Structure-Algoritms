#include<iostream>

using namespace std;

class Node{
    public:

        int data;
        Node* next;

        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }

        ~Node(){
            int val = this -> data;
            if(this -> next != NULL){
                delete next;
                this -> next = NULL;
            }
            cout << "Memory free for node: " << val << endl;
        }

};

void insertNode(Node* &tail, int element, int data){
    // assuming that element is present in the list

    // It means list is empty
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        temp -> next = temp;
    }
    else{
        // Non-empty list
        // assuming that element is present in the list

        Node* curr = tail;
        while (curr -> data != element){
            curr = curr -> next;
        }
        // Now element found, curr is present on element
        // create a node

        Node* temp = new Node(data);
        temp -> next = curr -> next;
        curr -> next = temp;

    }
}

void deleteNode(Node* &tail, int value){
    if(tail == NULL)
    {
        cout << "List is Empty!!!" << endl;
        return;
    }
    else
    {
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }
        
        // Now curr is at node to be deleted
        prev -> next = curr -> next;

        // 1 Node Linked List
        if(prev == curr){
            tail = NULL;
        }

        // >= 2 Node Linked List
        if(tail == curr){ // if tail is pointing curr node which is to be deleted in such case we need to change the position of tail
            tail = curr -> next;
        }
        curr -> next = NULL;
        delete curr;
    }
}

// ---> check LL is circular or not in nature <---

bool isCircular(Node* head){
    if(head == NULL){
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head){
        temp = temp -> next;
    }

    if(temp == NULL){
        return false;
    }

    return true;

}

void print(Node* tail){
    Node* temp = tail;

    if(tail == NULL){
        cout << "Empty Linked List!!!" << endl;
        return;
    }

    do
    {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    while(temp != tail);
    cout << endl;
}

int main(){
    Node* tail = NULL;
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 10);
    print(tail);

    insertNode(tail, 10, 5);
    print(tail);
    // cout << tail -> data;
    
    insertNode(tail, 3, 15);
    print(tail);

    insertNode(tail, 10, 9);
    print(tail);

    // deleteNode(tail, 3);
    // print(tail);

    if(isCircular(tail)){
        cout << "LL is Circular in Nature" << endl;
    }
    else{
        cout << "Not Circular in Nature" << endl;
    }
    
    return 0;
}