
#include<iostream>
#include<stack>
using namespace std;

void InsertAtBottom(stack<int> &stack, int element){
    //basecase
    if(stack.empty()){
        stack.push(element);
        return;  
    }

    int n = stack.top();
    stack.pop();
    InsertAtBottom(stack, element);

    stack.push(n);

}

void reverseStack(stack<int> &stack) {
    // Write your code here
    //basecase
    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();

    // recursive Call
    reverseStack(stack);

    InsertAtBottom(stack, num);
}

int main(){
    
    return 0;
}