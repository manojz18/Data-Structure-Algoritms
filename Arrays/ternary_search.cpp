#include<iostream>
using namespace std;

int ternary_search(int *arr, int l, int r, int target){

    int mid1 = l + (r-l)/3;
    int mid2 = r - (r-l)/3;

    while(l <= r){
        if(arr[mid1] == target){
            return mid1;
        }

        if(arr[mid2] == target){
            return mid2;
        }

        if(target < arr[mid1]){
            r = mid1-1;
        }

        else if(target > arr[mid2]){
            l = mid2+1;
        }

        else if(target > arr[mid1] && target < arr[mid2]){
            l = mid1 + 1;
            r = mid2 - 1;
        }

        mid1 = l + (r-l)/3;
        mid2 = r - (r-l)/3;
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << ternary_search(arr, 0, 7, 7);
    return 0;
}