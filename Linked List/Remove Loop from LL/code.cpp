#include<iostream>
#include<map>
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

// ---> Detect Loop in LL <---

Node* FloydDetectLoop(Node* head){
    if (head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast -> next;

        if(fast != NULL){
            fast = fast -> next;
        }

        slow = slow -> next;

        if(fast == slow){
            return slow;
        }
        // if(fast == NULL){
        //     return false;
        // }
    }
}

// ----> Give Strting node of the loop <----

Node* getStrtNode_Loop(Node* head){
    if (head == NULL){
        return NULL;
    }

    Node* intersection = FloydDetectLoop(head); // give sintersection  point of fast & slow ptr
    Node* slow = head;

    while(slow != intersection){ // run loop until the slow ptr and intersection ptr meets
        slow = slow -> next;
        intersection = intersection -> next;
    }

    return slow;

}

// ----> Remove Loop <----

void RemoveLoop(Node* head){
    if(head == NULL){
        return ;
    }

    Node* strtLoop = getStrtNode_Loop(head);

    Node* temp = strtLoop;

    while(temp -> next != strtLoop)
    {
        temp = temp -> next;
    }
    temp -> next = NULL;
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

    // cout << "head: " << head -> data << endl;
    // cout << "tail: " << tail -> data << endl;

    insertAtPosition(head, tail, 4, 88);
    print(head);
    
    tail -> next = head -> next; // created a loop
    
    // cout << "head: " << head -> data << endl;
    // cout << "tail: " << tail -> data << endl;
    //print(head);

    // if(FloydDetectLoop(head)){
    //     cout << "LOOP PRESENT" << endl;
    // }
    // else{
    //     cout << "NO LOOP";
    // }

    Node* loopStrt = getStrtNode_Loop(head);

    cout << "Loop starts from Node " << loopStrt -> data << endl;

    RemoveLoop(head);
    print(head);

    return 0;
} 