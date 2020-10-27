#include <iostream>
using namespace std;

int main() {
    int InputNum = 0;
    int num[9];

    cin >> InputNum;

    num[0] = InputNum / 100000000;
    num[1] = (InputNum % 100000000) / 10000000;
    num[2] = (InputNum % 10000000) / 1000000;
    num[3] = (InputNum % 1000000) / 100000;
    num[4] = (InputNum % 100000) / 10000;
    num[5] = (InputNum % 10000) / 1000;
    num[6] = (InputNum % 1000) / 100;
    num[7] = (InputNum % 100) / 10;
    num[8] = (InputNum % 10) / 1;
 
    int tmp = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (num[j] > num[i]) {
                tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
        //cout << num[i] << "  " ;
    }
    //
    //
    int NewNum1 = num[0];
    int NewNum2 = num[1];
    int NewNum3 = InputNum % 1000;
    int total = 0;

    total = (NewNum1 * NewNum1) + (NewNum2 * NewNum2);

    if (total == NewNum3) {
        cout << "Good Morning!" << "\n";
    } else {
        cout << "SPY!" << "\n";
    }
}
