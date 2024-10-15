// ----------- Encapsulation is nothing but binding the data members and the methods in a
//             unit is called as encapsulation.

// --- It can be achieved by making the data members private  


#include<iostream>

using namespace std;

class Encaps{
    private:

        int height;
        int weight;
        string name;

    public:

        void setName(string name){
            this->name = name;
        }

        string getName(){
            return this->name;
        }
};

int main(){
    Encaps obj;
    obj.setName("Manoj");
    cout << "The name is: " << obj.getName();
    
    return 0;
}