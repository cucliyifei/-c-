//利用结构类型编写程序，实现输入一个学生的数学期中和期末成绩，
//然后计算并输出其平均成绩。
#include <iostream>
#include <cstdio>
using namespace std;
struct Score{		//定义结构体 
	double s1;
	double s2;
};
void set(Score *p){		//指针实现输入分数 
	double m,n;
	cin>>m>>n;
	p->s1=m;
	p->s2=n;
}
double AveScore(Score d){		//定义函数求平均数 
	return (d.s1+d.s2)/2;
}
int main(){
	Score s;		//注意s是结构体，不是double 
	set(&s);
	cout<<AveScore(s);
	return 0;
}
