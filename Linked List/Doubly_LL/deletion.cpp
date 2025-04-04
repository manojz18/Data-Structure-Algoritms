#include<iostream>

using namespace std;

// Initially we donot have any node, so in such case we will do this...

class Node{
    public:

        int data;
        Node* prev;
        Node* next;

        Node(int data){
            this -> data = data;
            this -> prev = NULL;
            this -> next = NULL;
        }

        ~Node(){
            int val = this->data;
            if(next != NULL){
                delete next;
                this -> next = NULL;
            }
            cout << "Memory cleared for Node: " << val << endl;
        }
};

// ---> Insert At head <---

void insertAthead(Node* &head, Node* &tail, int data){
    
    if(head == NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(data);

        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
    
}

// ---> Insert at Tail <---

void insertAtTail(Node* &head, Node* &tail, int data){

    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(data);

        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
    
}

// ---> Insert at any Position <---

void insertAtPosition(Node* &tail, Node* &head, int pos, int data){
    // if position is 1
    if(pos == 1){
        insertAthead(head, tail, data);
        return;
    }
    int cnt = 1;
    Node* temp = head;

    while(cnt < pos - 1){
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next == NULL){
        insertAtTail(head, tail, data);
        return;
    }

    Node* newNode = new Node(data);

    newNode -> next = temp -> next;
    temp -> next -> prev = newNode;
    newNode -> prev = temp;
    temp -> next = newNode;

}


int length_LL(Node* head)
{
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

// ---> deletion of Node <---

void deleteNode(Node* &head, Node* &tail, int pos){
    // delete position 1(head)
    if(pos == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next -> prev = NULL;
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

        curr -> prev = NULL;
        prev -> next = curr -> next;
        //curr -> next -> prev = prev;
        curr -> next = NULL;
        delete curr;
    }
}

void print(Node* head)
{
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " -> " << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    
    Node* head = NULL;
    Node* tail = NULL;

    print(head);

    //cout << length_LL(head);

    insertAthead(head, tail, 10);
    print(head);

    insertAthead(head, tail, 5);
    print(head);

    insertAtTail(head, tail, 25);
    print(head);

    cout << "head: " << head -> data << endl;
    cout << "tail: " << tail -> data << endl;

    insertAtPosition(tail, head, 2, 100);
    print(head);

    cout << "head: " << head -> data << endl;
    cout << "tail: " << tail -> data << endl;

    deleteNode(head, tail, 4);
    print(head);

    cout << "head: " << head -> data << endl;
    cout << "tail: " << tail -> data << endl;

    return 0;
}