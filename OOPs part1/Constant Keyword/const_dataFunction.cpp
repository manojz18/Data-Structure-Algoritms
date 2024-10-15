#include<iostream>

using namespace std;

class Members{
    public: 
        const float pi = 3.1415;

        void areaCircle(int val) const{
            cout << pi*val*val;
        }
};

int main(){
    Members m1;
    m1.areaCircle(10);
    return 0;
}