/*���õ����� 150 ǧ��ʱ�����²���
��ÿǧ��ʱ 0.4463 Ԫִ�У����õ����� 151��400 ǧ��ʱ�Ĳ��ְ�ÿǧ��ʱ 0.4663 Ԫ
���õ����� 401 ǧ��ʱ�����ϲ��ְ�ÿǧ��ʱ 0.5663 Ԫִ�С�*/
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
