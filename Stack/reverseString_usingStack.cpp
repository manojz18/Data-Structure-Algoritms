#include<iostream>
#include<stack>

using namespace std;

int main(){
    string a = "Manoj";
    cout << "Original String is: " << a << endl;
    stack <char> s;

    for(int i = 0; i < a.length(); i++){
        s.push(a[i]);
    }

    string ans = "";

    while(!s.empty()){
        char c = s.top();
        ans.push_back(c);
        s.pop();
    }

    cout << "Answer is: " << ans << endl; 
     
    return 0;
}