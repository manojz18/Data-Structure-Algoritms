#include<iostream>
#include<vector>
using namespace std;

int isCelebrity(vector<vector<int>>mat){
    int n = mat.size();

    vector <int> zeros(n, 0);
    int ans = -1; // no Celebrity
    for(int i = 0; i < n; i++){
        if(mat[i] == zeros){
            ans = i;
            for(int j = 0; j < n; j++){
                if(j == i) continue;
                if(mat[j][i] != 1) ans = -1; 
            }
        } 
    }
    return ans;
}

int main(){

    vector<vector<int>>mat ={{0, 1, 0},
                             {0, 0, 0},
                             {0, 1, 0}};

    cout << isCelebrity(mat);
    
    return 0;
}