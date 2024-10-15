#include<iostream>
#include<stack>
using namespace std;

bool FindRedundantBrackets(string s){
    // create Stack
    stack <int> st;

    for(int i = 0; i < s.length(); i++){
        char ch = s[i];
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else{
            char c = s[i];
            if(c == ')'){
                bool isRedundant = true;
                while(st.top() != '(')
                {
                    if(c == '+' || c == '-' || c == '*' || c == '/'){
                        isRedundant = false;
                    }
                    st.pop();
                }
                if(isRedundant)
                {
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}

int main(){
    
    return 0;
}