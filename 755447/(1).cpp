#include <iostream>
using namespace std;
int main() {
    int R = 2, A =3 , B, X;

    while (A >= R && (3 >= R || R > 2147483648)){
        cout << "" << "";
        cin >> R >> A;
    }

    if (R != A){
        B = R - A;
    } else {
        A -= 3;
        B = R - A;
    }

    if (A > B){
        X = B;
        B = A;
        A = X;
    }

    cout << A << "+" << B << "=" << R;
}
