#include<iostream>

using namespace std;

int partition(int *arr, int s, int e){
    int pivot = arr[s];  // pivot element

    int count = 0;
    for(int i = s + 1; i <= e; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }

    int pivotIdx = s + count;

    swap(arr[s], arr[pivotIdx]);

    int i = s, j = e;

    // elements smaller then pivot ele left to it and bigger right to it

    while(i < pivotIdx && j > pivotIdx){
        while(arr[i] <= arr[pivotIdx]){
            i++;
        }

        while(arr[j] > arr[pivotIdx]){
            j--;
        }

        // if do not follow condition the swap
        if(i < pivotIdx && j > pivotIdx){
            swap(arr[i++], arr[j--]);
        }

    }
    return pivotIdx;
}

void quickSort(int *arr, int s, int e){
    if(s >= e){
        return;
    }

    // get the inx of pivot element which is placed at right position
    int p = partition(arr, s, e);

    // sort the left part from pivot ele
    quickSort(arr, s, p-+1);

    // sort the right part from pivot ele
    quickSort(arr, p+1, e); 


}

int main(){
    int arr[] = {4, 1, 5, 2, 9, 9, 10, 0, 8, 8};
    int n = 10;
    quickSort(arr, 0, n-1);

    for(int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
} 