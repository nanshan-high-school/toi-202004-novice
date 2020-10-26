#include <iostream>
using namespace std;
int main() {
    int inData_1, inData_2, Datachange, Data_add;
    cin >> inData_1 >> inData_2;
    if (inData_1 < inData_2)
    {
        Datachange = inData_1;
        inData_1 = inData_2;
        inData_2 = Datachange;
    }
    else if (inData_1 == inData_2) 
    {
        inData_2 = inData_2 - 3;
    }
    Data_add = inData_1 - inData_2;
    if (Data_add > inData_2)
    {
        cout << inData_2 << "+" << Data_add << "=" << inData_1;
    }
    else 
    {
        cout << Data_add << "+" << inData_2 << "=" << inData_1;  
    }
}
