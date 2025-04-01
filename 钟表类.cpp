#include <iostream>
#include <cstdio>
using namespace std;
class Clock{
	public:
	Clock();
	Clock(int hour,int min,int sp){
		h=hour,m=min,s=sp;
		cout<<h<<":"<<m<<":"<<s<<endl;
	}
	private:
		int h,m,s;
};

int main(){
	int h1,m1,s1;
	cin>>h1>>m1>>s1;
	Clock cl(h1,m1,s1);
	
	return 0;
}
