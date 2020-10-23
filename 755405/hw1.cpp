#include <iostream>
using namespace std;
int main() {
    int num, num1, num2;
    cin >> num;
    cin >> num1;
    if (num1 == num) {
        num1 = num1 - 3;
        num2 = num - num1;
    }
    else {
        num2 = num - num1;
    }
    if (num1 > num2) {
        cout << num1 << "-" << num2 << "=" << num;
    }
    else if (num1 < num2) {
        cout << num2 << "+" << num1 << "=" << num;
    }
    else {
        cout << num1 << "+" << num2 << "=" << num;
    }
}
