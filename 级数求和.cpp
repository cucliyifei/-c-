#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int k;
	double i=1.0;//1/n���Ƿ�������Ҫ�õ�double 
	cin >>k;//����һ������k 
	double s=0.0;//ע��sҲ��double 
	while(1)
	{
		s+=1/i;
		i++;
		if(s>k){
			cout<<i-1;//����i++�ˣ���Ҫ��1 
			break;
		}
	}
	return 0;
 } 
