#include "iostream"
#include "cmath"
using namespace std;


int main(int argc, char const *argv[]) {
  int inputnum[9],max,max2,num1,num2;
  cin >> inputnum[1];

  for (size_t j = 0; j <= 9; j++) {
    if (inputnum[1][j]> max) {
      max = inputnum[1][j];
    }
  }
  for (size_t l = 0; l <= 9; l++) {
    if (inputnum[1][l]>=max2 || inputnum[1][l]<= max) {
      max2 = inputnum[1][l];
    }
  }
  num1 = max*max + max2*max2;
  num2 = inputnum[1][6]+inputnum[1][7]+inputnum[1][8];
  if (num1 == num2) {
    cout << "Good Morning!";
  }else {
    cout << "SPY!";
  }
}
