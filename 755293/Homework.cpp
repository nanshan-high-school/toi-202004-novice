#include <iostream>

using namespace std;

int main() {
    int R, A, S, C;
    
    cin >> R >> A;
    
    if(R==A) {
        A=3;
    }

    S=R-A;

    if(A < S) {
        C=A;
        A=S;
        S=C;
    }
    
    cout << S << "+" << A << "=" << R << endl;
}
