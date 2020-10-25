#include <iostream>
using namespace std;
int main() {
    int big,small;
    int divid;
    int count = 0;
    cout << "請分別輸入大小史萊姆的數量(依順序輸入，並在兩數字間加入空格)\n";
    cin >> big; 
    cin >> small;
    small = small / big;
    big = big / big;
    divid = (small + big);
    while(divid != 1){
        divid = divid / 2;
        count++;
    }
    cout << count;
}
