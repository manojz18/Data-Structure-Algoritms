#include<iostream>

using namespace std;

class Hero{
    public:

        static int timeLapse;

        static int random(){
            return timeLapse;
        }
};

// Access Static parameter

int Hero :: timeLapse = 10;

int main(){
    cout << Hero::timeLapse << endl;
    cout << Hero::random() << endl; // static function

    Hero a;
    cout << a.timeLapse << endl; // can also access static keyword this way but not recommended bcoz it donot belong to class, it belongs to object.
    

    return 0;
}