#include <iostream>
using namespace std;
int main() 
{
    int max_1 = 0, max_2 = 0, max_value;
    int inarray[9] = {0};
    int inData, inData_3 = 0 , inData_k = 1;
    int i;
    cin >> inData;
    for (i = 0; i < 9; i++)
    {
        inarray[i] = inData % 10 ;
        inData = inData / 10;
        if (i < 3)
            {
            inData_3 = inData_3 + inarray[i]  * inData_k;
            inData_k = inData_k*10;
            }
        if (inarray[i] > max_2)
            {
                max_2 = inarray[i];
            }                
        else
            {
                if (inarray[i] > max_1)
                max_1 = inarray[i];
            }
    }
    max_value = (max_2 * max_2 + max_1 * max_1);
    if (max_value == inData_3)
    cout << "Good Morning!" ;
    else
    cout << "SPY!" ;
    cout << "\n";
}
