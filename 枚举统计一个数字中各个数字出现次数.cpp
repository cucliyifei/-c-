#include <iostream>
#include <cstdio>
using namespace std;
//int js[10]={0},n,m;		//也可定义全局变量，直接初始化为0 
int main(){
	int js[10]={0},n,m;		//需要手动对数组初始化进行计数，否则就是随机值 
	cin>>n>>m;
	for(int i=n;i<=m;i++){
		for(int temp=i;temp;temp/=10)
		js[temp%10]++;
	}
	for(int i=0;i<=9;i++){
		cout<<js[i]<<' ';
	}
	return 0;
}
/*int main(){			//自己写的 
	int m,n,a;int j=0;int js[10];
	cin>>m>>n;
	int arr[500010];
	for(int i=m;i<=n;i++){
		arr[j]=i;
		j++;
	
	}
	for(int i=0;i<n-m+1;i++){
		while(arr[i]){
		a=arr[i]%10;
		js[a]++;
		arr[i]/=10;	
		}
	}
	for(int i=0;i<10;i++){
		cout<<js[i]<<" ";
	}
	return 0;
}*/
