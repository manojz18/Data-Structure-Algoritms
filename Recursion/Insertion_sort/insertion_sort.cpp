#include<iostream>

using namespace std;

void Sort_array(int arr[], int n){
    if(n <= 1){
        return;
    }

    Sort_array(arr, n-1);

    int key = arr[n-1];

    int j = n-2;

    while(j >= 0 && arr[j] > key){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = key;
}

int main(){
    int arr[] = {2, 1, 9, 7, 4};
    Sort_array(arr, 5);

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}