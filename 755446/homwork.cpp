#include <iostream>
using namespace std;

int main() {
    int R, A, num= 0;

    cin >> R >> A;

    if(R == A) {
        A -= 3;
    }

    num = R - A;

    if(A > num) {
        cout << num << "+" << A << "=" << R << "\n";        
    } else {
        cout << A << "+" << num << "=" << R << "\n";
    }

}
