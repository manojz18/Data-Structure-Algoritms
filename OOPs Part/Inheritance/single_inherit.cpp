#include<iostream>

using namespace std;

class Animal{
    public:
        void walk(){
            cout << "Walking" << endl;
        }

};

class Dog: public Animal{
    public:

        void run(){
            cout << "Running" << endl;
        }
};

int main(){
    Dog d;
    d.walk();
    return 0;
}