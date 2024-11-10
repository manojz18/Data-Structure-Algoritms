#include<iostream>

using namespace std;

bool isPower(int n)
{
    int ans = 1;

    for(int i = 1; i <= n; i++){
        if(ans == n)return true;

        if(ans < INT32_MAX/2){
            ans *= 2;
        }
    }

    return false;
}

int main(){

    cout << isPower(14);
    
    return 0;
}