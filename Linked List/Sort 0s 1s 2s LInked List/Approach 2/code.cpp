#include<iostream>

using namespace std;


class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this -> data = data;
            next = NULL;
        }
};

void insertAtTail(Node* &tail, Node* curr){
    tail -> next = curr;
    tail = curr;
}
    
Node* sortList(Node* &head){


    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;


    // create sublists 0s, 1s, 2s
    while(curr != NULL){
        int val = curr -> data;

        if(val == 0){
            insertAtTail(zeroTail, curr);
        }

        else if(val == 1){
            insertAtTail(oneTail, curr);
        }

        if(val == 2){
            insertAtTail(twoTail, curr);
        }
        curr = curr -> next;
    }

    // merge sublist

    if(oneHead -> next != NULL){
        // Non empty sublist 1s

        zeroTail -> next = oneHead -> next;
    }
    else{
        // empty sublist 1s
        zeroTail -> next = twoHead -> next;
    }

    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;

    head = zeroHead -> next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}

