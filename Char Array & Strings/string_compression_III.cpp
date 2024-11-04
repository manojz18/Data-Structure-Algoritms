#include<iostream>

using namespace std;

string compressString (string S){
    int n = S.size();
    string comp = "";

    for(int i = 0; i < n; ){
        char ch = S[i];
        int count = 0;

        int idx = i;

        while(idx < n && idx < 9 && S[idx] == ch){
            count++;
            idx++;
        }

       comp += to_string(count);
        comp.push_back(S[i]);    

        i = idx;
    }

    return comp;
}

int main(){

    string str ="aabcdeeeffg";

    cout << compressString(str);
    
    return 0;
}