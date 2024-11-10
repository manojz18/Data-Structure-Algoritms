#include<iostream>

using namespace std;

string lexographicallySmallest(string str, char C){

    int n = str.size();

    for(int i = 0; i < n; i++){
        if(str[i] > C){
            str.insert(i, 1, C);
            return str;
        }
    }

    str += C;

    return str;
}

int main(){

    string s = "acd";
    cout << lexographicallySmallest(s, 'b') << endl;
    
    return 0;
}