#include <iostream>
using namespace std;

int main() {
    int total;
    int plus;
    int answer;

    do {
        cin >> total;
        cin >> plus;
    } while (total < 3 && total >= 2147483648 && plus > total);

    if (plus >= total) {
        answer = total - (plus - 3);
        if (answer >= plus - 3) {
            cout << plus - 3 << "+" << answer << "=" << total;
        } else {
            cout << answer << "+" << plus - 3 << "=" << total;
        }
    } else {
        answer = total - plus;
        if (answer >= plus) {
            cout << plus << "+" << answer << "=" << total;
        } else {
            cout << answer << "+" << plus << "=" << total;
        }
    }
}
