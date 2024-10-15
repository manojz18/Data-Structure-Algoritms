#include<iostream>
#include<algorithm>

using namespace std;


int main(){
    int arr[] = {1, 2, 3, 4, 5};

    int length = sizeof(arr)/sizeof(int);

    reverse(arr, arr+length);   // Inbuilt Function

    for(int i = 0; i < length; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}