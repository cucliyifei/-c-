/*��ͳ��ĳ��������Χ [L,R] �����������У����� 2 ���ֵĴ�����

���������Χ [2,22]������ 2 ���� 2 �г����� 1 �Σ����� 12 �г��� 1 �Σ����� 20 �г��� 1 �Σ�
���� 21 �г��� 1 �Σ����� 22 �г��� 2 �Σ��������� 2 �ڸ÷�Χ��һ�������� 6 �Ρ�*/
#include <iostream>//c++��׼��
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
