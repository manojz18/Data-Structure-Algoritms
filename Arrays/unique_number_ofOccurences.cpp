#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    int size = arr.size();
    vector <int> ans;
    sort(arr.begin(), arr.end());
    int i = 0;
    while(i < size){
        int count = 1;
        for(int j = i+1; j < size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
            else{
                break;
            }
        }
        ans.push_back(count);
        i = count + i;
    }
    sort(ans.begin(), ans.end());
    for(int i = 0; i < ans.size()-1; i++){
        if(ans[i] == ans[i+1]){
            return false;
        }
    }
    return true;
}


int main(){
    
    vector <int> arr = {1, 2, 3, 2, 3, 2};
    
    if(uniqueOccurrences(arr)){
        cout << "Unique Number of Occurence" << endl;
    }
    else{
        cout << "Not a Unique Number of Occurence" << endl;
    }
    
    return 0;
}