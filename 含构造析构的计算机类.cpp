#include<iostream>
using namespace std;
// �ڴ˴�������Ĵ���
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
		double add(){	//�� 
			return a+b;
		}
		double min(){	//�� 
			return a-b;
		}
		double mul(){	//�� 
			return a*b;
		}
		double div(){	//�� 
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
