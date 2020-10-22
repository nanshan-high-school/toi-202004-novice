#include <iostream>
using namespace std;

int main() {
    int n;
    int t;
    cin >> n >> t;
    int count = 0;
    while (n <= t) {
        n *= 2;
        count += 1;
    }
cout << count; 
}
