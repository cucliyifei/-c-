#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int k;
	double i=1.0;//1/n都是分数，需要用到double 
	cin >>k;//输入一个整数k 
	double s=0.0;//注意s也是double 
	while(1)
	{
		s+=1/i;
		i++;
		if(s>k){
			cout<<i-1;//上面i++了，需要减1 
			break;
		}
	}
	return 0;
 } 
