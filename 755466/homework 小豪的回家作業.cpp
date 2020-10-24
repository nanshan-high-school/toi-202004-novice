#include <iostream>
using namespace std;
// A+B=R   A!=B
// A-3+B=R A==B
int main() {
    int R = -1, A = 0, B, n;

    while ( A > R && (R < 3 || R > 2147483648 ) ) {
        cout << "" << "";
        cin >> R >> A;
    } 

    if (R != A) {
        B = R - A;
    } else {
        A -= 3;
        B = R - A;
    }

    // 加數與被加數中較小的優先寫在算式的前面
    if (B < A) {
        n = B;
        B = A;
        A = n;
    }

    cout << A << "+" << B << "=" << R << "\n";
}
