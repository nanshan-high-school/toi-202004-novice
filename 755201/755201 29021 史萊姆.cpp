#include <iostream>
using namespace std;

int main() {
    int slimeking, slime, day = 0;
    cin >> slimeking >> slime;
    while (slime > 0) {
        slime -= slimeking;
        slime /= 2;
        day++;
    }
    cout << day;
}
