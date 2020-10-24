#include <iostream>
using namespace std;

int main() {
    int ID = 0, num = 0, max1 = -1, flag = 0, max2 = -1 , N = 0;
    cout << "";
    cin >> ID;
    num = ID;

    for ( int i = 0; i < 9; i+=1) {
        N = num % 10;
        if ( N > max1 )
        {
            max1 = N;
            flag = i;
        }
        num = num / 10;
    }
    num = ID;

    for ( int i = 0 ; i < 9 ; i+=1) {
        N = num%10;
        if ( (N > max2) && (i != flag) ) {
            max2 = N;
        }
        num = num / 10;
    }

    int ans = 0;
    ans = ID % 1000;

    if ( (max1 * max1 +max2 *max2) == ans ) {
        cout << "Good Morning!\n";
    } else {
        cout << "SPY!\n";
    }
}
