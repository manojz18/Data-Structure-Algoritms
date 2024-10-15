#include<iostream>
#include<vector>
#include<stack>

using namespace std;

class Solution {
private:

    bool knows(vector<vector<int> >& mat, int a, int b){
        if(mat[a][b] == 1){
            // a knows b
            return true;
        }
        else{
            return false;
        }
    }
    
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        int n = mat.size();
        // code here
        stack <int> s;
        
        // step1: push all elements int stack
        
        for(int i = 0; i < n; i++){
            s.push(i);
        }
        
        //step2: remove to elements from the stack and compare them
        
        while(s.size() > 1){
            int a = s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
            
            if(knows(mat,a,b)){
                s.push(b); // discard a
            }
            else{
                // discard b
                s.push(a);
            }
        }
        
        int ans = s.top();
        //step3: single element int the stack is potentail candidate, so verify it
        
        // row check
        bool rowCheck = false;
        int zeroCount = 0;
        
        for(int i = 0; i < n; i++){
            if(mat[ans][i] == 0){
                zeroCount++;
            }
        }
        
        if(zeroCount == n){
            rowCheck = true;
        }
        
        //col Check
        bool colCheck = false;
        int oneCount = 0;
        
        for(int i = 0; i < n; i++){
            if(mat[i][ans] == 1){
                oneCount++;
            }
        }
        
        if(oneCount == n-1){
            colCheck = true;
        }
        
        if(colCheck && rowCheck){
            return ans;
        }
        else{
            return -1;
        }
    }
};

int main(){
    
    return 0;
}