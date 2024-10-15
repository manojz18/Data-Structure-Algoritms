#include <bits/stdc++.h>

// /************************************************************

    //Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

// ************************************************************/

Node<int>* solve(Node<int>* first, Node<int>* second){
    // these two ptr for list first
    Node<int>* curr = first;
    Node<int>* forward = curr -> next;

    // these two ptr for list second
    Node<int>* temp = second;
    Node<int>* next2 = temp -> next;

    /// edge case --> if only one node in first list

    if(curr -> next == NULL){
        curr -> next = second;
        return first;
    }

    while(forward != NULL && temp != NULL){
        // check whether the temp -> data can fit between curr and forward
        if(temp -> data >= curr -> data && temp -> data <= forward -> data){
            curr -> next = temp;
            next2 = temp -> next;
            temp -> next = forward;

            // update pointers
            curr = temp;
            temp = next2;

        }
        else{
            // temp node does not fit between the curr and forward node
            curr = forward;
            forward = forward -> next;

            // But Now we need to check whether the forward is not pointing to null
            if(forward == NULL){
                curr -> next = temp;
                return first;
            }
        }
    }
    return first;
}

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first == NULL) return second;
    if(second == NULL) return first;

    // to check which list has first node small
    if(first -> data <= second -> data){
        solve(first, second);
    }
    else{
        solve(second, first);
    }
}
