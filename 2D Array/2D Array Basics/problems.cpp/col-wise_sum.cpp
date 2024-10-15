#include<iostream>

using namespace std;

void colWise_Sum(int arr[][3], int rows, int cols){

    for(int colm = 0; colm < cols; colm++){
        int sum = 0;
        for(int  row= 0; row < rows; row++){
            sum = sum + arr[row][colm];
        }
        cout << "sum of column" << colm << " is: " << sum << endl;
    }

}

int main(){
    int arr[3][3];

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            cin >> arr[row][col];
        }
    }

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;
    colWise_Sum(arr, 3, 3);
    return 0;
}