#include<iostream>
#include<vector>
using namespace std;

int duplicate_in_Array(vector <int> arr){
    int ans = 0;
    for(int i = 0; i < arr.size(); i++){
        ans = ans^arr[i];
    }

    for(int i = 0; i < arr.size(); i++){
        ans = ans ^ i;
    }
    return ans;
}

int main(){

    vector <int> arr = {1, 2, 3, 4, 4};
    cout << duplicate_in_Array(arr);
    
    return 0;
}