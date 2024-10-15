#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(), arr.end());
        
        int count = 1;
        
        for(int i = 0; i < arr.size(); i++){
            if(count == k){
                break;
            }
            count++;
        }
        
        return arr[count-1];
    }
};

int main(){

    Solution obj;
    vector <int> arr = {7, 8, 1, 4, 9, 3};
    int ans = obj.kthSmallest(arr, 3);
    cout << ans << endl;
    return 0;
}