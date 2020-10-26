#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main() {
	int r=0,a=0;
	scanf("%d %d",&r,&a);
	if(r==a)
	{
		a-=3;
	}
	int b =r-a; 
	if(b>=a)
	{
    cout<<a<<"+"<<b<<"="<<r;
	}
	else
	{
    cout<<b<<"+"<<a<<"="<<r;
	}
}