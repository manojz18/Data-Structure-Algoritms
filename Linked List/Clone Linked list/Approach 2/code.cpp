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
  private:
  
  void insertAtTail(Node* &head, Node* &tail, int d){
      Node* newNode = new Node(d);
      
      if(head == NULL){
          head = newNode;
          tail = newNode;
      }
      else{
          tail -> next = newNode;
          tail = newNode;
      }
  }
  public:
    Node *copyList(Node *head) {
        // Write your code here
        //step1: Create clone list
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        Node* temp = head;
        while(temp != NULL){
            insertAtTail(cloneHead, cloneTail, temp -> data);
            temp = temp -> next;
        }
        
        //step2: Add clone Node in between original list
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        
        while(originalNode != NULL && cloneNode != NULL){
            Node* forward = originalNode -> next;
            originalNode -> next = cloneNode;
            originalNode = forward;
            
            forward = cloneNode -> next;
            cloneNode -> next = originalNode;
            cloneNode = forward;
        }
        
        
        //step3: Copy random pointers
        temp = head;
        while(temp != NULL){
            if(temp -> next != NULL){
                
                temp -> next -> random = temp -> random ? temp -> random -> next : temp -> random;
                // if(temp -> random != NULL){
                //     temp -> next -> random = temp -> random -> next;
                // }
                // else{
                //     temp -> next = temp -> random;
                // }
            }
            temp = temp -> next -> next;
        }
        
        //step4: Revert the changes in step2
        originalNode = head;
        cloneNode = cloneHead;
        while(originalNode != NULL && cloneNode != NULL){
            originalNode -> next = cloneNode -> next;
            originalNode = originalNode -> next;
            
            if(originalNode != NULL){
                cloneNode -> next = originalNode -> next;
            }
            
            cloneNode = cloneNode -> next;
        }
        
        //step5: return ans
        return cloneHead;
    }
};