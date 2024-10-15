#include<iostream>

using namespace std;

void print(int *p){
    cout << p << endl; // address is printed
}

int main(){
    int val = 5;
    int *ptr = &val;
    cout << ptr << endl; // address is printed
    print(ptr);
    return 0;
}