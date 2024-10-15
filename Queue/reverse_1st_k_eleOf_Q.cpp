#include<iostream>
#include<queue>
#include<stack>

using namespace std;

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // step1: fetch 1st k ele from queue & push in stack
        stack <int> s;
        
        for(int i = 0; i < k; i++){
            int val = q.front();
            q.pop();
            s.push(val);
        }
        
        //step2: fetch ele from stack and push in queue
        while(!s.empty()){
            int val = s.top();
            s.pop();
            q.push(val);
        }
        
        // fetch first (n-k) ele from queue & push_back
        
        int a = q.size()-k;
        
        while(a--){
            int val = q.front();
            q.pop();
            q.push(val);
        }
        return q;
    }
};

int main(){
    
    return 0;
}