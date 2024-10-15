#include<iostream>

using namespace std;

class Hero{
    public:

        Hero(){
            cout << "Constructor called" << endl;
        }

        ~Hero(){
            cout << "Destructor called" << endl;
        }
};

int main(){
    Hero h1; // automatically called destructor
    Hero *a = new Hero(); // ,manually destructor called
    delete a; 
    return 0;
}