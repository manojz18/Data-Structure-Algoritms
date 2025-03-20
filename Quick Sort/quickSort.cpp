#include<bits/stdc++.h>

using namespace std;

int pivot(vector <int> &arr, int low, int high){
    int pivotIdx = arr[low];

    int i = low;
    int j = high;

    while(i < j){
        while(arr[i] <= arr[low] && i <= high)
            i++;
        
        while(arr[j] > arr[low] && j >= low)
            j--;

        if(i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[j], arr[low]);
    return j;

}


void quickSort(vector <int> &arr, int low, int high){
    if(low < high){
        // gives the correct indx of element
        int pIndx = pivot(arr, low, high);
        quickSort(arr, low, pIndx-1);
        quickSort(arr, pIndx+1, high);
    }
}

int main(){
    vector <int> arr = {10, 2, 4, 9, 11, 14, 8, 7, 5, 15};

    cout << "Befor Sorting: " <<endl;
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    } 
    cout << endl;

    quickSort(arr, 0, arr.size()-1);

    cout << "After Sorting: " <<endl;
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    } 
    cout << endl;

    return 0;
}