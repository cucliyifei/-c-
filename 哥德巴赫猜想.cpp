#include <iostream>
#include <cstdio>
#include <cmath> 
using namespace std;
	int n,s=0;
	bool p(int n){		//�ж������������ú���Ҫд�ں������⣩ 
		for(int i=2;i<=int(sqrt(n));i++)
			if (n%i==0){
				return false;
			}
			return true;
	}
	
int main(){
	int i,j;
	cin>>n;
	for(int i=4;i<=n;i++){		//��4��ʼ��n 
		for(int j=2;j<=i/2;j++){	//1�������������ÿ��� 
			if(i%2!=0)break;
			else if(p(j)&&p(i-j)){
				cout<<i<<"="<<j<<"+"<<i-j<<endl;
				break;		//�ҵ���Сj�������������һѭ�� 
			}
		}
	}
	return 0;
}
