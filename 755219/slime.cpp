#include <iostream>
using namespace std;

int main() {
    int n, t, day = 0, i, j;
    cin >> n >> t;
    while (t > 0) {
        t = t - n;
        t = t / 2;
        day++;
    }
    cout << day;
}
