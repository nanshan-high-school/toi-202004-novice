#include <iostream>
using namespace std;
int main() {
    int num1, num2 = 0, num3[9], num4 = 0, num5 = 0, num6, num7;
    cin >> num1;
    for (int i = 8; i >= 0; i--) {
        num3[i] = num1 % 10;
		if (num3[i] > num4) {
			num4 = num3[i];
			num7 = i;
		}
		num1 = num1 / 10;
	}
	for (int j = 1; j < 9; j++) {
		if (num3[j] > num5 && j != num7) {
			num5 = num3[j];
		}
	}
	num2 = num3[6] * 100 + num3[7] * 10 + num3[8];
	num6 = num4 * num4 + num5 * num5;
    if (num2 == num6) {
        cout << "Good Morning";
    }
    else {
        cout << "SPY";
    }
}

