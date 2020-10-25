#include <iostream>
using namespace std;
int main() {
    int sum,num;
    int num_1;
    cout << "請輸入總和與被加數(加數)(請依順序輸入)\n";
    cin >> sum;
    cin >> num;
    if(sum > num){
        num_1 = sum - num;
        if(num_1 >= num){
            cout << num;
            cout << "+";
            cout << num_1;
            cout << "=";
            cout << sum;
        }else{
            cout << num_1;
            cout << "+";
            cout << num;
            cout << "=";
            cout << sum;
        }
    }else{
        num_1 = sum - 3;
        cout << num_1;
        cout << "+3";
        cout << "=";
        cout << sum;
    }
}
