#include<iostream>

using namespace std;

class polyCompile{
    public:

        void hello(int a){
            cout << a << " My Self Manoj " << endl;
        }

        string hello(string name){
            cout << name << " is My name" << endl;
        }
};

int main(){
    polyCompile p;
    p.hello(10);
    p.hello("Manoj");

    return 0;
}