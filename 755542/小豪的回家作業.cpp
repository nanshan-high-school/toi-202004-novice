#include <iostream>
using namespace std;

int main() {
    int R = 0, A = 0, num = 0;

    cin >> R >> A;
    if (R == A) {
        A -= 3;
    }
    num = R - A;
    
    if (num > A) {
        cout << A << "+" << num << "=" << R << "\n";
    } else {
        cout << num << "+" << A << "=" << R << "\n";
    }
}
