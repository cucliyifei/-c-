/*输入格式
输入包括 7 行数据，分别表示周一到周日的日程安排。每行包括两个小于 10 的非负整数，
用空格隔开，分别表示津津在学校上课的时间和妈妈安排她上课的时间。

输出格式
一个数字。如果不会不高兴则输出 0，如果会则输出最不高兴的是周几
（用 1,2,3,4,5,6,7 分别表示周一，周二，周三，周四，周五，周六，周日）。
如果有两天或两天以上不高兴的程度相当，则输出时间最靠前的一天。*/
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	bool f=true;
	int a[7],b[7];//输入两个数 
	int max=0;
	int s,n;
	for(int i=1;i<=7;i++){
		cin>>a[i]>>b[i];
	
	}
	for(int i=1;i<=7;i++){
		s=a[i]+b[i];
		if (s>8&&s>max)//循环找出最不高兴的一天 
		{
			max=s;
			n=i;//i是具体日子 
		}	
	}
		cout<<n<<endl;
		f=false;//有最不高兴的 一天，f=false，若没有，执行下面语句 


	if(f){
		cout<<"0";
	} 
	return 0;
 } 
