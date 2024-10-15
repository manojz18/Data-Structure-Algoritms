#include<iostream>

using namespace std;

void Sort_array(int arr[], int n){
    if( n == 0 || n == 1 ){
        return;
    }


    // placed 1st element at its right place
    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i] , arr[i+1]);
        }
    }

    // Now recrsive call for the remaining array

    Sort_array(arr, n-1);
}

int main(){
    int arr[] = {10, 5, 8, 6, 2};
    Sort_array(arr, 5);

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}