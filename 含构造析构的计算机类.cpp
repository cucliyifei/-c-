#include<iostream>
using namespace std;
// 在此处补充你的代码
class Calculate{
	double a,b;
	public:
		Calculate(){
			a=1;b=1;
		}
		Calculate (double x,double y){
			a=x;b=y;
		}
		Calculate (const Calculate &r){
			a=r.a;b=r.b;
		}
		double add(){	//加 
			return a+b;
		}
		double min(){	//减 
			return a-b;
		}
		double mul(){	//乘 
			return a*b;
		}
		double div(){	//除 
			return a/b;
		}
		~Calculate(){
			cout<<"Destruction Called."<<endl;
		}
};



int main(){
 Calculate c1;
 double x,y;
 cin>>x>>y;
 Calculate c2(x,y);
 Calculate c3(c2);
 cout<<c1.add()<<" "<<c1.min()<<" "<<c1.mul()<<" "<<c1.div()<<endl;
 cout<<c2.add()<<" "<<c2.min()<<" "<<c2.mul()<<" "<<c2.div()<<endl;
 cout<<c3.add()<<" "<<c3.min()<<" "<<c3.mul()<<" "<<c3.div()<<endl;
 
 return 0;
 }
