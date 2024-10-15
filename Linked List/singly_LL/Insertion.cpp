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
    print(head);

    insertAtTail(tail, 100);
    print(head);

    insertAtPosition(head, tail, 4, 99);
    print(head);

    cout << "head: " << head -> data << endl;
    cout << "tail: " << tail -> data << endl;

    insertAtPosition(head, tail, 4, 88);
    print(head);

    cout << "head: " << head -> data << endl;
    cout << "tail: " << tail -> data << endl;

    return 0;
}