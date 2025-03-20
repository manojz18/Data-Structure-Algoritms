// #include<iostream>

// using namespace std;

// do-while loop

// void InsertionSort(int *arr, int n){
//     int i = 1;
//     do{
//         int temp = arr[i];
//         int j = i-1;
//         while(j >= 0 && arr[j] > temp)
//         {
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = temp;
//         i++;

//     }while(i < n);
// }

// void pirntArr(int *arr, int n){
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main(){
//     int arr[] = {4, 3, 9, 8, 2, 1};
//     InsertionSort(arr, 6);
//     pirntArr(arr, 6);
//     return 0;
// }


// for loop


#include<bits/stdc++.h>

using namespace std;

void insertionSort(vector <int> &v){
    for (int i = 1; i < v.size(); i++)
    {
        int temp = v[i];
        int j = i - 1;

        for ( ; j >= 0; j--){

            if(v[j] > temp){
                v[j+1] = v[j];
            }
            else{
                break;
            }
        }

        v[j+1] = temp;
    }
}


int main(){

    vector <int> v = {9, 4, 11, 10, 5};

    cout << "Before insertion sort: " ;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    insertionSort(v);

    cout << "After insertion sort: " ;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    
    return 0;
}
