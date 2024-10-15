#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size() - 1; i >= 0; i--){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        digits[0] = 1;
        return digits;
    }
};

int main(){
    Solution s1;
    vector <int> plus = {1, 2, 3};
    vector <int> ans(s1.plusOne(plus));

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
   
    return 0;
}