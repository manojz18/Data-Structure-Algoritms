#include<iostream>

using namespace std;

void rotate_anticlockwise(int arr[], int n, int k){
    // rotate k times
    for(int i = 0; i < k; i++){
        // rotate 1st element
        int last = arr[n-1];
        for(int j = n-1; j > 0; j--){
            arr[j] = arr[j-1];
        }
        arr[0] = last;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    rotate_anticlockwise(arr, 5, 4);

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}