#include<bits/stdc++.h>

using namespace std;

int substringCount(int n, int m, vector <int> a, int s){
    vector <int> b(n*m);

    // copying the values of vector a in b

    for(int i = 0; i < b.size(); i++){
        b[i] = a[i % n];
    }

    // now lets check the substring which are less than or equal to s
    int count = 0;
    // start point of the sliding window
    for(int start = 0; start < b.size(); start++){
        int currentSum = 0;
        for(int end = start; end < b.size(); end++){
            currentSum += b[end];

            if(currentSum == s){ // means the sum of substring is less than or equal to s
                count++;
            }
            else{
                break; // voilating if condition so me the start to next element
            }
        }
    }
    return count;
}

int main(){

    vector <int> a = {3, 7, 8, 5, 9, 2};
    cout << substringCount(6, 2, a, 12) << endl;
    
    return 0;
}