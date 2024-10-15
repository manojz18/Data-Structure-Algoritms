#include<iostream>

using namespace std;

void reverse(string &str, int i, int j){
    cout << "Process: " << str << endl;
    if(i > j)
        return;

    swap(str[i], str[j]);
    i++;
    j--;
    reverse(str, i, j);
}

int main(){
    string str = "Manoj";

    cout << "Before: " << str << endl;

    reverse(str, 0, str.length()-1);

    cout << "Reverse: " << str << endl;
    
    return 0;
}