#include<iostream>

using namespace std;

class A{
    public:
        void Hello(){
            cout << "Greetings from class A" << endl;
        }

};

class B{
    public:
    void Hello(){
            cout << "Greetings from class B" << endl;
    }
};

class C : public A, public B{
    public:

        void greets(){
            cout << "Greetings from class C" << endl;
        }

};

int main(){
    C obj;
    // obj.Hello(); // Ambiguity
    obj.B::Hello();

    return 0;
}