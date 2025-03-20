#include<bits/stdc++.h>

using namespace std;

void SelectionSort(vector <int> &arr, int n){
    for(int i = 0; i < n-1; i++){
        int minIdx = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }

        swap(arr[minIdx], arr[i]);
    }
}

int main(){

    vector <int> arr = {9, 2, 5, 4};
    

    cout << "Array Before Sorting" << endl;

    for(int i = 0; i < arr.size(); i++){
        cout<< arr[i] << " ";
    }
    cout << endl;

    SelectionSort(arr, arr.size());

    cout << "Array After Sorting" << endl;

    for(int i = 0; i < arr.size(); i++){
        cout<< arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}