/*输入格式
共两行。每行输入一个分数（不一定是最简分数）。

输出格式
两个整数，表示输入的两个分数的积在表中的第几列第几行。*/

//__gcd找最大公约数 
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>//在这里 
using namespace std;
int main ()
{
	int a1,a2,b1,b2;
	scanf("%d/%d %d/%d",&a1,&a2,&b1,&b2);
	int c1=a1*b1,c2=a2*b2;
	printf("%d %d\n",c2/__gcd(c1,c2),c1/__gcd(c1,c2));
	
	return 0;
}
/*另，如果不用__gcd函数，可以自己用辗转相除法定义
int gcd(int a,int b)
{
	if(a%b == 0)
	{
		return b;
	}
	gcd(b,a%b);
}
