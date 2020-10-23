#include <iostream>
using namespace std;
int main() {
    int num, num1, num2 = 0, num3 = 0;
    cin >> num;
    cin >> num1;
    num3 = num + num1;
    do 
    {
        num = num *2;
        num2++;
    } while (num < num3);
    cout << num2;
}
