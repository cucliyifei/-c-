/*�����ʽ
һ��������һ���������� 0 �������Կո�����

�����ʽ
һ���ڵ��������һ���������Կո�����
*/
#include<iostream>
#include <cstdio>
using namespace std;
int main ()
{
	int arr[110];
	int c;
	int *p=arr;
	while(1){
		cin>>c;
		if(c==0)
		break;
		p++;
		*p=c;
	
	}
	while(p!=arr)
	{
	cout <<*p<<" ";
	p--;
	}
	return 0;
}
