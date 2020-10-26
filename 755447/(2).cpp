#include <iostream>
using namespace std;
int main() {
    int N, T, num = 0;
    cout << "" << "";
    cin >> N >> T;

    while(N <= T && (1 <= N) &&(N <= 10) && (0 <= T) && (T <= 40950)) {
        N *= 2;
        num += 1;
    }

    cout << num; 
}
