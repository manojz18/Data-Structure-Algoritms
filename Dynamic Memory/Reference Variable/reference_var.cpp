#include<iostream>

using namespace std;

void update(int &n){
    n++;
}

int main(){
    // int i = 5;
    // int &j = i; // reference variable

    // cout << i << endl;
    // i++;
    // cout << j << endl;

    int n = 5;

    cout << "Before " << n << endl;

    update(n);

    cout << "After " << n << endl;

    
    return 0;
}