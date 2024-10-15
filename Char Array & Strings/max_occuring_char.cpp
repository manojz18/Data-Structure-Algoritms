#include<iostream>

using namespace std;

char getMax_Occur_char(string s){
    int map[26] = {0};

    for(int i = 0; i < s.length(); i++){
        int number = 0;
        number = s[i]-'a';
        map[number]++;
    }

    int ans = 0; // to store index of character
    int maxi = -1; // find the max value in map[i]
    
    for(int i = 0; i < 26; i++){
        if(maxi < map[i]){
            ans = i;
            maxi = map[i];
        }

    }
    char finalChar = ans + 'a';
    return finalChar;
}

int main(){
    string s;
    cin >> s;
    cout << getMax_Occur_char(s);
    return 0;
}