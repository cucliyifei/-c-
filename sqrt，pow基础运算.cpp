#include<iostream>
#include <cstdio>
#include<cmath>
using namespace std;
int main ()
{
	int n;
	double f;
	cin>> n;
	f=(pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n))/sqrt(5);	//pow求几次方
	printf("%.2lf",f);
	return 0;
}
