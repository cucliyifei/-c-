/*�����ʽ
�� 1 �У�һ������ N ��1��N��10**6
�� 2 �У�N���ո��������������ʾ���� N ���������¡�0�� ������� ��10**9
�����ʽ
1 �У�һ����������ʾ�������һֱ�����������������
*/
#include<iostream>
#include <cstdio>
using namespace std;
int main ()
{
	long long c=1, n,max=0;
	long long *arr=new long long[1000010];//ֱ�ӷ���ϴ����鵼��ջ�����ͨ��new��̬�����ڴ�
	cin >>n;							  //�����ڴ��ջ�ռ�ת�Ƶ��ѿռ䣬����ջ��� 
	for(long long i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(long long i=0;i<n;i++)
	{
		if(arr[i+1]>arr[i])
		{
			c++;
			if(max<c){
				max=c;
			}
		}
		else c=1;
	}
	cout <<max;
	delete[]arr;//�ͷŶ�̬������ڴ� 
	return 0;
}
