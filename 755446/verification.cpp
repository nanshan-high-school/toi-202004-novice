//完成時間:10/22 22:38
#include <iostream>
using namespace std;

int main() {
    int num = 0;
    int code[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int max1, max2, check = 0;

    cin >> num;                               //EX : 144553061 
    code[0] = num % 10;                       // 1                   
    code[1] = (num % 100) / 10;               // 61/10==6
    code[2] = (num % 1000) / 100;             // 061/100==0  
    code[3] = (num % 10000) / 1000;           // 3061/1000==3     
    code[4] = (num % 100000) / 10000;         // 53061/10000==5       
    code[5] = (num % 1000000) / 100000;       // 553061/100000==5      
    code[6] = (num % 10000000) / 1000000;     // 4553061/1000000==4       
    code[7] = (num % 100000000) / 10000000;   // 44553061/10000000==4  
    code[8] = (num % 1000000000) / 100000000; // 144553061/100000000==1

    // for(int i = 0; i < 9; i++){
    //     cout << code[i] << "\n";
    // }

    for(int i = 0; i< 9; i++) {                               		
	    if(code[i] > max1) {
	        max2 = max1;
	        max1 = code[i];
	    }else if(code[i] > max2) {   
		    max2 = code[i];              
	    }
	}

    check = code[1] * 10 + code[0];
    if ( (max1 * max1 + max2 * max2) == check) {
        cout << "Good Morning!\n" ;
    } else {
        cout << "SPY!\n" ;
    }
}
