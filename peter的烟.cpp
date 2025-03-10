/*Peter 有 n 根烟，他每吸完一根烟就把烟蒂保存起来，
k（k>1）个烟蒂可以换一个新的烟，那么 Peter 最终能吸到多少根烟呢？

与某些脑筋急转弯不同的是，Peter 并不能从异次元借到烟蒂，抽完后再还回去。

输入格式
每组测试数据一行包括两个整数 n,k（1<n,k≤10 
8
 ）。

输出格式
对于每组测试数据，输出一行包括一个整数表示最终烟的根数。*/
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	long n,k,n1,n2,sum;
	bool f=true;
	cin >> n>>k;
	sum=n;//记录最初吸的烟的数量 
	while (f){
		n1=n/k;//吸过烟后能直接获得的烟蒂个数 
		n2=n%k;//余下的不能够换得整根烟 剩下的个数 
		
		sum+=n1;//加上第一次换烟蒂得到的烟 
		
		if(n1+n2<k){//n1个烟蒂加上上一次剩下的是否能换得整根烟 ，若不能再换，跳出循环 
			f=false;
			break;
		}
		
		n=n1+n2;
	}
	cout << sum;
	return 0;
 } 
