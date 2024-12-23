#include<iostream>
#include<queue>

using namespace std;

class CircularQueue{
    private:
        int *arr;
        int rear, front;
        int size;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        // Write your code here.
        size = n;
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.

        // queue is full
        if(((rear == size -1) && front == 0) || (rear == (front-1) % (size-1))){
            return false;
        }
        else if(front == -1){
            front = 0;
            rear = 0;
            arr[rear] = value;
            return true;
        }
        else if(rear == size-1 && front != 0){
            rear = 0;
            arr[rear] = value;
            return true;
        }
        else{
            rear++;
            arr[rear] = value;
            return true;
        }
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if(front == -1){
            return -1;
        }
        else if(front == rear){
            int d = front;
            front = rear = -1;
            return arr[d];
        }
        else if(front == size-1){
            int d = front;
            front = 0;
            return arr[d];
        }
        else{
            int d = front;
            front++;
            return arr[d];
        }
    }
};

int main(){
    
    return 0;
}