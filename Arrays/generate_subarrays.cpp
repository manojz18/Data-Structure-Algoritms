#include<iostream>

using namespace std;

void generate_all_subarrays(int arr[], int n){

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            for(int k = i; k <= j; k++){
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
    
}

int main(){
    int arr[] = {1, 2, 3};

    generate_all_subarrays(arr, 3);
    
    return 0;
}