#include<iostream>
#include<vector>
using namespace std;

// vector <int> negativeTo_oneSide(vector <int> &arr){
//     int strt = 0;
//     int end = arr.size()-1;

//     while(strt < end){
//         while(arr[strt] < 0 && strt < end){
//             strt++;
//         }

//         while(arr[end] >= 0 && strt < end){
//             end--;
//         }
//         // if(strt >= end){
//         //     break;
//         // }
//         swap(arr[strt], arr[end]);
//     }

//     return arr;

// }

vector <int> negativeTo_oneSide(vector <int> &arr){
    int strt = 0;
    int end = arr.size()-1;

    while(strt < end){
        if(arr[strt] < 0){
            strt++;
        }
        if(arr[end] >= 0){
            end--;
        }
        if(arr[strt] >= 0 && arr[end] < 0){
            swap(arr[strt++], arr[end--]);
        }
    }
    return arr;

}

int main(){

    vector<int> arr = {0, 1, 1, 1, -2};
    negativeTo_oneSide(arr);
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}