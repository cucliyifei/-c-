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
