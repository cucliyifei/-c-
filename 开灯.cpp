/*首先所有的灯都是关的（注意是关！），编号为 1 的人走过来，把是 1 的倍数的灯全部打开，
编号为 2 的人把是 2 的倍数的灯全部关上，
编号为 3 的人又把是 3 的倍数的灯开的关上，关的开起来……直到第 N 个人为止。

给定 N，求 N 轮之后，还有哪几盏是开着的。
输入格式
一个数 N，表示灯的个数和操作的轮数。
输出格式
若干数，表示开着的电灯编号。*/
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
/*int main()			//这样写会超时 
{
	long long n,i;
	cin>>n;
	for(i=1;i<=n;i++){
		for(double j=1;j<=i;j++){
			if(i/j==j){
			
			cout<<i<<' ';
			}
		}
	} 

	return 0;
}*/
int main(){
	long long n,i;
	cin>>n;
	for(i=1;i<=sqrt(n);i++){	//其实是找小于n的完全平方数，只有完全平方数的因子是奇数 
		cout<<i*i<<' ';			//奇数的灯是开着的 
	}
	return 0;
}
