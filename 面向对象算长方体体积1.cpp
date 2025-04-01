#include <iostream>
#include<cstdio>
using namespace std;
class V{
	double l,w,h,v;
	public:
		V(){		//用大括号定义空函数 
		};
		void Vset(double length,double width,double height);
		void V_C();
		void show_V();
};
	void V::Vset(double length,double width,double height){
		l=length;w=width;h=height;
		}
	void V::V_C(){
		v=l*w*h;
		}
	void V::show_V(){
		cout<<v<<endl;
		}
int main(){	
	double l1,w1,h1;
	cin>>l1>>w1>>h1;
	V chft;

	chft.Vset(l1,w1,h1);
	chft.V_C();
	chft.show_V();
	return 0;
}
