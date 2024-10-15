#include<iostream>

using namespace std;

class kQueues{
public:
    int k;
    int n;
    int *front;
    int *rear;
    int *arr;
    int *next;
    int freeSpot;


    kQueues(int n, int k){
        this -> n = n;
        this -> k = k;
        front = new int[k];
        rear = new int[k];
        arr = new int[n];
        next = new int[n];
        freeSpot = 0;

        // Initalize front and rear arr with -1
        for(int i = 0; i < k; i++){
            front[i] = -1;
            rear[i] = -1;
        }

        // Initalize next[i] with i+1
        for(int i = 0; i < n; i++){
            next[i] = i+1;
        }

        next[n-1] = -1;

    }

    void enqueue(int data, int qn){
        // check for Overflow
        if(freeSpot == -1){
            cout << "Array Is Full!!!" << endl;
            return; 
        }

        int index = freeSpot;
        freeSpot = next[index];

        // 1st element 
        if(front[qn-1] == -1){
            front[qn-1] = index;
        }
        else{
            // not 1st element
            next[rear[qn-1]] = index;
        }

        // update next[idx] with -1, bcoz the position will not be empty now
        next[index] = -1;

        // update rear
        rear[qn-1] = index;

        // push the element
        arr[index] = data;
    }

    int dequeue(int qn){
        // check underflow
        if(front[qn-1] == -1){
            cout << "Array Underflow!!!" << endl;
            return -1;
        }

        // find index
        int index = front[qn-1];

        // update front of qn
        front[qn-1] = next[index];

        // manage freeslots
        next[index] = freeSpot;
        freeSpot = index;

        return arr[index];
    }
};

int main(){

    kQueues q(10, 3);
    q.enqueue(5, 1);
    q.enqueue(10, 2);
    q.enqueue(15, 1);
    q.enqueue(20, 1);

    cout << q.dequeue(1) << endl;  // 5
    cout << q.dequeue(2) << endl;  // 10
    cout << q.dequeue(1) << endl;  // 15
    cout << q.dequeue(1) << endl;  // 20
    cout << q.dequeue(1) << endl;  // -1
    cout << q.dequeue(2) << endl;  // -1

    q.enqueue(5, 1);
    q.enqueue(10, 2);
    q.enqueue(15, 1);
    q.enqueue(20, 1);
    
    return 0;
}