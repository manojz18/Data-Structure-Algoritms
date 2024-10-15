#include<iostream>

using namespace std;

// Replace all the spaces in between words in a string by '@40'

string ReplaceSpaces(string s){
    int countSpaces = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            countSpaces++;
        }
    }

    int oldLength = s.length();
    int newLength = oldLength + (2 * countSpaces);

    s.resize(newLength);
    int OldIdx = oldLength-1;
    int newIdx = newLength-1;

    while(OldIdx >= 0){
        if(s[OldIdx]==' '){
            s[newIdx--] = '0';
            s[newIdx--] = '4';
            s[newIdx--] = '@';
        }
        else{
            s[newIdx--] = s[OldIdx];
        }

        OldIdx--;
    }
    return s;
}

int main(){
    string s = "hello motto";
    cout << ReplaceSpaces(s);
    
    return 0;
}