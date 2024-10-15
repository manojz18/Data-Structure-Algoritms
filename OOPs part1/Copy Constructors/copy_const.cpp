#include<iostream>

using namespace std;

class Hero{
    public:

        int health;
        int age;

        Hero(int health, int age){
            cout << "Paramerterized Constructor Called" << endl;
            this -> health = health;
            this -> age = age;
        }

        Hero(Hero& temp){
            cout << "Copy Constructor Called" << endl;
            this->age = temp.age;
            this->health = temp.health;
            cout << endl;
         
        }

        void get(){
            cout << "Health is: " << health << endl;
            cout << "Age is: " << age << endl;

        }
};

int main(){
    Hero h(25, 50);
    h.get();

    Hero S(h);
    S.get();

    return 0;
}  