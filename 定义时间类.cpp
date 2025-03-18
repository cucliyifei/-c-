#include<iostream>
#include <cstdio>
#include <iomanip>
#include <cstring>
using namespace std;
class Time{
	public:
		void set(int si,int mi,int hi)
		{
			s=si;m=mi;h=hi;
		}
		void display(){
			cout<<setw(2)<<setfill('0')<<s<<":"	//确保输出的时分秒都是两位数形式， 
				<<setw(2)<<setfill('0')<<m<<":"	//不足时前面补0 
				<<setw(2)<<setfill('0')<<h<<endl;
		}
		private:
			int s,m,h;
};
	
int main ()
{
	Time p;
	p.set(03,32,48);
	p.display();
	return 0;
}
