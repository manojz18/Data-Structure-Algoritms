#include<iostream>

using namespace std;

class Stack{
    public:

        int data;
        Stack* next;

    Stack(int data){
        this -> data = data;
        next = NULL;
        // top = NULL;
    }    

    ~Stack(){
        cout << "Memory cleared for Node: " << data << endl;
    }
};

void push(Stack* &top, int data){
    Stack* newNode = new Stack(data);
    newNode -> next = top; // Insert At top
    top = newNode;     // update top
}

void pop(Stack* &top){
    if(top == NULL){
        cout <<"Stack Underflow" << endl;
        return;
    }
    else{
        Stack* temp = top;
        top = top -> next;
        cout << "Popped: " << temp -> data << endl;
        delete temp;
    }
}

    void print(Stack* top){
        Stack* temp = top;
        if(top == NULL){
            cout << "Stack Underflow" << endl;
            return;
        }

        while(temp != NULL){
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }
        cout << endl;
    }

int main(){
    Stack* top = NULL;

    push(top, 5);
    print(top);

    push(top, 15);
    push(top, 25);
    push(top, 10);
    push(top, 4);
    push(top, 100);

    pop(top);
    pop(top);
    pop(top);

    print(top);
    return 0;
}