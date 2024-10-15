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
    print(head);

    cout << length_LL(head);

    return 0;
}