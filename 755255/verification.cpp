#include <iostream>
using namespace std;
int main() {
    int input;
    int check = input;
    int check_num[9] = {100000000,10000000,1000000,100000,10000,1000,100,10,1};
    int max1 = 0;
    int max2 = 0;
    int check2;

    cout << "請輸入身分證碼";
    cin >> input;
    check2 = input % 1000;
    for(int i = 0;i < 9;i++){
        check = input / check_num[i];
        check = check % 10;
        if(check >= max1){
            max2 = max1;
            max1 = check;
        }else if(check >= max2 && check <= max1){
            max2 = check;
        }
    }
    
    if(max1 * max1 + max2 * max2 == check2){
        cout << "Good Morning!";
    }else{
        cout << "SPY!";
    }
}
