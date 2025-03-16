/*输入格式
第 1 行：一个整数 N 。1≤N≤10**6
第 2 行：N个空格隔开的整数，表示连续 N 天的最高气温。0≤ 最高气温 ≤10**9
输出格式
1 行：一个整数，表示最高气温一直上升的最长连续天数。
*/
#include<iostream>
#include <cstdio>
using namespace std;
int main ()
{
	long long c=1, n,max=0;
	long long *arr=new long long[1000010];//直接分配较大数组导致栈溢出，通过new动态分配内存
	cin >>n;							  //数组内存从栈空间转移到堆空间，避免栈溢出 
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
	delete[]arr;//释放动态分配的内存 
	return 0;
}
