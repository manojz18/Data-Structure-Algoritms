#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue <int> q;

    q.push(15);
    q.push(20);
    q.push(25);
    q.push(35);
    q.push(30);

    cout << "front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    q.pop();
    q.pop();

    cout << "front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    cout << "Size of Queue: " << q.size() << endl;

    if(q.empty()){
        cout << "Queue is Empty " << endl;
    }
    else{
        cout << "Queue is Not Empty" << endl;
    }

    
    return 0;
}