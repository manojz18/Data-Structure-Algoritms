#include<iostream>

using namespace std;

void Swap_Alternate(int arr[], int n){
    
    for(int i = 0; i < n; i+=2){
        if(i+1 < n){
            swap(arr[i], arr[i+1]);
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[]= {1, 2, 3, 4, 5, 6};
    Swap_Alternate(arr, 6);
    return 0;
}