#include <iostream>
using namespace std;

int main() {
    int r, a;
    cin >> r >> a;
    if (r == a) {
        a -= 3;
    }
    
    int temp;
    temp = r - a;
    
    if (temp < a) {
        cout << temp << "+" << a << "=" << r << endl;
    } else {
        cout << a << "+" << temp << "=" << r << endl;
    }
}
