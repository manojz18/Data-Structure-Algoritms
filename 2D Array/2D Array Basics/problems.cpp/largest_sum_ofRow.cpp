#include<iostream>

using namespace std;

void LargestRow_Sum(int arr[][3], int rows, int cols){
    int maxi = INT32_MIN;
    int rowIndex = -1;
    for(int row = 0; row < rows; row++){
        int sum = 0;
    
        for(int colm = 0; colm < cols; colm++){
            sum = sum + arr[row][colm];
        }

        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
        
    }
    cout << "The largest row Sum is: "<< maxi; 
    cout << " and the Row index is: " << rowIndex << endl;

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
    LargestRow_Sum(arr, 3, 3);
    return 0;
}