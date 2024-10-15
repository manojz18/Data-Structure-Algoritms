#include<iostream>
#include<stack>
#include<queue>

using namespace std;

//Function to reverse the queue.

class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        stack <int> s;
        
        while(!q.empty()){
            int element = q.front();
            q.pop();
            s.push(element);
        }
        
        while(!s.empty()){
            int element = s.top();
            s.pop();
            q.push(element);
        }
        
        return q;
    }
};

int main(){
    
    return 0;
}