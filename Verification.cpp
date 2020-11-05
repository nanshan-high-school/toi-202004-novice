#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int big=0, mid=0, a[10];
    long num;

    cin >> num;
    a[0]=0;

    int div;

    for(int i=1 ; i<=9 ; i++) {
        div=pow(10,9-i);
        a[i]=num/div;
        num %= div;
    }

    for(int i=1 ; i<=9 ; i++) {
        if(a[i] > big && big <= mid) big=a[i];
        else if(a[i] > mid) mid=a[i];
    }

    big=pow(big,2);
    mid=pow(mid,2);
    int flag=100*a[7]+10*a[8]+a[9];

    if(flag == big + mid) cout << "Good morning!\n";
    else cout << "SPY!\n";
}
