#include<iostream>

using namespace std;

void printFirstegative(int arr[], int n, int k){
    int firstNegativeIdx = 0;
    int firstNegativeEle;

    for(int i = k-1; i < n; i++){
        while((firstNegativeIdx < i) && (firstNegativeIdx <= i-k || arr[firstNegativeIdx] >= 0)){
            firstNegativeIdx++;
        }

        if(arr[firstNegativeIdx] < 0){
            firstNegativeEle = arr[firstNegativeIdx];
        }
        else{
            firstNegativeEle = 0;
        }

        cout << firstNegativeEle << " ";
    }
    cout << endl;
}

int main(){

    int arr[] = {1, -1, -7, 3, 8, -5, -6};

    printFirstegative(arr, 7, 3);  // -1, -1, -7, -5, -5
    
    return 0;
}