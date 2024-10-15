#include<iostream>

using namespace std;


int rotated_sorted(int arr[], int n, int target){
    int strt = 0;
    int end = n-1;

    while(strt <= end){
        int mid = (strt + end)/2;


        if(arr[mid] == target){
            return mid;
        }

        if(arr[strt] <= arr[mid]){ // left half is sorted
            if(arr[strt] <= target && target < arr[mid]){
                end = mid - 1;
            }
            else{
                strt = mid + 1;
            }
        }

        // If left half is sorted 
        else{
            if(arr[mid] < target && target <= arr[end]){
                strt = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }

    }

    return -1;
}

int main(){

    int arr[] = {5, 7, 1, 2, 2, 3, 4};
    cout << rotated_sorted(arr, 7, 5);
    
    return 0;
}