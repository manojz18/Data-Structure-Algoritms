#include<iostream>

using namespace std;

// merging the sorted array

void merge(int *farray, int low, int mid1, int mid2, int high, int *arr){
    int i = low, j = mid1, k = mid2, l = low;
    
    // choose the smallest elelment from the three
    while((i < mid1) && (j < mid2) && (k < high)){
        if(arr[i] < arr[j])
        {
            if(arr[i] < arr[k]){
                farray[l++] = arr[i++];
            }
            else{
                farray[l++] = arr[k++];
            }
        }
        else
        {
            if(arr[j] < arr[k]){
                farray[l++] = arr[j++];
            }
            else{
                farray[l++] = arr[k++];
            }      
            
        }
    }

    // Case where 1st and 2nd are remeaning

    while((i < mid1) && (j < mid2)){
        if(arr[i] < arr[j])
        {
            farray[l++] = arr[i++];
        }
        else
        {
            farray[l++] = arr[j++];
        }
    }

    // Case where 2nd and 3rd are remeaning

    while((j < mid2) && (k < high)){
        if(arr[j] < arr[k])
        {
            farray[l++] = arr[j++];
        }
        else
        {
            farray[l++] = arr[k++];
        }
    }

    // Case where 1st and 3rd are remeaning

    while((i < mid1) && (k < high)){
        if(arr[i] < arr[k])
        {
            farray[l++] = arr[i++];
        }
        else
        {
            farray[l++] = arr[k++];
        }
    }

    // copying the remeaning values from 1st subarray

    while(i < mid1){
        farray[l++] = arr[i++];
    }

    // copying the remeaning values from 2nd subarray

    while(j < mid2){
        farray[l++] = arr[j++];
    }

    // copying the remeaning values from 3rd subarray

    while(k < high){
        farray[l++] = arr[k++];
    }

}


// performing merge sort 3 way recursion 

void mergeSort3Way_Rec(int *arr, int low, int high, int *farray){
    // array of size 1 or less
    if(high- low < 2){
        return;
    }

    // splitting array into 3 parts
    int mid1 = low + ((high - low)/3);
    int mid2 = low + 2 * ((high - low)/3) + 1;

    // sorting 3 arrays recursively
    mergeSort3Way_Rec(arr, low, mid1, farray);
    mergeSort3Way_Rec(arr, mid1, mid2, farray);
    mergeSort3Way_Rec(arr, mid2, high, farray);

    // Now Merging the Sorted Arrays
    merge(arr, low, mid1, mid2, high, farray);
}

void mergeSort3Way(int *arr, int n){
    if( n == 0 ){
        return;
    }

    // creating duplicate of given array
    int *farray = new int[n];

    // sort Function
    mergeSort3Way_Rec(farray, 0, n, arr);

    // copy back elements of duplicate array to the given array

    for(int i = 0; i < n; i++){
        arr[i] = farray[i];
    } 

    delete []farray;
}


int main(){
    int arr[] = {4, 1, 5, 3, 8, 6};
    int n = 6;
    mergeSort3Way(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}