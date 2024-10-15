#include<iostream>
#include<vector>

using namespace std;

int firstOccur(vector <int> &arr, int n, int k){
    int s= 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <= e){
        if (arr[mid] == k){
            ans = mid;
            e = mid -1;
        }
        else if(arr[mid] > k){
            e = mid - 1;
        }
        else if(arr[mid] < k){
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOccur(vector <int> &arr, int n, int k){
    int s= 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <= e){
        if (arr[mid] == k){
            ans = mid;
            s = mid +1;
        }
        else if(arr[mid] > k){
            e = mid - 1;
        }
        else if(arr[mid] < k){
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    vector <int> arr = {1, 2, 3, 3, 3, 3, 4, 5};

    int ans1 = firstOccur(arr, 8, 3);
    int ans2 = lastOccur(arr, 8, 3);
    cout << "Total occurence is: " << ans2 - ans1 + 1; 
    // ans2 - ans1 + 1 -> formula to get total occurence   
    return 0;
}
