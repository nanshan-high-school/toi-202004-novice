#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    char num[9];
    for (int i = 0; i < 9; i++) {
        cin >> num[i];
    }

    int check = (num[6] - '0') * 100 + (num[7] - '0') * 10 + (num[8] - '0');

    sort(num,num+9);
    
    int max1 = num[7] - '0';
    int max2 = num[8] - '0';

    if ((max1 * max1) + (max2 * max2) == check) {
        cout << "Good Morning!";
    } else {
        cout << "SPY!";
    }
}
