// --> Abstraction is hiding of the data and showing only the requied data.


#include<iostream>

using namespace std;

class Abstract{
    private:

        int Salary;
        int Password;

    public:

        void setSalary(int Salary){
            this->Salary = Salary;
        }

        void setPassword(int Password){
            this->Password = Password;
        }

        void display(){
            cout << "Salary: " << Salary << endl;
            cout << "Password: " << Password << endl; 
        }
};

int main(){
    Abstract obj;
    obj.setSalary(1500000);
    obj.setPassword(123);
    obj.display();
    return 0;
}