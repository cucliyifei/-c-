#include <iostream>
#include <cstdio>
using namespace std;
class Date{
	int y,m,d;
	public:
		Date(){
			y=0;m=0;d=0;
			cout <<y<<"/"<<m<<"/"<<d<<"-"<<(isLeapYear()?"1":"0")<<endl;
		}
		Date(int year,int month,int date){
			y=year;m=month;d=date;
			cout <<y<<"/"<<m<<"/"<<d<<"-"<<(isLeapYear()?"1":"0")<<endl;
		}
		Date(const Date &r){
			y=r.y;
			m=r.m;
			d=r.d;
			cout <<y<<"/"<<m<<"/"<<d<<"-"<<(isLeapYear()?"1":"0")<<endl;
		}
		
		bool isLeapYear(){		//�ж����� 
			return (y%4==0&&y%100!=0||y%400==0);
		}
		
};
int main(){

	Date r1;		//���Զ����� 
	Date r2(2019,1,5);
	Date r3(r2);
	
	return 0;
}
