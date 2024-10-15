#include<iostream>
#include<stack>

using namespace std;

bool isValidParenthesis(string s)
{
    // Write your code here.
    stack <char> st;

    for(int i = 0; i < s.length(); i++){
        char ch = s[i];

        // Opening Bracket
        if(ch == '{' || ch == '[' || ch == '('){
            st.push(ch);
        }
        else{
            // Closing Bracket
            
            if(!st.empty()){
                char top = st.top();
                if((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '[')){
                    st.pop();
                }
                else{
                    
                    return false;
                }
            }
            else{
                // empty stack
                return false;
            }
            
        }
    }

    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    
    return 0;
}