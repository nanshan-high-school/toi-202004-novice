#include <iostream>
using namespace std;

int main() {
    int num = 0;
    int total = 0;
    int numN = 0, numT = 0;
    
    cin >> numN >> numT;

    num = (numN + numT) / numN;

    //cout << total << "\n" ;
    do {
        num = num / 2;
        total ++;
        //cout << num << "  " << total << "\n";
    } while (num >= 2);

    cout << total << "\n";
    
}
