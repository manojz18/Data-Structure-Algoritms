#include<iostream>

using namespace std;

void N_Complement(int n){
    int mask = 0;

    int m = n;
    while (n != 0)
    {   
        mask = (mask << 1) | 1;
        n = n >> 1;
    }

    int res = (~m) & mask;
    cout << res << endl;
}

int main(){

    N_Complement(5);
    
    return 0;
}