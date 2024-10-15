#include<iostream>
#include<stack>
using namespace std;

class SpecialStack {
    public:

    stack<int> s;
    int mini = INT32_MAX;
        
    void push(int data) {
        // Implement the push() function.
        // for 1st element
        if(s.empty()){
            s.push(data);
            mini = data;
        }
        else{
            if(data < mini){
                int val = 2*data-mini;
                s.push(val);
                mini = data;
            }
            else
                s.push(data);
        }
        
    }

    void pop() {
        if(s.empty()){
            return;
        }

        int curr = s.top();
        s.pop();
        if(curr > mini){
            //return curr;
        }
        else{
            int prevMin = mini;
            int val2 = 2*mini-curr;
            mini = val2;
            //return prevMin;
        }
    }

    int top() {
        if(s.empty()){
            return -1;
        }

        int curr = s.top();
        if(curr < mini)
        {
            return mini;
        }
        else{
            return curr;
        }
    }

    int getMin() {
        if(s.empty()){
            return -1;
        }
        return mini;
    }  
};

int main(){
    
    return 0;
}