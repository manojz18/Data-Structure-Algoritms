#include<iostream>
#include<queue>
#include<vector>

using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
    
    deque <long long int> dq;
    vector <long long int> ans;
    
    for(int i = 0; i < K; i++){
        if(A[i] < 0){
            dq.push_back(i);
        }
    }
    
    // store the ans of 1st K sized window
    
    if(dq.size() > 0){
        ans.push_back(A[dq.front()]);
    }
    else{
        ans.push_back(0);
    }
    
    // Process for remaning window
    
    for(int i = K; i < N; i++){
        // remove old element
        
        if(!dq.empty() && i - dq.front() >= K){
            dq.pop_front();
        }
        
        //addition of new element
        if(A[i] < 0){
            dq.push_back(i);
        }
        
        // store ans
        if(dq.size() > 0){
            ans.push_back(A[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
    }
    return ans;
                                                 
 }

int main(){
    
    return 0;
}