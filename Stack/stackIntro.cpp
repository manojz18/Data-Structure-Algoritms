#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack <int> s;

    //push
    s.push(10);
    s.push(15);   

    // pop
    s.pop();

    // top
    cout << "Top Element is: " << s.top() << endl;

    // check stack is empty
    cout << s.empty() << endl; 
    return 0;
}