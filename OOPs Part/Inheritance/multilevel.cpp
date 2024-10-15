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

class German_shefpherd: public Dog{
    public:

        void strength(){
            cout << "Strong " << endl;
        }
};

int main(){
    German_shefpherd g;
    g.run();
    g.walk();
    g.strength();
    
    return 0;
}