#include<bits/stdc++.h>

using namespace std;

string uncommonInString(string s1, string s2){
    string ans = "";

    // vector <int> pass(26, false);
    
    // check in the 1st str

    for(int i = 0; i < s1.size(); i++){
        bool found = false;
        for(int j = 0; j < s2.size(); j++){
            if(s1[i] == s2[j]){
                found = true;
                break;
            }
        }

        if(!found ){  //&& !pass[s1[i] - 'a']
            // pass[s1[i] - 'a'] = true;
            ans += s1[i];
        }
    }

    for(int i = 0; i < s2.size(); i++){
        bool found = false;

        for(int j = 0; j < s1.size(); j++){
            if(s2[i] == s1[j]){
                found = true;
                break;
            }
        }

        if(!found ){ //&& !pass[s2[i] - 'a']
            // pass[s2[i] - 'a'] = true;
            ans += s2[i];
        }
    }

    return ans;

}

int main(){
    string s1 = "abcdefg";
    string s2 = "axyzuw";

    cout << uncommonInString(s1, s2) << endl;
    
    return 0;
}