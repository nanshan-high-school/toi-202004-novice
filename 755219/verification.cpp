#include <iostream>
using namespace std;

int main() {
    int id[9], num, i, j;
    int max[2] = {0, 0};
    cin >> num;
    id[0] = num / 100000000;
    id[1] = (num / 10000000) % 10;
    id[2] = (num / 1000000) % (10 * id[0] + id[1]);
    id[3] = (num / 100000) % (100 * id[0] + 10 * id[1] + id[2]);
    id[4] = (num / 10000) % (1000 * id[0] + 100 * id[1] + 10 * id[2] + id[3]);
    id[5] = (num / 1000) % (10000 * id[0] + 1000 * id[1] + 100 * id[2] + 10 * id[3] + id[4]);
    id[6] = (num / 100) % (100000 * id[0] + 10000 * id[1] + 1000 * id[2] + 100 * id[3] + 10 * id[4] + id[5]);
    id[7] = (num / 10) % (1000000 * id[0] + 100000 * id[1] + 10000 * id[2] + 1000 * id[3] + 100 * id[4] + 10 * id[5] + id[6]);
    id[8] = (num / 1) % (10000000 * id[0] + 1000000 * id[1] + 100000 * id[2] + 10000 * id[3] + 1000 * id[4] + 100 * id[5] + 10 * id[6] + id[7]);
    for (i = 0; i < 9; i++) {
        if (id[i] > max[0]) {
            max[0] = id[i];
        }
    }
    for (i = 0; i < 9; i++) {
        if (id[i] > max[1] && id[i] != max[0]) {
            max[1] = id[i];
        }
    }
    if (max[0] * max[0] + max[1] * max[1] == id[6] * 100 + id[7] * 10 + id[8]) {
        cout << "Good Morning!";
    } else {
        cout << "SPY!";
    }
}
