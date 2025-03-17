//数字反转
//输入123，输出321；输入130，输出31 
#include<iostream>
#include <cstdio>
using namespace std;
int main ()
{
	int n,sum=0;
	cin>>n;
	while(n){
		sum=sum*10+n%10;
		n/=10;
	} 
	
	cout<<sum;
	return 0;
}
