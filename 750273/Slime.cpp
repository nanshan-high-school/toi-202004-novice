#include <iostream>
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;

    if (N != 1) { 
        T /= N;
        N /= N;
    }

    int day = 0;
    int amount = T + N;
    
    while (amount != 1) {
        amount /= 2;
        day++;
    }
    
    cout << day;
}
