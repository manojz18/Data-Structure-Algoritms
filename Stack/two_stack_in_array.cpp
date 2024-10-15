#include <bits/stdc++.h> 
class TwoStack {

public:

    int *arr;
    int top1;
    int top2;
    int size;

    // Initialize TwoStack.
    TwoStack(int s) {
        // Write your code here.
        size = s;
        top1 = -1;
        top2 = size;
        arr = new int[size];
        
    }

    ~TwoStack() {
        delete[] arr;
    }
    
    // Push in stack 1.
    void push1(int num) {
        // Write your code here.

        // atleast one space present in array
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = num;
        }
        // else{
        //     return;
        // }

    }

    // Push in stack 2.
    void push2(int num) {
        // Write your code here.

        // atleast one space present in array
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = num;
        }
        // else{
        //     return;
        // }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        // Write your code here.
        if(top1 > -1){
            return arr[top1--];
        }
        else{
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        // Write your code here.

        if(top2 < size){
            return arr[top2++];
        }
        else{
            return -1;
        }
    }
};

