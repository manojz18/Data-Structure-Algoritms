#include<iostream>

using namespace std;

class A{
    public:

        void base1(){
            cout << "Base class 1" << endl;
        }
};

class B{
    public:

        void base2(){
            cout << "Base class 2" << endl;
        }
};

class C: public A, public B{
    public:
        void classC(){
            cout << "Child class C --> parent A, B" << endl;
        }
};

class D : public A{
    public:
        void classD(){
            cout << "Child class D --> parent A" << endl;
        }
};

int main(){
    D obj1;
    C obj2;
    obj2.base1();
    obj2.base2();
    obj2.classC();

    obj1.base1();
    obj1.classD();
    
    return 0;
}