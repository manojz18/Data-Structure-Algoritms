#include<iostream>

using namespace std;

void InsertionSort(int *arr, int n){
    int i = 1;
    do{
        int temp = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
        i++;

    }while(i < n);
}

void pirntArr(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {4, 3, 9, 8, 2, 1};
    InsertionSort(arr, 6);
    pirntArr(arr, 6);
    return 0;
}