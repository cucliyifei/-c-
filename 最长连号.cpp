/*输入长度为 n 的一个正整数序列，要求输出序列中最长连号的长度。
连号指在序列中，从小到大的连续自然数。
输入格式
第一行，一个整数 n。

第二行，n 个整数 a 
输出格式
一个数，最长连号的个数。*/
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n,max=0,sum=0;
	int a[10010];
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	for (int i=0;i<n;i++){
		if(a[i+1]==a[i]+1){
			sum++;
		}
		else sum=0;
		if(sum>max){
			max=sum;
		}
	}
	cout<<max+1;
	return 0;
}
