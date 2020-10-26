#include <iostream>
using namespace std;
int main() {
    int inData_slimekingnum, inData_smallslimenum, day, slimeborn, smallslimenum = 0, totalsmallslimeborn = 0;
    cin >> inData_slimekingnum >> inData_smallslimenum;
    slimeborn = inData_slimekingnum;
    for (day = 0; smallslimenum != inData_smallslimenum; day++)
    {
        smallslimenum = smallslimenum + slimeborn;
        slimeborn = inData_slimekingnum + smallslimenum;
    }
    cout << day;
}