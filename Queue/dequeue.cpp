#include<iostream>
#include<queue>
using namespace std;


int main(){
    deque <int> d;

    d.push_front(15);
    d.push_back(20);

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_back();
    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_front();

    if(d.empty()){
        cout << "empty" << endl;
    }
    else{
        cout << "Not Empty" << endl;
    }
    
    return 0;
}