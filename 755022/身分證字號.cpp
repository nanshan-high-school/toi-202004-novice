#include <iostream>
using namespace std;
int main() {
    int max1 = 0, max2 = 0, num = 0, code, codelist[9] = {0,0,0,0,0,0,0,0,0};

    cin >> code;

    codelist[0] = ((code - (code % 10000000)) / 100000000) % 10; 
    codelist[1] = ((code - (code % 1000000)) / 10000000) % 10;
    codelist[2] = ((code - (code % 100000)) / 1000000) % 10;
    codelist[3] = ((code - (code % 10000)) / 100000) % 10;
    codelist[4] = ((code - (code % 1000)) / 10000) % 10;
    codelist[5] = ((code - (code % 100)) / 1000) % 10;
    codelist[6] = ((code - (code % 10)) / 100) % 10;
    codelist[7] = ((code - (code % 1)) / 10) % 10;
    codelist[8] = code % 10;

    for(int i = 0 ; i < 9 ; i++) {
        if(codelist[i] > max1) {
            max1 = codelist[i];
            num = i;
        }
    }

    for(int j = 0 ; j < 9 ; j++) {
        if((codelist[j] > max2 ) && (codelist[j] != codelist[num])) {
            max2 = codelist[j];
        }
    }

    if(codelist[6] * 100 + codelist[7] * 10 + codelist[8] == max1 * max1 + max2 * max2) {
        cout << "Good Morning";
    }
    else {
        cout << "SPY";
    }
}
