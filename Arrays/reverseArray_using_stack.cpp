#include<iostream>
#include<stack>

using namespace std;

void ReverseArray(int arr[], int n){
    stack <int> s;

    for(int i = 0; i < n; i++){
        s.push(arr[i]);
    }

    for(int i = 0; i < n; i++){
        arr[i] = s.top();
        s.pop();
    }
}

void printArray(int arr[], int n){
     for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    ReverseArray(arr, size);
    printArray(arr, size);
    
    return 0;
}