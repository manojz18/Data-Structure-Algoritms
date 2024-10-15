#include<iostream>

using namespace std;

int reverseArray(int arr[], int n){
    int temp[n];
    for(int i = 0; i < n; i++){
        temp[i] = arr[n-i-1];
    }

    for(int i = 0; i < n; i++){
        cout << temp[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    reverseArray(arr, 5);
    return 0;
}