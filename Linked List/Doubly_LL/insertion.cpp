#include<iostream>

using namespace std;

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
};

// ---> Insert At head <---

void insertAthead(Node* &head, int data){
    Node* temp = new Node(data);

    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

// ---> Insert at Tail <---

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);

    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}

// ---> Insert at any Position <---

void insertAtPosition(Node* &tail, Node* &head, int pos, int data){
    // if position is 1
    if(pos == 1){
        insertAthead(head, data);
        return;
    }
    int cnt = 1;
    Node* temp = head;

    while(cnt < pos - 1){
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next == NULL){
        insertAtTail(tail, data);
        return;
    }

    Node* newNode = new Node(data);

    newNode -> next = temp -> next;
    temp -> next -> prev = newNode;
    newNode -> prev = temp;
    temp -> next = newNode;

}


int length_LL(Node* head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " -> " << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
    Node* node1 = new Node(15);
    Node* head = node1;
    Node* tail = node1;

    print(head);

    //cout << length_LL(head);

    insertAthead(head, 10);
    print(head);

    insertAthead(head, 5);
    print(head);

    insertAtTail(tail, 25);
    print(head);

    cout << "head: " << head -> data << endl;
    cout << "tail: " << tail -> data << endl;

    insertAtPosition(tail, head, 5, 100);
    print(head);

    cout << "head: " << head -> data << endl;
    cout << "tail: " << tail -> data << endl;

    return 0;
}