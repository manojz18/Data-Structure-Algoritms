#include<bits/stdc++.h>
using namespace std;

void maxSubarray_sum(vector <int> arr, int k){
    int n = arr.size();
    int ans = INT32_MIN;
    int maxi_curr = 0;

    for(int i = 0; i < n*k; i++){
        maxi_curr = maxi_curr + arr[i%n];

        if(ans < maxi_curr){
            ans = maxi_curr;
        }
        if(maxi_curr < 0){
            maxi_curr = 0;
        }
    }

    cout << ans << endl;
}

int main(){
    vector <int> arr = {-1, 10, 20};
    maxSubarray_sum(arr, 2);
    return 0;
}