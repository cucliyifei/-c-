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
	int c=0;
	for(int i=0;;i++){
	cin >>arr[i];
	if (arr[i]==0)
		break;
	c++;
}
	for(int i=c-1;i>=0;i--){
		cout<<arr[i]<<" ";
	}
	return 0;
}
