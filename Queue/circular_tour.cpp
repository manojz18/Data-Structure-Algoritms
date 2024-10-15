#include<iostream>

using namespace std;

class Solution{
public:
    int tour(petrolPump p[], int n){
        int start = 0;
        int deficit = 0;
        int balance = 0;

        for(int i = 0; i < n; i++){
            balance += p[i].petrol - p[i].distance;
            if(balance < 0){
                start = i + 1;
                deficit += balance;
                balance = 0;
            }
        }
        if(balance + deficit >= 0)
            return start;
        else
            return -1;
    }
};

int main(){
    
    return 0;
}