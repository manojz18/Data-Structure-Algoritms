#include<iostream>

using namespace std;

void Sort_array(int *arr, int n, int strt){
    // Base Case

    if(strt >= n-1){
        return;
    }

    // select the smallest element and place in the first position
    int minIdx = strt;
    for(int i = strt+1; i < n; i++){
        if(arr[minIdx] > arr[i]){
            minIdx = i;
        }
    }

    swap(arr[minIdx], arr[strt]);

    Sort_array(arr, n, strt+1);
}

int main(){

    int arr[] = {2, 1, 9, 7, 4};
    Sort_array(arr, 5, 0);

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl; 
    
    return 0;
}