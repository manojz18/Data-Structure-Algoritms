#include<bits/stdc++.h>

using namespace std;

void bubbleSort(vector <int> &arr, int n){

    for(int i = 0; i < n; i++){
        bool checkSwap = false;
        
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                checkSwap= true;
            }
        }

        if(!checkSwap)
            return;
    }
}

int main(){
    vector <int> arr = {5, 8, 1, 2, 6, 3};

    cout << "Before sorting: "<< endl;

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, arr.size());

    cout << "After sorting: "<< endl;

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}