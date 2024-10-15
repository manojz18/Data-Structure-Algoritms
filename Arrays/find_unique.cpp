#include<iostream>

using namespace std;

int uniqueArray(int arr[], int n){
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[] = {5, 10, 3, 2, 3, 5, 2};
    cout << uniqueArray(arr, 7);
    
    return 0;
}