/*�����ʽ
�����С�ÿ������һ����������һ��������������

�����ʽ
������������ʾ��������������Ļ��ڱ��еĵڼ��еڼ��С�*/

//__gcd�����Լ�� 
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>//������ 
using namespace std;
int main ()
{
	int a1,a2,b1,b2;
	scanf("%d/%d %d/%d",&a1,&a2,&b1,&b2);
	int c1=a1*b1,c2=a2*b2;
	printf("%d %d\n",c2/__gcd(c1,c2),c1/__gcd(c1,c2));
	
	return 0;
}
/*���������__gcd�����������Լ���շת���������
int gcd(int a,int b)
{
	if(a%b == 0)
	{
		return b;
	}
	gcd(b,a%b);
}
