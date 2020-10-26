#include <iostream>
using namespace std;

int main() {
    int slimeKing = 0;
    int slimeLittle = 0;
    int slimeLittle_ = 0;
    int slimeAll = 0;
    int day = 0;

    cin >> slimeKing;//4
    cin >> slimeLittle;//32

    do {
        slimeAll = 2 * (slimeKing + slimeLittle_);//32=2*16
        slimeLittle_ = slimeAll - slimeKing;//28=32-4
        day++;
    } while (slimeLittle > slimeLittle_);

    cout << day;
}
