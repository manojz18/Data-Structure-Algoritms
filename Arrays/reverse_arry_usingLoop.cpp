#include<iostream>

using namespace std;

void arrayReverse(int arr[], int n){
    int strt = 0;
    int end = n-1;

    for(int i = 0; i < n/2; i++){
        swap(arr[strt], arr[end]);
        strt++;
        end--;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    arrayReverse(arr, 10);

    for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }

    return 0;
}