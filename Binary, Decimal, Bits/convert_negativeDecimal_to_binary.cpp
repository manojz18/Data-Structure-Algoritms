#include <iostream>

using namespace std;
// Function to convert negative decimal to binary
string negativeDecimalToBinary(int num) {
    if (num >= 0) {
        std::cerr << "Error: Input should be a negative decimal number.\n";
        return "";
    }
    
    string binary;
    
    // Start from the most significant bit and iterate to the least significant bit
    for (int i = 31; i >= 0; --i) {
        int bit = (num >> i) & 1; // Extract i-th bit from num
        binary += (bit ? '1' : '0');
    }
    
    return binary;
}

int main() {
    int num = -6; // Example negative decimal number
    string binaryRep = negativeDecimalToBinary(num);
    
    if (!binaryRep.empty()) {
        cout << "Binary representation of " << num << " is: " << binaryRep << std::endl;
    }
    
    return 0;
}
