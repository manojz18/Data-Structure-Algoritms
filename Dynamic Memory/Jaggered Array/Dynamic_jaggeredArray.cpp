#include<iostream>

using namespace std;

int main(){
    int rows;
    cin >> rows;

    int cols[] = {3, 2, 4};

    int **jaggeredArray = new int*[rows];
    for(int i = 0; i < rows; i++){
        jaggeredArray[i] = new int[cols[i]];
    }

    // inputing jaggred array

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols[i]; j++){
            cin >> jaggeredArray[i][j];
        }
    }

    // output

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols[i]; j++){
            cout << jaggeredArray[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}