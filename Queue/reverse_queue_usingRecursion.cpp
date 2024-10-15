#include<iostream>
#include<queue>

using namespace std;

class Solution
{  
    public:
    queue<int> rev(queue<int>& q)
    {
        
        // Recursive Approach
        
        if(q.empty()){
            return q;
        }
        
        int element = q.front();
        
        q.pop();
        rev(q);
        
        q.push(element);
        
        return q;
    }
};

int main(){
    
    return 0;
}