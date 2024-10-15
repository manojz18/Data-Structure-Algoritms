#include<iostream>
#include<unordered_map>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};

class Solution {
    void insertAtTail(Node* &head, Node* &tail, int d){
        Node* newNode = new Node(d);
        
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
    }
  public:
    Node *copyList(Node *head) {
        // Write your code here
        
        // step1: create clone list
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        Node* temp = head;
        
        while(temp != NULL){
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp = temp -> next;
        }
        
        //step2: create map
        
        unordered_map<Node*, Node*>OldtoNewNode;
        
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        
        while(originalNode != NULL && cloneNode != NULL){
            OldtoNewNode[originalNode] = cloneNode;
            originalNode = originalNode -> next;
            cloneNode = cloneNode -> next;
        }
        
        originalNode = head;
        cloneNode = cloneHead;
        
        while(originalNode != NULL){
            cloneNode -> random = OldtoNewNode[originalNode -> random];
            originalNode = originalNode -> next;
            cloneNode = cloneNode -> next;
        }
        
        return cloneHead;
        
    }
};