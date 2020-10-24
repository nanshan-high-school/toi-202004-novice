#include <iostream>
using namespace std;

int main() {
    int N = 0, T = 0, day = 0, total = 0;
    cin >> N >> T;
    total = N + T;
    while (N < total) {
        N *= 2;
        day++;
    }
    cout <<  day;
}
