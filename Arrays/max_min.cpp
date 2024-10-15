#include<iostream>

using namespace std;

void Max_mini(int arr[], int n){


    int mini = INT32_MAX;
    int maxi = INT32_MIN;

    for(int i = 0; i < n; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
    }
    cout << "Maximum: " << maxi << endl;
    cout << "Minimum: " << mini << endl;

}

int main(){
    int arr[] = {1, 2, 3, 4};
    Max_mini(arr, 4);
    return 0;
}