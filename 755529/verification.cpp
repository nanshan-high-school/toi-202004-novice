#include <iostream>
using namespace std;

int main() {
    int id;
    cin >> id;
    int id_leave = id;
    int id_num[9];
    for (int i = 8; i >= 0; i--) {
        id_num[i] = id % 10;
        id /= 10;  
    }

    int num1 = id_num[0];
    int num2 = id_num[1];
    for (int i = 0; i < 9; i++){
        if (num1 < id_num[i]) {
            num1 = id_num[i];
        } else if (num2 < id_num[i]) {
            num2 = id_num[i];
        }
    }
    
    int ans;
    ans = num1 * num1 + num2 * num2;
    if (ans == id_leave % 1000) {
        cout << "Good Morning!";
    } else {
        cout << "SPY!";
    }
}

