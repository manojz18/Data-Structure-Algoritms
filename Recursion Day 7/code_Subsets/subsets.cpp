#include<iostream>
#include<vector>

using namespace std;

void solve(vector <int> output, int idx, vector<int> &nums, vector <vector<int>> &ans){
    if(idx >= nums.size()){
        ans.push_back(output);
        return;
    }
    // exclude
    solve(output, idx + 1, nums, ans);

    //include
    int element = nums[idx];
    output.push_back(element);
    solve(output, idx + 1, nums, ans);
}

vector <vector <int>> subsets(vector <int> &nums){
    vector <vector <int>> ans;
    vector <int> output;
    int idx = 0;
    solve(output, idx, nums, ans);
    return ans;
}

int main(){
    vector <int> v = {1, 2, 3};
    vector <vector<int>> ans = subsets(v);

    for (const auto& subset : ans) {
        for (int num : subset) {
            cout << num << " ";
        }
        
    }

    return 0;
}