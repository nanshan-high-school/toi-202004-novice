#include <iostream>
using namespace std;

int main() {
    int R;
    int A;
    cin >> R >> A;

    int ans = 0;
    if (R > A) {
        ans = R - A;
        if (R > ans) {
            cout << ans << "+" << A << "=" << R;
        } else {
            cout << A << "+" << ans << "=" << R;
        }
    } else if (R == A) {
        A -= 3;
        ans = R - A;
        cout << A << "+" << ans << "=" << R;
    } else {
        ans = A - R;
        if (A > ans) {
            cout << ans << "+" << R << "=" << A;
        } else {
            cout << R << "+" << ans << "=" << A;
        }
    }
}
