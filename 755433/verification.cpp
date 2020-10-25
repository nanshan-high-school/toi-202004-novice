#include <iostream>
using namespace std;

int main() {
    int id, maxNum1 = -1, maxNum2 = -1, num1, num2, temp, checked, tempNum;
    cin >> id;                    // id = 144523050
    
    tempNum = id;
    for (int i = 0; i < 9; i++) { // 找第一個最大數(maxNum1)
        num1 = tempNum % 10;
        if (num1 > maxNum1) {
            maxNum1 = num1;       // maxNum1 = 5
            temp = i;             // temp = 1
        }
        tempNum /= 10;
    }
    
    tempNum = id;

    for (int i = 0; i < 9; i++) {              // 找第二個最大數(maxNum2)
        num2 = tempNum % 10;
        if ((num2 > maxNum2) && (i != temp)) { // i = 1 時不執行
            maxNum2 = num2;                    // maxNum2 = 5
        }
        tempNum /= 10;
    }
    
    // 確認身分正確
    checked = id % 1000;
    int powSum;
    powSum = maxNum1 * maxNum1 + maxNum2 * maxNum2; // powSum = 50
    if (powSum == checked) {
        cout << "Good Morning!";
    } else {
        cout << "SPY!";
    }
}
