#include<iostream>

using namespace std;

int changesInBinaryString(string s){
    int n = s.size();

    int count = 0;

    for(int i = 0; i < n-1; i += 2){
        if(s[i] != s[i+1])count++;
    }

    return count;

}

int main(){

    string s = "1111";
    cout << changesInBinaryString(s);
    
    return 0;
}