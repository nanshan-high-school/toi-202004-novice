#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main (){
  int a,b,c,d,f=0;
  cout<<"比例"<<endl;
  scanf("%d %d",&a,&b);
  c=b/a;
  d=c+1;
  while(d>=2)
  {
    d=d/2;
    f=f+1;
  }
  cout<<f;
}