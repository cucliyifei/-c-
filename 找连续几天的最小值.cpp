/*�����ʽ
��һ���������ÿո�������������ֱ���� n �� m��
�� 2 ���� (n+1) �У�ÿ��һ���������� (i+1) �е����� ai,����� i ���µĴ�ʹֵ ai.
�����ʽ
���һ��һ����������ʾ���� m ����ʹֵ�ĺ͵���Сֵ�Ƕ��١�
*/
#include<iostream>
#include <cstdio>
using namespace std;
int main ()
{
	int n,m,c=0,min=100000 ,arr[3000];//�Ȱ�min��ʼ��Ϊһ���ϴ���� 
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-m+1;i++){	//ע��i����ȡֵ 
		for(int j=0;j<m;j++){
			c+=arr[i+j];
			
		}
		
	if(c<min){
		min=c;	
		}
		c=0;//���ܷ���if���棬����c������ÿ��ѭ�������� 
	}
	cout<<min;
	return 0;
}
