#include<iostream>
#include<string.h>

using namespace std;


class Hero{
    public: 

        char *name;
        int health;

        Hero(int health){
            this -> health = health;
        }

        Hero(char *name){
            this -> name = name;
        }

        Hero(Hero& cpy){
            char *ch = new char[strlen(cpy.name)+1];
            strcpy(ch, cpy.name);
            this -> name = ch;
            cout << "Copy Constructor Called" << endl;
        }

        void print(){
            cout << "Name: " << name << endl;
        }

};

int main(){
    Hero h1(80);;
    h1.name = "Manoj";
    h1.print();

    cout << "---------------" << endl;

    h1.name[0] = 'Z';
    h1.print();
    Hero h2(h1);
    h2.print();
    
    return 0;
}