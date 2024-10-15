#include<iostream>

using namespace std;

class Hero{
    public: 

        int health;
        int level;
        char *name;

        Hero(){
            cout << "Simple Constructor Called" << endl;
            name = new char[50];
        }

        void setHealth(int health){
            this -> health = health;
        }

        void setLevel(int level){
            this -> level = level;
        }

        void setName(char name[]){
            this->name = name;
        }

        void print(){
            cout << "Level: " << level << endl;
            cout << "Health: " << health << endl;
            cout << "Name: " << name << endl;
        }

};

int main(){
    Hero h1;
    h1.setHealth(80);
    h1.setLevel('A');
    char naam[] = "Manoj";
    h1.setName(naam);
    h1.print();

    cout << "---------------" << endl;
    h1.name[0] = 'Z';
    h1.print();
    Hero h2(h1);
    h2.print();
    
    return 0;
}