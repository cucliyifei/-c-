#include <iostream>
#include <cstdio>
#include <cstring>	//memset������ 
using namespace std;
int main(){
	int l,m,u,v,sum=0;
	cin>>l>>m;
	int a[10010];
	memset(a,0,sizeof(a));	//��ʼ��ȫΪ0 
	for(int i=1;i<=m;i++){
		cin>>u>>v;
		for(int j=u;j<=v;j++){
			a[j]=1;
		}
	}
	for(int i=0;i<=l;i++){	//�ӵ�0������ʼ 
	if(a[i]==0){
		sum++;
	}
	}
	cout<<sum<<endl;
	return 0;
}
