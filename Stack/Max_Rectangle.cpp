#include<iostream>
#include<stack>
#include<vector>

using namespace std;

class Solution{
  private:

  vector <int> nextSmallestElement(int* arr, int n){
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

    vector <int> prevSmallestElement(int* arr, int n){
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
  
  int largestRectangleArea(int* heights, int n) {
        //int n = heights.size();

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
    
    
  
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        
        // step1: compute area for 1st row
        int area = largestRectangleArea(M[0], m);
        
        // step2: for every remaning row update the current row
        for(int i = 1; i < n; i++){
            for(int j = 0; j < m; j++){
                // Update row by adding previous row values
                if(M[i][j] != 0)
                    M[i][j] = M[i][j] + M[i-1][j];
                
                else
                    M[i][j] = 0;
                
            }
             // entire row is updated
            int newArea = largestRectangleArea(M[i], m);
            area = max(area, newArea);
        }
        
       return area;
    }
};


int main(){
    
    return 0;
}