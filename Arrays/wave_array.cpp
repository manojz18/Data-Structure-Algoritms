#include<bits/stdc++.h>

using namespace std;

void wave_Array(vector <int> &arr){
    int n = arr.size();
    int curr = 0;
    for(int i = 0; i < n-1; i += 2){
        if(i > 0 && arr[curr] < arr[i-1]){
            swap(arr[curr], arr[i-1]);
        }

        if(arr[curr] < arr[i+1]){
            swap(arr[curr], arr[i+1]);
        }
        curr += 2;
    }
}

int main(){
    vector <int> arr = {15, 4, 1, 2, 20, 25, 32};
    wave_Array(arr);

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}