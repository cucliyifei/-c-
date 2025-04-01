/*输入一个偶数 N，验证 4∼N 所有偶数是否符合哥德巴赫猜想：
任一大于 2 的偶数都可写成两个质数之和。如果一个数不止一种分法，则输出第一个加数相比其他分法最小的方案。
例如 10，10=3+7=5+5，则 10=5+5 是错误答案。*/
#include <iostream>
#include <cstdio>
#include <cmath> 
using namespace std;
	int n,s=0;
	bool p(int n){		//判断质数函数（该函数要写在函数体外） 
		for(int i=2;i<=int(sqrt(n));i++)
			if (n%i==0){
				return false;
			}
			return true;
	}
	
int main(){
	int i,j;
	cin>>n;
	for(int i=4;i<=n;i++){		//从4开始到n 
		for(int j=2;j<=i/2;j++){	//1不是质数，不用考虑 
			if(i%2!=0)break;
			else if(p(j)&&p(i-j)){
				cout<<i<<"="<<j<<"+"<<i-j<<endl;
				break;		//找到最小j后输出，进入下一循环 
			}
		}
	}
	return 0;
}
