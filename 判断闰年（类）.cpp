#include <iostream>
#include <cstdio>
using namespace std;
class SetDate{
	public:
			void set(int year,int month,int date){
				y=year;m=month;d=date;
			}
			int IsLeapYear(){
				if(y%4==0&&y%100!=0||y%400==0){//判断闰年 
					return 1;
				}
				else return 0;
			}
		private:
			int y,m,d;
};
int main(){
	int x,y,z,x1,y1,z1;
	cin>>x>>y>>z;
	cin>>x1>>y1>>z1;
	SetDate date1;
	date1.set(x,y,z);//常规方法面向对象 
	cout<<date1.IsLeapYear()<<endl;
	
	SetDate *p;//创建指针 
	p=new SetDate;//用new为指针分配内存 

	p->set(x1,y1,z1);
	
	cout<<p->IsLeapYear()<<endl;
	delete p;//释放内存 
	return 0;
}
