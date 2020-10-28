#include <iostream>
using namespace std;
int main() {
    int xam1 = 0, xam2 = 0, math = 0, code, codelist[9] = {0,0,0,0,0,0,0,0,0};

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

    for(int a = 0 ; a < 9 ; a++) {
        if(codelist[a] > xam1) {
            xam1 = codelist[a];
            math = a;
        }
    }

    for(int b = 0 ; b < 9 ; b++) {
        if((codelist[b] > xam2 ) && (codelist[b] != codelist[math])) {
            xam2 = codelist[b];
        }
    }

    if(codelist[6] * 100 + codelist[7] * 10 + codelist[8] == xam1 * xam1 + xam2 * xam2) {
        cout << "Good Morning";
    }
    else {
        cout << "SPY";
    }
}
