#include<iostream>

using namespace std;

int main(){
    int arr[3][4];

    // Row-wise Input
    // for(int row = 0; row < 3; row++){
    //     for(int col = 0; col < 4; col++){
    //         cin >> arr[row][col];
    //     }
    // }

    //col-wise Input

    for(int col = 0; col < 4; col++){
        for(int row = 0; row < 3; row++){
            cin >> arr[row][col];
        }
    }

    // Printing the 2D Array
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}