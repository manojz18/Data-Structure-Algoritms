// ex. I am Programmer => Programmer am I

#include<bits/stdc++.h>
using namespace std;

// string reverseWords(string str){
    
//     reverse(str.begin(), str.end());
//     str.insert(str.end(), ' ');

//     int n = str.length();
//     int j = 0;

//     for(int i = 0; i < n; i++){
//         if(str[i] == ' '){
//             reverse(str.begin() + j, str.begin() + i);
//             j = i + 1;
//         }
        
//     }

//     str.pop_back();

//     return str;

// }

// string reverseString(string str){
//     int left = 0;
//     int right = str.length()-1;

//     while(left < right){
//         if(str[left] == ' '){
//             left++;
//         }
//         else if(str[right] == ' '){
//             right--;
//         }
//         else{
//             swap(str[left++], str[right--]);
//         }
//     }

//     return str;
// }

// int main(){
//     string s = "Manoj  ";

//     cout << reverseString(s);
//     return 0;
// }