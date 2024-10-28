#include<bits/stdc++.h>

using namespace std;

void missing_repeating(vector <int> arr){
    int n = arr.size();
    int XOR = 0;

    for(int i = 0; i < n; i++){
        XOR ^= arr[i];
    }

    for(int i = 1; i <= n; i++){
        XOR ^= i;
    }

    // XOR is the xor of missing and repeating element
    // so how to get these two ele -> find the rightmost set bit, bcoz both of them have difference in set bit
    // according the set_bit we will create the grp of setbit and not set_bit
    // after that we will xor with the element from 1 to n which are set bit similarly for the non set bit

    int set_bit = XOR & ~(XOR-1); //gives rightmost set bit

    int x = 0, y = 0;
    // x -> grp of element of set bit 1
    // y -> grp of element of non set bit
    for(int i = 0; i < n; i++){
        if(arr[i] & set_bit){
            x ^= arr[i];
        }
        else{
            y ^= arr[i];
        }
    }

    // Now XOR from 1 to n with x and y to get missing and repeating ele

    for(int i = 1; i <= n; i++){
        if(i & set_bit){
            x ^= i;
        }
        else{
            y ^= i;
        }
    } 

    // now we have got the repeating and missing but we dont know which one

    int repeating = 0, missing = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            repeating = x;
            missing = y;
            break;
        }

        if(arr[i] == y){
            repeating = y;
            missing = x;
            break;
        }
    }

    cout << "Missing and the repeating elements are: " << missing << " <-> " << repeating << endl;

}

int main(){
    vector <int> arr = {1, 2, 2, 4};

    missing_repeating(arr);
    return 0;
}