#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
  public:
  
   bool isSafe(vector<vector<int>> &mat, vector <vector<int>> &visited, int n, int newX, int newY){
       if((newX >=0 && newX < n) && (newY >= 0 && newY < n) && visited[newX][newY] == 0 && 
            mat[newX][newY] == 1){
                return true;
        }
        else{
            return false;
        }
   }
    
    void solve(vector<vector<int>> &mat, int n, int src_x, int src_y, vector <string> &ans,
                vector <vector<int>> &visited, string path){
                   
        // base case
        if(src_x == n-1 && src_y == n-1){
            ans.push_back(path);
            return;
        }
        
        visited[src_x][src_y] = 1;
        
        // 4 choices --> D | L | R | U
        
        // Down
        int newX = src_x + 1;
        int newY = src_y; 
        
        if(isSafe(mat, visited, n, newX, newY)){
            path.push_back('D');
            solve(mat, n, newX, newY, ans, visited, path);
            path.pop_back();
        }
        
        //Left
        newX = src_x;
        newY = src_y - 1; 
        if(isSafe(mat, visited, n, newX, newY)){
            path.push_back('L');
            solve(mat, n, newX, newY, ans, visited, path);
            path.pop_back();
        }
        
        
        //Right
        newX = src_x;
        newY = src_y+1; 
        if(isSafe(mat, visited, n, newX, newY)){
            path.push_back('R');
            solve(mat, n, newX, newY, ans, visited, path);
            path.pop_back();
        }
        
        //Up
        newX = src_x-1;
        newY = src_y; 
        if(isSafe(mat, visited, n, newX, newY)){
            path.push_back('U');
            solve(mat, n, newX, newY, ans, visited, path);
            path.pop_back();
        }
                    
    }
    
  public:
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        int n = mat.size();
        vector<string> ans;
        if(mat[0][0] == 0){
            return ans;
        }
        
        int src_x = 0;
        int src_y = 0;
        
        // intitalize the visited arr with 0
        vector <vector<int>> visited(n, vector<int>(n, 0));
        
        string path = "";
        
        solve(mat, n, src_x, src_y, ans, visited, path);
        sort(ans.begin(), ans.end());
        return ans;
    }
};


int main(){

    vector<vector<int>> mat = {{1, 0, 0, 0},
                                {1, 1, 0, 1}, 
                                {1, 1, 0, 0},
                                {0, 1, 1, 1}
                                };

    

    Solution obj;
    vector<string>paths = obj.findPath(mat);

    for(const string& path: paths){
        cout << path << endl;
    }
    return 0;
}