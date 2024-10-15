#include<iostream>

using namespace std;

class Hero{
    public:
        const int val = 15;
        int lang;

        Hero(int c){
            lang = c;
            cout << "Constructor called " << lang << endl;
    
        }

        void func(){
            cout << "Func Called" << endl;
        }

        void walk(int s)const{
            cout << "Walking function called" << endl;
        }

};


int main(){
    const Hero obj(10);
    //obj.func(); // Error -> not const function

    obj.walk(15);
    return 0;
}