/*
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
    
    void insertAtTail(struct Node* &head, struct Node* &tail, int digit){
        
        Node* temp = new Node(digit);
        
        if(head == NULL){
            head = temp;
            tail = temp;
            return;
        }
        else{
            tail -> next = temp;
            tail = temp;
        }
    }

    Node* reverse(struct Node* &num){
        Node* prev = NULL;
        Node* curr = num;
        
        while(curr != NULL){
           Node* forward = curr -> next;
           curr -> next = prev;
           prev = curr;
           curr = forward;
        }
        return prev;
    }
    
    Node* add(struct Node* num1, struct Node* num2){
        int carry = 0;
        
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        
        while(num1 != NULL || num2 != NULL || carry != 0){
            
            int val1 = 0;
            if(num1 != NULL){
                val1 = num1 -> data;
            }
            
            int val2 = 0;
            if(num2 != NULL){
                val2 = num2 -> data;
            }
            
            int sum = carry + val1 + val2;
            
            int digit = sum % 10;
            
            // create new node and add digit to it
            
            insertAtTail(ansHead, ansTail, digit);
            
            carry = sum/10;
            
            if(num1 != NULL)
                num1 = num1 -> next;
                
            if(num2 != NULL)
                num2 = num2 -> next;
        }
        
        return ansHead;
        
    }
    
  public:
    // Function to add two numbers represented by linked list.
    Node* addTwoLists(struct Node* num1, struct Node* num2) {
        // code here
        
        // step1: reverse Both the LL
        num1 = reverse(num1);
        num2 = reverse(num2);
        
        // step2: add the two LL
        
        Node* ans = add(num1, num2);
        
        ans = reverse(ans);
        return ans;
    }
};