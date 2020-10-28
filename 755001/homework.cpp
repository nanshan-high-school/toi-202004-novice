#include <iostream>
using namespace std;

int main() {
    int answer, input1, input2;
    cin >> input1 >> input2;
    if (input1 == input2) {
        cout << input1 - 3 << "+" << input2 - input1 + 3 <<  "=" << input2;
    }else {
        cout << input2 << "+"  << input1 - input2 << "=" << input1;
    }
}
