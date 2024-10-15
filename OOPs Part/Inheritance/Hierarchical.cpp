#include<iostream>

using namespace std;

class SuperClass{
    public:

        void Calling() 
        {
            cout << " Calling Class " << endl;
        }
};

class Base1 : public SuperClass{
    public:

        void Greeting()
        {
            cout << " Greeting Class " << endl;
        }
};

class Base2 : public SuperClass{
    public:

        void Explainning()
        {
            cout << " Explain Class " << endl;
        }
};


int main(){
    Base2 obj;
    obj.Calling();
    obj.Explainning();
    
    return 0;
}