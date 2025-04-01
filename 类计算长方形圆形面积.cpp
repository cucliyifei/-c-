#include <iostream>
#include<cstdio>
using namespace std;
class values{
	private:
		int l,w;
		double r1,r2,sum;
	public:
		values(){
		};
		void set(int length,int width,double R1,double R2){
			l=length;w=width;r1=R1;r2=R2;
		}
		void sum_values(){
			sum=l*w*10+3.14*r1*r1*10+3.14*r2*r2*10;
		}
		void show_values(){
			cout<<sum<<endl;
		}
};
int main(){
	int l,w;
	double r1,r2;
	cin>>l>>w>>r1>>r2;
	values f;
	f.set(l,w,r1,r2);
	f.sum_values();
	f.show_values();
	return 0;
}
