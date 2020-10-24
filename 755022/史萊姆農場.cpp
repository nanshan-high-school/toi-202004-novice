#include <iostream>
using namespace std;
int main() {
    int king, slime, day = 0, count = 0;

    cin >> king;
    cin >> slime;

    int scaleS = slime / king;

    for(int i = scaleS ; i > 0; i = (i - 1) / 2) {
        day++;
    }
    
    cout << day;
}
