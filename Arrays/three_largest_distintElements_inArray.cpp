#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// void threeLargest(vector <int> arr){
//     vector <int> ans;
//     int n = arr.size();
//     int cnt = 0;
//     sort(arr.begin(), arr.end());

//     for(int i = n-1; i >= 0; i--){

//         if(ans.empty() || arr[i] != ans.back()){
//             ans.push_back(arr[i]);
//             cnt++;
//             if(cnt == 3){
//                 break;
//             }
//         }
        
//     }
    
//     for(int i = 0; i < ans.size(); i++){
//         cout << ans[i] << " ";
//     }
//     cout << endl;
// }

// Approach 2

void three_largest(vector <int> &arr){
    int first, second, third;
    first = second = third = INT32_MIN;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > first){
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i]> second && arr[i] < first){
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third && arr[i] < second){
            third = arr[i];
        }
    }

    cout << first << " " << second << " " << third << endl;
}

int main(){
    vector <int> arr = {34, 34, 11, 9, 14, 34, 14};
    three_largest(arr);
    return 0;
} 