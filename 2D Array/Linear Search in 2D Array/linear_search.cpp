#include<iostream>

using namespace std;

bool isPresent(int arr[][4], int rows, int cols, int target){
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            if(arr[row][col] == target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[3][4];

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cin >> arr[row][col];
        }
    }

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    int target;
    cout << "Enter the Element You want to found: " ;
    cin >> target;

    if(isPresent(arr, 3, 4, target)){
        cout << "Number Found" << endl;
    }
    else{
        cout << "Number Not Found" << endl;
    }

    return 0;
}