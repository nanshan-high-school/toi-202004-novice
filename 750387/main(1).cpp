#include <iostream>
using namespace std;

int main() {
    int R, A =0;
    cin >> R >> A;

    int num =0;
    if (R == A) {
        A -=3;
    }

    num = R - A;

    if (A > num) {
        cout << num << "+" << A << "=" << R;
    } else {
        cout << A << "+" << num << "=" << R;
    }
}
