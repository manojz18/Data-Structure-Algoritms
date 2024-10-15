#include<iostream>

using namespace std;

int main(){
    char ch[6] = "abcde";

    // cout << ch << endl; // abcde
    // cout << ch+1 << endl; // bcde
    // cout << *ch << endl;  // a
    // cout << *ch + 1 << endl;  // 98
    // cout << *(ch+1) << endl;  // b
    // cout << &ch << endl;  // address at 'a'
    // cout << &ch + 1 << endl; // address of b
    // cout << &(ch)+1 << endl; // address of b

    char *ptr = ch;
    cout << ptr << endl; // abcde
    cout << *ptr << endl; // a
    cout << &ptr << endl; // address at 'a'

    // char *ptr1 = &ch; // Error

    
    return 0;
}