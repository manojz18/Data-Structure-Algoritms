#include<bits/stdc++.h>

using namespace std;

int firstOccurence(vector <int> arr, int k){
    int strt = 0;
    int end = arr.size()-1;
    int fans = -1;

    while(strt <= end){
        int mid = (strt + end)/2;

        if(arr[mid] == k){
            fans = mid;
            end = mid - 1;  // to check for 1st occurence
        }

        if(arr[mid] > k) {
            end = mid - 1;
        }
        else if(arr[mid] < k){
            strt = mid + 1;
        }

    }

    return fans;
}

int lastOccurence(vector <int> arr, int k){
    int strt = 0;
    int end = arr.size()-1;
    int lans = -1;

    while(strt <= end){
        int mid = (strt + end)/2;

        if(arr[mid] == k){
            lans = mid;
            strt = mid + 1;  // to check for last occurence
        }

        if(arr[mid] > k) {
            end = mid - 1;
        }
        else if(arr[mid] < k){
            strt = mid + 1;
        }

    }

    return lans;
}

int main(){

    vector <int> arr = {1, 3, 5, 8, 8, 8, 8, 8, 10};
    cout << firstOccurence(arr, 8) << endl;
    cout << lastOccurence(arr, 8) << endl;
    
    return 0;
}