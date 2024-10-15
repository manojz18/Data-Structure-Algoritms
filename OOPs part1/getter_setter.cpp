#include<iostream>

using namespace std;

class Hello
{
    private:
        int health;

    public:
        char level;
        int age;

    void setHealth(int h){
        health = h;
    }  

    void getHealth(){
        cout << "Health is: " << health << endl;
    }    
};

int main(){
    // // --------static allocation----------
    // Hello h;

    // h.setHealth(80);
    // h.level = 'A';
    // cout << h.level  << endl;
    // h.getHealth();

    // ----------Dynamic allocation--------------
    // Hello *a = new Hello;

    // (*a).setHealth(80);
    // (*a).level = 'A';
    // cout << (*a).level  << endl;
    // (*a).getHealth();

    // a->setHealth(80);
    // a->level = 'A';
    // cout << a->level  << endl;
    // a->getHealth();

    return 0;
}