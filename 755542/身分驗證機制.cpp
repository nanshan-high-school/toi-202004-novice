#include <iostream>
using namespace std;

int main() {
    int ID = 0, ID_copy = 0, ID_num[9], max1 = -1, max2 = -1, check_code = 0, check_ID = 0;
    
    cin >> ID;
    ID_copy = ID;
    for (int i = 0; i < 9; i++) {
        ID_num[i] = ID % 10;
        if (ID_num[i] > max1) {
            max1 = ID_num[i];
            check_code = i;
        }
        ID /= 10;
    }
    ID = ID_copy;
    
    for (int i = 0; i < 9; i++) {
        ID_num[i] = ID % 10;
        if (ID_num[i] > max2 && check_code != i) {
            max2 = ID_num[i];
        }
        ID /= 10;
    }
    ID = ID_copy;

    check_ID = ID % 1000;
    if (check_ID == max1 * max1 + max2 * max2) {
      cout << "Good Morning!";
    } else {
          cout << "SPY!";
    }
}
