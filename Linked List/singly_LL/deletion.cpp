#include<iostream>

using namespace std;

class Node{
    public:

        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }

        ~Node(){
            int val = this->data;
            if(this->next != NULL){
                delete next;
                this -> next = NULL;
            }
            cout << "Memory deleted for Node: " << val << endl;
        }

        // void insertAthead(Node* &head, int data){
        //     // create a node
        //     Node* temp = new Node(data);

        //     temp -> next = head;
        //     head = temp;
        // }

        // void print(Node* &head){
        //     // create ptr pointing head to traverse LL
        //     Node* temp = head;

        //     while(temp != NULL){
        //         cout << temp->data << " -> ";
        //         temp = temp->next; // move temp forward
        //     }
        //     cout << endl;
        // }
};

// ---> Insert At Head <---
void insertAthead(Node* &head, int data){
    // create a node
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

// ---> Insert At Tail <---
void insertAtTail(Node* &tail, int data)
{
    // create a node
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

// ---> Insert At Position <---
void insertAtPosition(Node* &head, Node* &tail, int pos, int data)
{
    // Insert At head
    if(pos == 1)
    {
        insertAthead(head, data);
        return;
    }

    int cnt = 1;
    Node* temp = head; // ptr to traverse till pos-1 place

    while(cnt < pos-1)
    {
        temp = temp->next;
        cnt++;
    }

    //Insert At tail
    if(temp -> next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    // create new Node
    Node* newNode = new Node(data);
    newNode -> next = temp -> next;
    temp -> next = newNode;
}

// ---> deletion of Node <---

void deleteNode(Node* &head, Node* &tail, int pos){
    // delete position 1(head)
    if(pos == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* prev = NULL;
        Node*curr = head;

        int cnt = 1;
        while(cnt < pos){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        if(curr -> next == NULL){
            tail = prev;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr; 
    }
}

void print(Node* &head)
{
    // create ptr pointing head to traverse LL
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next; // move temp forward
    }
    cout << endl;
}

int main()
{
    Node* node1 = new Node(10);  // Dynamic
    Node* head = node1;
    Node* tail = head;

    print(head);

    insertAthead(head, 15);
    print(head);

    insertAthead(head, 25);
    insertAthead(head, 50);
    // print(head);

    insertAtTail(tail, 100);
    print(head);

    insertAtPosition(head, tail, 4, 99);
    print(head);

    cout << "head: " << head -> data << endl;
    cout << "tail: " << tail -> data << endl;

    insertAtPosition(head, tail, 4, 88);
    print(head);

    // cout << "head: " << head -> data << endl;
    // cout << "tail: " << tail -> data << endl;

    deleteNode(head, tail, 7);
    print(head);
    cout << "head: " << head -> data << endl;
    cout << "tail: " << tail -> data << endl;

    deleteNode(head, tail, 3);
    print(head);
    cout << "head: " << head -> data << endl;
    cout << "tail: " << tail -> data << endl;
    
    return 0;
}