/*���볤��Ϊ n ��һ�����������У�Ҫ���������������ŵĳ��ȡ�
����ָ�������У���С�����������Ȼ����
�����ʽ
��һ�У�һ������ n��

�ڶ��У�n ������ a 
�����ʽ
һ����������ŵĸ�����*/
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n,max=0,sum=0;
	int a[10010];
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	for (int i=0;i<n;i++){
		if(a[i+1]==a[i]+1){
			sum++;
		}
		else sum=0;
		if(sum>max){
			max=sum;
		}
	}
	cout<<max+1;
	return 0;
}
