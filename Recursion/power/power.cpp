#include<iostream>

using namespace std;

// Best approach

int power(int a, int b){
    if( b == 0 ){
        return 1;
    }

    if( b == 1 ){
        return a;
    }

    int ans = power(a, b/2);

    // if power is even

    if( b %2 == 0 ){
        return ans * ans;
    }
    else{
        // power is odd
        return a * ans * ans;
    }

   
}

int main(){
    int a, b;

    cin >> a >> b;

    int ans = power(a, b);

    cout << "power of " << a << ", " << b << " is: " << ans << endl;

    return 0;
}