#include<iostream>
#include<stack>
#include<vector>

using namespace std;

class Solution {
private: 

    vector <int> nextSmallestElement(vector<int> arr, int n){
        vector<int>ans(n);

        stack <int> s;
        s.push(-1);

        for(int i = n-1; i >= 0; i--){
            int curr = arr[i];

            while(s.top() != -1 && arr[s.top()] >= curr){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i); 
    }
    
    return ans;
    }

    vector <int> prevSmallestElement(vector<int> arr, int n){
        vector<int>ans(n);

        stack <int> s;
        s.push(-1);

        for(int i = 0; i < n; i++){
            int curr = arr[i];

            while(s.top() != -1 && arr[s.top()] >= curr){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i); 
    }
    
    return ans;
    }

public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector <int> next(n);
        vector <int> prev(n);

        next = nextSmallestElement(heights, n);
        prev = prevSmallestElement(heights, n);

        int area = INT32_MIN;

        for(int i = 0; i < n; i++){
            int l = heights[i];
            if(next[i] == -1){
                next[i] = n;
            }

            int b = next[i] - prev[i] - 1;
            int newArea = l*b;

            area = max(area, newArea);
        }
        return area;
    }
};

int main(){
    
    return 0;
}