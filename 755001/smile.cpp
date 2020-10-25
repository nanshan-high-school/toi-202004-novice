#include <iostream>
 using namespace std;

int main() {
    int N = 0, T = 0, day = 0, total = 0;

    cin >>  N >> T;
    total = N + T;
    if (N != 1) {
        T = T / N;
        N = N / N;
    }
    while(total != 1) {
        total = total / 2;
        day++;
    }
    cout << day;
}
