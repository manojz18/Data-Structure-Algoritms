#include<iostream>

using namespace std;

class Stack{
    public:
    // Behavior
    int size;
    int top;
    int *arr;

    // Properties

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack is Overflow" << endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "Stack is Empty" << endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout << "Stack is Underflow" << endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Stack st(5);

    st.push(10);
    st.push(15);
    // st.push(18);
    // st.push(50);
    // st.push(9);
    // st.push(100);

    cout << st.peek() << endl;
    st.pop();

    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;
    
    return 0;
}