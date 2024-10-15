#include<iostream>
#include<algorithm>

using namespace std;

void ArryMaxMin(int arr[], int n){

    sort(arr, arr+n);

    int first = arr[0];
    int second = arr[n-1];

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {45, 10, 11, 8, 50, 3};
    ArryMaxMin(arr, 6);
    return 0;
}