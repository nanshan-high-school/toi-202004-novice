#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N, T, sum, i, c;
    
    cin >> N >> T;
    
    c=sqrt(T);

    for(i=c ; i>1 ; i--) {
        if(T%i==0 && N%i==0) {
            T/=i;
            N/=i;
            break;
        }
    }

    sum=log2(N+T);

    cout << sum << endl;
}
