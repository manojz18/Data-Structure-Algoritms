#include<iostream>
#include<vector>
using namespace std;


int findMin(vector<int>& nums) {
    int strt = 0;
    int end = nums.size()-1;
    if(nums[strt] <= nums[end]){
        return nums[strt];
    }
    while(strt <= end){
        int mid = strt + (end - strt)/2;
        if(mid < end && nums[mid] >= nums[mid+1]){ // (mid < end) to avoid out of bound condition
            return nums[mid+1];
        }
        if(mid > strt && nums[mid] <= nums[mid-1]){ // (mid > strt) to avoid out of bound condition
            return nums[mid];
        }
        if(nums[mid] >= nums[strt]){
            strt = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}


int main(){
    vector <int> arr = {4, 5, 7, 0, 2, 3};
    cout << findMin(arr);
    
    return 0;
}
