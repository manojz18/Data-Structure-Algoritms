#include<iostream>
using namespace std;

class Parent {    
public:        
    void show() {            
        cout << "Inside parent class" << endl;        
    }
};

class subclass1 : public Parent {    
public: 
    void show() {        
        cout << "Inside subclass1" << endl;    
    }
};

class subclass2 : public Parent {    
public: 
    void show() {        
        cout << "Inside subclass2" << endl;    
    }
};

int main(){
    subclass1 obj1;
    obj1.show();

    subclass2 obj2;
    obj2.show();

    obj2.Parent::show();

    return 0;
}