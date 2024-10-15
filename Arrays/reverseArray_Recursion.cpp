#include<iostream>

using namespace std;

void reverse_recursion(int arr[], int strt, int end){
    // Base Case
    if(strt >= end){
        return;
    }
    else{
        int temp = arr[strt];
        arr[strt] = arr[end];
        arr[end] = temp;
    
        reverse_recursion(arr, strt+1, end-1);
    }
    
}


void printArray(int arr[], int n){
     for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int arr[] = {1, 2, 3, 4, 5};
    reverse_recursion(arr, 0, 4);
    printArray(arr, 5);
    return 0;
}