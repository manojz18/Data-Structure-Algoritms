#include<iostream>

using namespace std;

void rotate_clockwise(int arr[], int n, int k){
    for(int i = 0; i < k; i++){
        // rotate 1 element
        int first = arr[0];
        for(int j = 0; j < n-1; j++){
            arr[j] = arr[j+1];
        }
        arr[n-1] = first;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    rotate_clockwise(arr, 5, 2);

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}