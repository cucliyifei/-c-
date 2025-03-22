/*月用电量在 150 千瓦时及以下部分
按每千瓦时 0.4463 元执行，月用电量在 151～400 千瓦时的部分按每千瓦时 0.4663 元
月用电量在 401 千瓦时及以上部分按每千瓦时 0.5663 元执行。*/
#include <iostream> 
#include <cstdio>
using namespace std;
int main()
{
	int sum;double p=0;
	cin>>sum;
	if(sum<=150){
		p+=sum*0.4463;
	}
	if(sum>=151&&sum<=400){
		p+=150*0.4463+(sum-150)*0.4663;
	}
	if(sum>=401){
		p+=150*0.4463+250*0.4663+(sum-400)*0.5663;
	}
	printf("%.1lf",p);
	return 0;
}
