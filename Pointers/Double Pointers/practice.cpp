#include<iostream>

using namespace std;

int main(){
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    //printing value 5

    cout << i << endl;
    cout << *ptr << endl;
    cout << **ptr2 << endl;

    // printing address of i
    
    cout << &i << endl;
    cout << ptr << endl;
    cout << *ptr2 << endl;

    // printing the value and address of ptr

    cout << ptr << endl;
    cout << *ptr2 << endl;

    cout << &ptr << endl;
    cout << ptr2 << endl;

    return 0;
}