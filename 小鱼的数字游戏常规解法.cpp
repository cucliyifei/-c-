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
