#include "iostream"
#include "cmath"
using namespace std;


int main(int argc, char const *argv[]) {
  int inputnum[9],max,max2,num1,num2;
    cin >> inputnum[i]
  for (size_t j = 0; j <= 9; j++) {
    if (inputnum[j]> max) {
      max = inputnum[j];
    }
  }
  for (size_t l = 0; l <= 9; l++) {
    if (inputnum[l]>=max2 || inputnum[l]<= max) {
      max2 = inputnum[l];
    }
  }
  num1 = max*max + max2*max2;
  num2 = inputnum[6]+inputnum[7]+inputnum[8];
  if (num1 == num2) {
    cout << "Good Morning!";
  }else {
    cout << "SPY!";
  }
}
