#include<iostream>
#include<vector>
using namespace std;

int Search_in_RotatedArr(vector<int> &arr, int target){
    int s = 0; 
    int e = arr.size()-1;

    while(s <= e){
        if(arr[s] == target){
            return s;
        }
        if(arr[e] == target){
            return e;
        }

        if(arr[s] < target){
            s++;
        }
        else if(arr[e] > target){
            e--;
        }
    }
    return -1;
}

int main(){
    vector <int> v = {22, 15, 16, 17, 18, 19, 20, 21};
    cout << Search_in_RotatedArr(v, 19);
    
    return 0;
}