#include<iostream>

using namespace std;


long long int binarySearch(int n){
    int s = 0;
    int e = n;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;
    
    while(s <= e){
        long long int square = mid*mid;
        if(square == n){
            return mid;
        }
        if(square > n){
            e = mid - 1;
        }
        else if(square < n){
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

double morePrecise(int n, int precisionCount, int sol){
    double factor = 1;
    double ans = sol;
    for(int i = 0; i < precisionCount; i++){
        factor = factor/10;
        for(double j = ans; j*j < n; j = j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n = 37;
    int ans = binarySearch(n);
    cout << "More Precise Sqrt is: "<< morePrecise(n, 4, ans);
    
    return 0;
}

