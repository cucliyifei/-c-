/*����
��һ�У���������n��m��5 �� n �� 5000��3 �� m �� n�����м���һ���ո������
����n ��ʾ�����μӱ��Ե�ѡ��������m ��ʾ�ƻ�¼ȡ��־Ը��������
�������ݱ�֤m*150%����ȡ����С�ڵ���n������3*1.5=4.5��ȡ4�� 
�ڶ��е��� n+1 �У�ÿ�а��������������м���һ���ո������
�ֱ���ѡ�ֵı�����k��1�� k �� 9999���͸�ѡ�ֵı��Գɼ�s��1 �� s �� 100����
�������ݱ�֤ѡ�ֵı����Ÿ�����ͬ��
���
��һ�У���������������һ���ո��������һ��������ʾ���Է����ߣ�
�ڶ�������Ϊ�������Ե�ѡ�ֵ�ʵ��������
�ӵڶ��п�ʼ��ÿ�а��������������м���һ���ո������
�ֱ��ʾ�������Ե�ѡ�ֵı����źͱ��Գɼ������ձ��Գɼ��Ӹߵ��������
����ɼ���ͬ���򰴱�������С�����˳�������*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
struct contestant{		//����ṹ��洢ѡ����źͷ��� 
	int list;
	int score;
};

bool compare(contestant &s1,contestant &s2){		//Ϊ��ʵ����sort����������ĺ��� 
	if(s1.score!=s2.score){
	return s1.score>s2.score;
	}
	else return s1.list<s2.list;		//������ͬ�����С����ǰ 
}
int main(){
	int n,m;
	cin>>n>>m;

	vector<contestant>contestants(n);		//���������洢���ѡ����Ϣ 
	for(int i=0;i<n;i++){					//��ͳforѭ��ʵ�������������� 
	cin>>contestants[i].list>>contestants[i].score;
	}
	sort(contestants.begin(),contestants.end(),compare);	//�������� 
	int rank=m*1.5;
	int Score=contestants[rank-1].score;	//��Ϊ�����Ǵ�0��ʼ�ģ�rankҪ��һ 
	int count=0;
	
	for(int i=0;i<n;i++){				//forѭ�������������� 
		if(contestants[i].score>=Score){
			count++;
		}
	}
	cout << Score <<" "<< count<<endl;
	for(int i=0;i<n;i++){
		if(contestants[i].score>=Score){		//�Է���Ϊ�ڵ���������� 
			cout<< contestants[i].list<<" "<<contestants[i].score<<endl;
		}
	}
	
	return 0;
}
