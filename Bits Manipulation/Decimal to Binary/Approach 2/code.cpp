#include<iostream>
#include<math.h>
using namespace std;

void Binary(int decimal){
    int n = decimal;
    int ans = 0, i = 1;
    while(n != 0){
        int bit = n & 1;
        ans = (bit * i) + ans;
        i *= 10; 
        n = n >> 1;
    }
    cout << ans << endl;  
}

int main(){
    int n;
    cout << "Enter the Decimal No. ";
    cin >> n;
    cout << "The Binary Number is ";
    Binary(n);
    return 0;
}