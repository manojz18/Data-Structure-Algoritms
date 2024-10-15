#include<iostream>

using namespace std;

void sort012(int *arr, int n){
    int i = 0;
    int mid = 0;
    int j = n-1;

    while(i <= j){
        if(arr[mid] == 0){
            swap(arr[i], arr[mid]);
            i++;
            mid++;
        }
        else if(arr[mid] == 1){ 
            mid++;
        }
        else{// arr[mid] == 2
            swap(arr[mid], arr[j]);
            j--;
        }
    }
   
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {0, 2, 2, 1, 0, 1, 1, 0, 2};
    sort012(arr, 9);
    printArray(arr, 9);
    
    return 0;
}