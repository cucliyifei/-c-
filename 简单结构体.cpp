//���ýṹ���ͱ�д����ʵ������һ��ѧ������ѧ���к���ĩ�ɼ���
//Ȼ����㲢�����ƽ���ɼ���
#include <iostream>
#include <cstdio>
using namespace std;
struct Score{		//����ṹ�� 
	double s1;
	double s2;
};
void set(Score *p){		//ָ��ʵ��������� 
	double m,n;
	cin>>m>>n;
	p->s1=m;
	p->s2=n;
}
double AveScore(Score d){		//���庯����ƽ���� 
	return (d.s1+d.s2)/2;
}
int main(){
	Score s;		//ע��s�ǽṹ�壬����double 
	set(&s);
	cout<<AveScore(s);
	return 0;
}
