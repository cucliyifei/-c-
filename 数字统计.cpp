/*请统计某个给定范围 [L,R] 的所有整数中，数字 2 出现的次数。

比如给定范围 [2,22]，数字 2 在数 2 中出现了 1 次，在数 12 中出现 1 次，在数 20 中出现 1 次，
在数 21 中出现 1 次，在数 22 中出现 2 次，所以数字 2 在该范围内一共出现了 6 次。*/
#include <iostream>//c++标准库
#include <cstdio> 
using namespace std;
int main(){
	int m=0,n=0,x=0;
	int sum=0;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		x=i;
		while(x){
		
		if(x%10==2){
			sum++;
			}
			x/=10;
		}
	}
	cout<<sum<<endl;
	return 0;
}
