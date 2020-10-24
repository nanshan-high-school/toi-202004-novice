#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cin >> num1;
    cin >> num2;
    int minus = num1 - num2;    
    if (num2 >= minus & minus > 0) {
        cout << minus << "+" << num2 << "=" << num1;
    }
    if (num2 < minus & minus > 0) {
        cout << num2 << "+" << minus << "=" << num1;
    }
    if (3 > num1-3 & minus == 0) {
        cout << num1-3 << "+" << 3 << "=" << num1;
    }
    if (3 <= num1-3 & minus == 0) {
        cout << 3 << "+" << num1-3 << "=" << num1;
    }    
}
