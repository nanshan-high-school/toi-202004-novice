#include <iostream>
using namespace std;

int main() {
    int r, a, i;
    cin >> r >> a;
    if (r == a) {
        a = a - 3;
        i = r - a;
        cout << a << "+" << i << "=" << r;
    } else {
        i = r - a;
        cout << a << "+" << i << "=" << r;
    }
}
