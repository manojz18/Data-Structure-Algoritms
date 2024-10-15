#include<iostream>

using namespace std;

void update(int **p){
    //p = p + 1; --> No change

    // *p = *p + 1; --> change in ptr

    // **p = **p + 1; --> change in p
}

int main(){
    int p = 10;
    int *ptr = &p;
    int **ptr2 = &ptr;

    // Before function

    cout << p << endl;
    cout << ptr << endl;
    cout << ptr2 << endl;

    update(ptr2);
    // After function
    cout << p << endl;
    cout << ptr << endl;
    cout << ptr2 << endl;
    return 0;
}