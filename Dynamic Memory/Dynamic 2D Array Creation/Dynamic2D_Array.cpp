#include<iostream>

using namespace std;

int main(){
    int rows;
    cin >> rows; //rows

    int cols;
    cin >> cols; // columns

    // Dynamic 2D array Creating
    int **arr = new int* [rows]; 
    for(int i = 0; i < rows; i++){
        arr[i] = new int[cols];
    }


    // taking input in Dynamic 2D Array
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> arr[i][j];
        }
    }

    // Output
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Releasing memory

    for(int i = 0; i < rows; i++){
        delete [] arr[i];
    }
    delete []arr;
 

    return 0;
}