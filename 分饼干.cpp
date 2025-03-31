/*老师有 N 块饼干，要分给 k 名小朋友。

每名小朋友至少拿到一块饼干，老师想让每名小朋友拿到的饼干数量都不一样多，请问老师能否实现这个目标。

输入格式
本题单个测试点内有多组测试数据。
输入共 T+1 行。
输入第一行为一个整数 T，代表测试数据组数。
接下来 T 行，每行两个整数，分别为 N,k。

输出格式
输出共 T 行，依次对应 T 组测试数据。如果该组测试数据
可以实现，输出 Yes。
无法实现，输出 No。*/
#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int t;
	long long n,k;
	cin>>t; 
	for(int i=0;i<t;i++){
		cin>>n>>k;
		if((1+k)*k/2<=n){		//多出来的都给最后一个小朋友 
			cout<<"Yes"<<endl;
		}
		else cout<<"No"<<endl;
	}
	return 0;
}
