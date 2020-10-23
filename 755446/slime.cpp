#include <iostream>
using namespace std;

int main() {
    int N, T, num = 0;

    cin >> N >> T;

    while(N <= T) {
        N *= 2;
        num ++;
    }
    cout << num; 
}
