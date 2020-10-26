#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main() {
  int number[9],a,b,c,z;
  cout<<"你的身分證字號"<<endl;
  cin>>z;
  number[0]=z/100000000;
  number[1]=z/10000000-number[0]*10;
  number[2]=z/1000000-number[0]*100-number[1]*10;
  number[3]=z/100000-number[0]*1000-number[1]*100-number[2]*10;
  number[4]=z/10000-number[0]*10000-number[1]*1000-number[2]*100-number[3]*10;
  number[5]=z/1000-number[0]*100000-number[1]*10000-number[2]*1000-number[3]*100-number[4]*10;
  number[6]=z/100-number[0]*1000000-number[1]*100000-number[2]*10000-number[3]*1000-number[4]*100-number[5]*10;
  number[7]=z/10-number[0]*10000000-number[1]*1000000-number[2]*100000-number[3]*10000-number[4]*1000-number[5]*100-number[6]*10;
  number[8]=z-number[0]*100000000-number[1]*10000000-number[2]*1000000-number[3]*100000-number[4]*10000-number[5]*1000-number[6]*100-number[7]*10;
  a=number[6];
  b=number[7];
  c=number[8];
  sort (number, number + 9);
  if(0 == a*100+b*10+c-(number[7]*number[7]+number[8]*number[8]))
  {
    cout<<"Good Morning!";
  }
  else
  cout<<"SPY!";
  return 0;
}
    