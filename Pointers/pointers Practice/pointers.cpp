#include<iostream>

using namespace std;

int main(){
    // int arr[20] = {0, 4, 6, 8, 10, 12};
    // cout << arr << endl;  // address at arr[0]
    // cout << *(arr+1) << endl; // 4
    // cout << &arr[0] << endl; // address at 0 position
    // cout << *arr << endl; // 0
    // cout << *arr+1 << endl; // 1
    // cout << (*arr)+1 << endl;  // 1
    // cout << *(arr)+1 << endl; // 1
    // cout << 2[arr] << endl; // 6

    // int temp[20];
    // int *ptr = &temp[0];
    // cout << sizeof(*temp) << endl;
    // cout << sizeof(temp) << endl;
    // cout << sizeof(&temp) << endl;
    // cout << sizeof(&temp[0]) << endl;



    // cout << sizeof(temp) << endl; //80
    // cout << sizeof(ptr) << endl; // 8 -> 4
    // cout << sizeof(*ptr) << endl; // 4

    int arr1[20] = {1, 2, 3};
    int *ptr = &arr1[0];
    
    // Error
    //arr1 = arr1 + 1;

    // ptr = ptr + 1; --> &arr[1]


    return 0;
}