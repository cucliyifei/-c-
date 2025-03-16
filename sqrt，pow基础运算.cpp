#include<iostream>
#include <cstdio>
#include<cmath>
using namespace std;//用斐波那契数列a[n+2]=a[n+1]+a[n] 
int main()
{
	double f[50];
	int n,i;
	f[0]=0;
	f[1]=1;
	f[2]=1;
	cin>>n;
	for(i=3;i<=n;i++){
		f[i]=f[i-1]+f[i-2];
	}
	printf("%.2lf",f[n]);
	return 0;
}
