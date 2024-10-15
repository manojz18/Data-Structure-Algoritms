#include<iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        // int cnt = 0;

        if(head == NULL || head -> next == NULL){
            return head;
        } 

        // ----------- Approach 1 ----------------- 
        // while(cnt != k){
        //     ListNode* temp = head;
        //     while(temp -> next -> next != NULL){
        //         temp = temp -> next;
        //     }
        //     ListNode* forward = temp -> next;
        //     temp -> next = NULL;
        //     forward -> next = head;
        //     head = forward;
        //     cnt++;
        // }
        // return head;

        // --------------- Approach 2 ----------------

        int cnt = 1;
        ListNode* temp = head;

        while(temp -> next != NULL){
            temp = temp -> next;
            cnt++;
        }
        temp -> next = head;

        k = k % cnt;

        int newStart = cnt - k;
        ListNode* temp1 = head;
        int n = 1;

        while(n != newStart){
            temp1 = temp1 -> next;
            n++;
        }

        head = temp1 -> next;
        temp1 -> next = NULL;
        return head;

    }
};

int main(){
    
    return 0;
}