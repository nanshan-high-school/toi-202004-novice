#include <iostream>
using namespace std;

int main() {
    int num, max_1 = 0, max_2 = 0;
    do{
        //cout << "請輸入身分證代號";
        cin >> num;
    } while (num < 0 || num > 999999999);
    
    int a = num / 100000000;
    int b = num / 10000000 - a * 10;
    int c = num / 1000000 - a * 100 - b * 10;
    int d = num / 100000 - a * 1000 - b * 100 - c * 10;
    int e = num / 10000 - a * 10000 - b * 1000 - c * 100 - d * 10;
    int f = num / 1000 - a * 100000 - b * 10000 - c * 1000 - d * 100 - e * 10;
    int g = num / 100 - a * 1000000 - b * 100000 - c * 10000 - d * 1000 - e * 100 - f * 10;
    int h = num / 10 - a * 10000000 - b * 1000000 - c * 100000 - d * 10000 - e * 1000 - f * 100 - g * 10;
    int i = num / 1 - a * 100000000 - b * 10000000 - c * 1000000 - d * 100000 - e * 10000 - f * 1000 - g * 100 - h * 10;


    if (a >= b && a >= c && a >= d && a >= e && a >= f && a >= g && a >= h && a >= i) {
        max_1 = a;
        if (b >= c && b >= d && b >= e && b >= f && b >= g && b >= h && b >= i) {
            max_2 = b;
        } else if (c >= b && c >= d && c >= e && c >= f && c >= g && c >= h && c >= i) {
            max_2 = c;
        } else if (d >= b && d >= c && d >= e && d >= f && d >= g && d >= h && d >= i) {
            max_2 = d;
        } else if (e >= b && e >= c && e >= d && e >= f && e >= g && e >= h && e >= i) {
            max_2 = e;
        } else if (f >= b && f >= c && f >= d && f >= e && f >= g && f >= h && f >= i) {
            max_2 = f;
        } else if (g >= b && g >= c && g >= d && g >= e && g >= f && g >= h && g >= i) {
            max_2 = g;
        } else if (h >= b && h >= c && h >= d && h >= e && h >= f && h >= g && h >= i) {
            max_2 = h;
        } else {
            max_2 = i;
        }
    } else if (b >= a && b >= c && b >= d && b >= e && b >= f && b >= g && b >= h && b >= i) {
        max_1 = b;
        if (a >= c && a >= d && a >= e && a >= f && a >= g && a >= h && a >= i) {
            max_2 = a;
        } else if (c >= a && c >= d && c >= e && c >= f && c >= g && c >= h && c >= i) {
            max_2 = c;
        } else if (d >= a && d >= c && d >= e && d >= f && d >= g && d >= h && d >= i) {
            max_2 = d;
        } else if (e >= a && e >= c && e >= d && e >= f && e >= g && e >= h && e >= i) {
            max_2 = e;
        } else if (f >= a && f >= c && f >= d && f >= e && f >= g && f >= h && f >= i) {
            max_2 = f;
        } else if (g >= a && g >= c && g >= d && g >= e && g >= f && g >= h && g >= i) {
            max_2 = g;
        } else if (h >= a && h >= c && h >= d && h >= e && h >= f && h >= g && h >= i) {
            max_2 = h;
        } else {
            max_2 = i;
        }
    } else if (c >= a && c >= b && c >= d && c >= e && c >= f && c >= g && c >= h && c >= i) {
        max_1 = c;
        if (a >= b && a >= d && a >= e && a >= f && a >= g && a >= h && a >= i) {
            max_2 = a;
        } else if (b >= a && b >= d && b >= e && b >= f && b >= g && b >= h && b >= i) {
            max_2 = b;
        } else if (d >= a && d >= b && d >= e && d >= f && d >= g && d >= h && d >= i) {
            max_2 = d;
        } else if (e >= a && e >= b && e >= d && e >= f && e >= g && e >= h && e >= i) {
            max_2 = e;
        } else if (f >= a && f >= b && f >= d && f >= e && f >= g && f >= h && f >= i) {
            max_2 = f;
        } else if (g >= a && g >= b && g >= d && g >= e && g >= f && g >= h && g >= i) {
            max_2 = g;
        } else if (h >= a && h >= b && h >= d && h >= e && h >= f && h >= g && h >= i) {
            max_2 = h;
        } else {
            max_2 = i;
        }
    } else if (d >= a && d >= b && d >= c && d >= e && d >= f && d >= g && d >= h && d >= i) {
        max_1 = d;
        if (a >= b && a >= c && a >= e && a >= f && a >= g && a >= h && a >= i) {
            max_2 = a;
        } else if (b >= a && b >= c && b >= e && b >= f && b >= g && b >= h && b >= i) {
            max_2 = b;
        } else if (c >= a && c >= b && c >= e && c >= f && c >= g && c >= h && c >= i) {
            max_2 = c;
        } else if (e >= a && e >= b && e >= c && e >= f && e >= g && e >= h && e >= i) {
            max_2 = e;
        } else if (f >= a && f >= b && f >= c && f >= e && f >= g && f >= h && f >= i) {
            max_2 = f;
        } else if (g >= a && g >= b && g >= c && g >= e && g >= f && g >= h && g >= i) {
            max_2 = g;
        } else if (h >= a && h >= b && h >= c && h >= e && h >= f && h >= g && h >= i) {
            max_2 = h;
        } else {
            max_2 = i;
        }
    } else if (e >= a && e >= b && e >= c && e >= d && e >= f && e >= g && e >= h && e >= i) {
        max_1 = e;
        if (a >= b && a >= c && a >= d && a >= f && a >= g && a >= h && a >= i) {
            max_2 = a;
        } else if (b >= a && b >= c && b >= d && b >= f && b >= g && b >= h && b >= i) {
            max_2 = b;
        } else if (c >= a && c >= b && c >= d && c >= f && c >= g && c >= h && c >= i) {
            max_2 = c;
        } else if (d >= a && d >= b && d >= c && d >= f && d >= g && d >= h && d >= i) {
            max_2 = d;
        } else if (f >= a && f >= b && f >= c && f >= d && f >= g && f >= h && f >= i) {
            max_2 = f;
        } else if (g >= a && g >= b && g >= c && g >= d && g >= f && g >= h && g >= i) {
            max_2 = g;
        } else if (h >= a && h >= b && h >= c && h >= d && h >= f && h >= g && h >= i) {
            max_2 = h;
        } else {
            max_2 = i;
        }
    } else if (f >= a && f >= b && f >= c && f >= d && f >= e && f >= g && f >= h && f >= i) {
        max_1 = f;
        if (a >= b && a >= c && a >= d && a >= e && a >= g && a >= h && a >= i) {
            max_2 = a;
        } else if (b >= a && b >= c && b >= d && b >= e && b >= g && b >= h && b >= i) {
            max_2 = b;
        } else if (c >= a && c >= b && c >= d && c >= e && c >= g && c >= h && c >= i) {
            max_2 = c;
        } else if (d >= a && d >= b && d >= c && d >= e && d >= g && d >= h && d >= i) {
            max_2 = d;
        } else if (e >= a && e >= b && e >= c && e >= d && e >= g && e >= h && e >= i) {
            max_2 = e;
        } else if (g >= a && g >= b && g >= c && g >= d && g >= e && g >= h && g >= i) {
            max_2 = g;
        } else if (h >= a && h >= b && h >= c && h >= d && h >= e && h >= g && h >= i) {
            max_2 = h;
        } else {
            max_2 = i;
        }
    } else if (g >= a && g >= b && g >= c && g >= d && g >= e && g >= f && g >= h && g >= i) {
        max_1 = g;
        if (a >= b && a >= c && a >= d && a >= e && a >= f && a >= h && a >= i) {
            max_2 = a;
        } else if (b >= a && b >= c && b >= d && b >= e && b >= f && b >= h && b >= i) {
            max_2 = b;
        } else if (c >= a && c >= b && c >= d && c >= e && c >= f && c >= h && c >= i) {
            max_2 = c;
        } else if (d >= a && d >= b && d >= c && d >= e && d >= f && d >= h && d >= i) {
            max_2 = d;
        } else if (e >= a && e >= b && e >= c && e >= d && e >= f && e >= h && e >= i) {
            max_2 = e;
        } else if (f >= a && f >= b && f >= c && f >= d && f >= e && f >= h && f >= i) {
            max_2 = f;
        } else if (h >= a && h >= b && h >= c && h >= d && h >= e && h >= f && h >= i) {
            max_2 = h;
        } else {
            max_2 = i;
        }
    } else if (h >= a && h >= b && h >= c && h >= d && h >= e && h >= f && h >= g && h >= i) {
        max_1 = h;
        if (a >= b && a >= c && a >= d && a >= e && a >= f && a >= g && a >= i) {
            max_2 = a;
        } else if (b >= a && b >= c && b >= d && b >= e && b >= f && b >= g && b >= i) {
            max_2 = b;
        } else if (c >= a && c >= b && c >= d && c >= e && c >= f && c >= g && c >= i) {
            max_2 = c;
        } else if (d >= a && d >= b && d >= c && d >= e && d >= f && d >= g && d >= i) {
            max_2 = d;
        } else if (e >= a && e >= b && e >= c && e >= d && e >= f && e >= g && e >= i) {
            max_2 = e;
        } else if (f >= a && f >= b && f >= c && f >= d && f >= e && f >= g && f >= i) {
            max_2 = f;
        } else if (g >= a && g >= b && g >= c && g >= d && g >= e && g >= f && g >= i) {
            max_2 = g;
        } else {
            max_2 = i;
        }
    } else {
        max_1 = i;
        if (a >= b && a >= c && a >= d && a >= e && a >= f && a >= g && a >= h) {
            max_2 = a;
        } else if (b >= a && b >= c && b >= d && b >= e && b >= f && b >= g && b >= h) {
            max_2 = b;
        } else if (c >= a && c >= b && c >= d && c >= e && c >= f && c >= g && c >= h) {
            max_2 = c;
        } else if (d >= a && d >= b && d >= c && d >= e && d >= f && d >= g && d >= h) {
            max_2 = d;
        } else if (e >= a && e >= b && e >= c && e >= d && e >= f && e >= g && e >= h) {
            max_2 = e;
        } else if (f >= a && f >= b && f >= c && f >= d && f >= e && f >= g && f >= h) {
            max_2 = f;
        } else if (g >= a && g >= b && g >= c && g >= d && g >= e && g >= f && g >= h) {
            max_2 = g;
        } else {
            max_2 = h;
        }
    }

    int max = (max_1 * max_1) + (max_2 * max_2);
    int last = (g * 100) + (h * 10) + i;

    if (max == last) {
        cout << "Good Morning!";
    } else {
        cout << "SPY!";
    }
}
