
#include<iostream>

using namespace std;

void merge(int *arr, int s, int e){

    int mid = (s + e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;
    
    int *first = new int[len1];
    int *second = new int[len2];

    // Copy values
    int mainArrayIdx = s;

    for(int i = 0; i < len1; i++){
        first[i] = arr[mainArrayIdx++];
    }

    mainArrayIdx = mid+1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[mainArrayIdx++];
    }


    // merge this two arrays

    int idx1 = 0;
    int idx2 = 0;
    mainArrayIdx = s;

    while(idx1 < len1 && idx2 < len2){
        if(first[idx1] < second[idx2]){
            arr[mainArrayIdx++] = first[idx1++];
        }
        else{
            arr[mainArrayIdx++] = second[idx2++];
        }
    }

    while(idx1 < len1){
        arr[mainArrayIdx++] = first[idx1++];
    }

    while(idx2 < len2){
        arr[mainArrayIdx++] = second[idx2++];
    }

    delete[] first;  // Free the allocated memory
    delete[] second; // Free the allocated memory

}


void mergeSort(int *arr, int s, int e){

    if(s >= e){
        return;
    }

    int mid = (s + e)/2;

    // merge sort left part of the array
    mergeSort(arr, s, mid);

    // merge sort right part of the array
    mergeSort(arr, mid+1, e);

    // merge
    merge(arr, s, e);

}


int main(){

    int arr[] = {4, 5, 1, 2, 10, 15, 7, 1};

    int n = 8;

    int s = 0;
    int e = n-1;
    mergeSort(arr, s, e);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }cout << endl;
    return 0;
}