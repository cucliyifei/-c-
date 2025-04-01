/*对于一个五位数  a1a2a3a4a5,可将其拆分为三个子数：
sub1=a1a2a3,sub2=a2a3a4,sub3=a3a4a5
例如，五位数 20207 可以拆分成
sub1=202
sub2=020 (=20)
sub3=207
现在给定一个正整数 K，要求你编程求出 10000 到 30000 之间所有满足下述条件的五位数，条件是这些五位数的三个子数 sub1,sub2,sub3
​都可被 K 整除。*/
#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int k;
	int f=1;
	cin>>k;
	for(int i=10000;i<=30000;i++){
		int i1=i/100,i2=i/10%1000,i3=i%1000;
		if(i1%k==0&&i2%k==0&&i3%k==0){
			cout<<i<<endl;
			f=0;
		}
	}
	if(f){
		cout<<"No"<<endl;
	}
	return 0;
}
