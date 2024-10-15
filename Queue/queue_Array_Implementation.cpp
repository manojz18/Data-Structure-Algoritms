#include<iostream>
#include<queue>
using namespace std;

class Queue {
private:
    int *arr;
    int frontt, rear;
    int n;
public:
    Queue() {
        // Implement the Constructor
        n = 5000;
        arr = new int[n];
        frontt = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(frontt == rear) 
            return true;
        else 
            return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear == n-1){
            return;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        // queue is empty
        if(frontt == rear){
            return -1;
        }
        else{
            int ans = arr[frontt];
            arr[frontt] = -1;
            frontt++;
            return ans;
        }
    }

    int front(){
        // Implement the front() function
        if(frontt == rear){
            return -1;
        }
        else{
            return arr[frontt];
        }
    }
};

int main(){
    Queue q();
    return 0;
}