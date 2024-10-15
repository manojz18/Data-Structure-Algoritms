#include<iostream>

using namespace std;
// ---------------- Initalisation List ---------------

class Car{
    public: 

        const string color;
        int speed;

        Car(string x, int y) : color(x), speed(y){
            // constructor body
            cout << color << " " << speed << endl;
        }

};

int main(){
    Car obj("Red", 160);
    return 0;
}