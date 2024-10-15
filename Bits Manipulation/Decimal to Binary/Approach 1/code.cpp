// convert Decimal to Binary

#include<iostream>
#include<vector>
using namespace std;

vector <int> Solve(int decimal){
    vector <int> binary;
    int power = 0;

    // Getting the largest power of 2 less than or equal to decimal no.
    while ((1 << power) <= decimal){
        power++;
    }
    power--;   // adjusting the power to less than or equal to decimal

    while(power >= 0){
        int currPower = 1 << power;

        if(decimal >= currPower){
            binary.push_back(1);
            decimal -= currPower;
        }
        else{
            binary.push_back(0);
        }
        power--;
    }
    return binary;
}

int main(){
    int n;
    cout << "Enter the Decimal Number: ";
    cin >> n;

    vector <int> ans = Solve(n);
    cout << "Binary No. for Decimal No. " << n << " is " ;
    
    for(int Bit : ans){
        cout << Bit;
    }
    cout << endl;
    
    return 0;
}