/*输入格式
一行内输入一串整数，以 0 结束，以空格间隔。

输出格式
一行内倒着输出这一串整数，以空格间隔。
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
