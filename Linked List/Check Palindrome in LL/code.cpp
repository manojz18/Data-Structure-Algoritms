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

Node* getMid(Node* head){
    Node* slow = head;
    Node* fast = head -> next;

    while(fast != NULL && fast -> next != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;
}

Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

bool isPalindrome(Node* head){
    if(head -> next == NULL) return true;

    // step 1
    Node* middle = getMid(head);

    // step 2
    Node* temp = middle -> next;
    middle -> next = reverse(temp);

    // step3

    Node* head1 = head;
    Node* head2 = middle -> next;

    while(head2 != NULL){
        if(head1 -> data != head2 -> data){
            return false;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;
    }

    // but step 4
    temp = middle -> next;
    middle -> next = reverse(temp);
    return true;
}

int main(){
    
    return 0;
}