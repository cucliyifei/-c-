/*输入
第一行，两个整数n，m（5 ≤ n ≤ 5000，3 ≤ m ≤ n），中间用一个空格隔开，
其中n 表示报名参加笔试的选手总数，m 表示计划录取的志愿者人数。
输入数据保证m*150%向下取整后小于等于n。（如3*1.5=4.5，取4） 
第二行到第 n+1 行，每行包括两个整数，中间用一个空格隔开，
分别是选手的报名号k（1≤ k ≤ 9999）和该选手的笔试成绩s（1 ≤ s ≤ 100）。
输入数据保证选手的报名号各不相同。
输出
第一行，有两个整数，用一个空格隔开，第一个整数表示面试分数线；
第二个整数为进入面试的选手的实际人数。
从第二行开始，每行包含两个整数，中间用一个空格隔开，
分别表示进入面试的选手的报名号和笔试成绩，按照笔试成绩从高到低输出，
如果成绩相同，则按报名号由小到大的顺序输出。*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
struct contestant{		//定义结构体存储选手序号和分数 
	int list;
	int score;
};

bool compare(contestant &s1,contestant &s2){		//为了实现用sort降序排列设的函数 
	if(s1.score!=s2.score){
	return s1.score>s2.score;
	}
	else return s1.list<s2.list;		//分数相同，序号小的在前 
}
int main(){
	int n,m;
	cin>>n>>m;

	vector<contestant>contestants(n);		//定义容器存储多个选手信息 
	for(int i=0;i<n;i++){					//传统for循环实现数据输入容器 
	cin>>contestants[i].list>>contestants[i].score;
	}
	sort(contestants.begin(),contestants.end(),compare);	//降序排序 
	int rank=m*1.5;
	int Score=contestants[rank-1].score;	//因为索引是从0开始的，rank要减一 
	int count=0;
	
	for(int i=0;i<n;i++){				//for循环遍历容器数据 
		if(contestants[i].score>=Score){
			count++;
		}
	}
	cout << Score <<" "<< count<<endl;
	for(int i=0;i<n;i++){
		if(contestants[i].score>=Score){		//以分数为节点而不是排名 
			cout<< contestants[i].list<<" "<<contestants[i].score<<endl;
		}
	}
	
	return 0;
}
