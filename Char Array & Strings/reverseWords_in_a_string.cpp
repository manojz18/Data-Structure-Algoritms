#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        int strt = 0;
        int end = s.length();

        int left, right, i;
        left = right = i = 0;

        while(i < end){
            while(i < end && s[i] == ' ') i++;
            
            if(i == end){
                break;
            }

            while(i < end && s[i] != ' '){
                s[right++] = s[i++];
            }

            reverse(s.begin() + left, s.begin() + right);
            s[right++] = ' ';
            left = right;
            i++;
            
        }
        s.resize(right-1);
        return s;
    }
};

int main(){
    
    return 0;
}