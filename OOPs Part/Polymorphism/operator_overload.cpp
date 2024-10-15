#include<iostream>

using namespace std;

class OperatorOverload{
    public:

        int a;
        int b;

        OperatorOverload(int a, int b){
            this -> a = a;
            this -> b = b;
        }

        void operator+ (OperatorOverload b){
            this -> a = a + b.b;
            this -> b = b.b + b.a;
        }

        void display(){
            cout << "val of a is: " << a << endl;
            cout << "val of b is: " << b << endl;
        }
};

int main(){
    OperatorOverload op1(20, 25);
    OperatorOverload op2(30, 35);
    op1+op2;

    op1.display();

    return 0;
}