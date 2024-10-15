#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void DecimalConversion(int decimal){
    int n = decimal;
    vector <int> ans;

    while(n != 0){
        int bit = n % 2;
        ans.push_back(bit);
        n = n/2;
    }
    reverse(ans.begin(), ans.end());

    for(int i = 0; i < ans.size() ; i++){
        cout << ans[i];
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    DecimalConversion(n);
    
    return 0;
}