#include <iostream>
using namespace std;

int main() {
    int N = 0, T = 0, total = 0, day = 0, T_plus_N;
    
    while ( N < 1 || N > 10  || T < 0 || T > 40950 ) {
        cout << "" << "";
        cin >> N >> T;
    }

    //N=1 T=3
    T_plus_N = T + N;
    for (int i = 0; T_plus_N > total; i++) {
        total = T + i * i; // 0 1 2 4 8 16 32 64 128 
        day += 1;
    }

    cout << day;
}
