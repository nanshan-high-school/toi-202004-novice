#include <iostream>
using namespace std;

int main() {
    int n, t, day = 0, total;
    cin >> n >> t;
    total = (n + t) / n;

    while (total != 1) {
        total /= 2;
        day++;
    }
    cout << day;
}
