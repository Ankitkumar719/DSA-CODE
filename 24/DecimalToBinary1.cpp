#include <iostream>
using namespace std;

int decimalToBinary(int n) {
    int binaryno = 0, i = 1; 
    while (n > 0) {
        int bit = n % 2;
        cout<<bit<<endl;
        binaryno = binaryno + bit * i; // 11 = 1 + {(1) * (1 * 10)}
        n = n / 2;
        i = i * 10;
    }
    return binaryno;
}

int main() {
    int n;
    cout << "Enter any number: ";
    cin >> n;
    int binary = decimalToBinary(n);
    cout << "Binary representation: " << binary << endl;
    return 0;
}
