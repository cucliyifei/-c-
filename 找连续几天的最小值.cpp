/*输入格式
第一行有两个用空格隔开的整数，分别代表 n 和 m。
第 2 到第 (n+1) 行，每行一个整数，第 (i+1) 行的整数 ai,代表第 i 件事的刺痛值 ai.
输出格式
输出一行一个整数，表示连续 m 个刺痛值的和的最小值是多少。
*/
#include<iostream>
#include <cstdio>
using namespace std;
int main ()
{
	int n,m,c=0,min=100000 ,arr[3000];//先把min初始化为一个较大的数 
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-m+1;i++){	//注意i最大的取值 
		for(int j=0;j<m;j++){
			c+=arr[i+j];
			
		}
		
	if(c<min){
		min=c;	
		}
		c=0;//不能放在if里面，否则c不会在每次循环后被重置 
	}
	cout<<min;
	return 0;
}
