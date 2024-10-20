#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// leader is the ele where all the elements to its right are smaller then it. 


// Brute Force

// void leader(int arr[], int n)
// {
//     vector <int> ans;

//     for(int i = 0; i < n; i++){
//         int j = i+1;
//         for( ; j < n; j++){
//             if(arr[j] > arr[i]) break;
//         }

//         if(j == n){
//             ans.push_back(arr[i]);
//         }
//     }
    
//     for(int i = 0; i < ans.size(); i++){
//         cout << ans[i] << " ";
//     }
//     cout << endl;
// }

// Approach 2

void leader(int arr[], int n)
{
    vector <int> result;
    int maxim = arr[n-1];

    result.push_back(maxim);

    for(int i = n-2; i >= 0; i--){
        if(arr[i] > maxim){
            maxim = arr[i];
            result.push_back(maxim);
        }
    }

    reverse(result.begin(), result.end());

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {16, 17, 4, 5, 3, 2, 1};
    leader(arr, 7);
    return 0;
}