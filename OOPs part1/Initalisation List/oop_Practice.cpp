#include<iostream>

using namespace std;

// class Teacher{
//     double salary;

//     public:

//     string name;
//     string dept;

//     void set(double salary){
//         // (*this).salary = salary;
//                 // OR
//         this->salary = salary;
//     }

//     // getter
//     void get(){
//         cout << "name : " << name << endl;
//         cout << "dept : " << dept << endl;
//         cout << "salary : " << salary << endl;
//     }

// };


// ------------------- CONSTRUCTOR -----------------

// class Teacher{
//     double salary;

//     public:

//     string name;
//     string dept;

//     // Non-parameterized

//     Teacher(){
//         cout << "Non - Parameterized Constructor" << endl;
//     }

//     Teacher(string name, string dept, double salary){
//         this -> name = name;
//         this -> dept = dept;
//         this -> salary = salary;

//     }

//     // Copy  Constructor

//     Teacher(Teacher &t){
//         this -> name = t.name;
//         this -> dept = t.dept;
//         this -> salary = t.salary;
//     }

//     // getter
//     void get(){
//         cout << "name : " << name << endl;
//         cout << "dept : " << dept << endl;
//         cout << "salary : " << salary << endl;
//     }

// };


// ---------------- Shallow and Deep Copy -------------------

// class Student{
//     public:
//     string name;
//     double cgpa;
//     int *roll_no;


//     Student(string name, double cgpa, int roll){
//         this->name = name;
//         this->cgpa = cgpa;
//         roll_no = new int;
//         *roll_no = roll;
//     }

//     Student(Student &S){
//         this->name = S.name;
//         this->cgpa = S.cgpa;
//         roll_no = new int;
//         *roll_no = *S.roll_no;
//     }

//     void get(){
//         cout << "name : " << name << endl;
//         cout << "cgpa : " << cgpa << endl;
//         cout << "Roll Num : " << *roll_no << endl;
//     }
// };

// Deep Copy

// class Student{
//     public:
//     string name;
//     double cgpa;
//     int *roll_no;


//     Student(string name, double cgpa, int roll){
//         this->name = name;
//         this->cgpa = cgpa;
//         roll_no = new int;
//         *roll_no = roll;
//     }

//     ~Student(){
//         cout << "I delete the memory of the object" << endl;
//         delete roll_no;
//     }

//     void get(){
//         cout << "name : " << name << endl;
//         cout << "cgpa : " << cgpa << endl;
//         cout << "Roll Num : " << *roll_no << endl;
//     }
// };

// --------------------- Inheritance --------------------

// class A{
    // public:
    // string name;
    // int age;

    // A(){
    //     cout << "Base Class Constructor" << endl;
    // }

//     A(string name, int age){
//         this-> age = age;
//         this -> name = name;
//     }
// };

// class B : public A{
//     public:
//     int rollNo;

    // B(){
    //     cout << "Derived Class Constructor" << endl;
    // }

//     B(string name, int age, int rollNo) : A(name, age){
//         this -> rollNo = rollNo;
//     }

//     void get(){
//         cout << "name : " << name << endl;
//         cout << "age : " << age << endl;
//         cout << "roll Number : " << rollNo << endl;
//     }
// };

// ----------------------- Polymorphism ------------------------

// 1. Complie time polymorphism
// class polymor{
//     public:
//     int real, img;

//     // Constructor overloading
//     polymor(int r, int i){
//         real = r;
//         img = i;
//     }

//     polymor(){
//         cout << "polymor2" << endl;
//     }

//     // Function Overloading
//     void show(){
//         cout << "Show1" << endl;
//     }

//     void show(int x){
//         cout << "Show2" << endl;
//     }

//     // operator overloading

//     polymor operator+(polymor &c){
//         polymor p;
//         p.real = real + c.real;
//         p.img = img + c.img;

//         // return p;
//         cout << "real : " << p.real << " " << "img : " << p.img << endl;
//     }

// };

// // 2. Runtime Polymorphism
// // Vitrtual function
// class Parent{
// public:
//     virtual void hello(){
//         cout << "Hello from parent class" << endl;
//     }

//     void show(){
//         cout << "parent class" << endl;
//     }

// };

// class Child : public Parent{
// public:
//     void show(){
//         cout << "child class" << endl;
//     }

//     void hello(){
//         cout << "Hello from child class" << endl;
//     }
// };

// static object
class oop{
    public:
    oop(){
        cout << "constructor called" << endl;
    }

    ~oop(){
        cout << "destructor called" << endl;
    }
};

int main(){
    if(true){
        static oop op1;
    }
    
    cout << "End of main function" << endl;
   
    return 0;
}