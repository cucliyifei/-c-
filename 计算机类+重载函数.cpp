#include <iostream>
#include <cstdio>
using namespace std;
class Calculate{
	public:
		void set(double x,double y){
		a1=x;b1=y;
		}
		void set(int x,int y){
		a2=x;b2=y;
		}
		double add(){
			return a1+b1;
		}
		double mimus(){
			return a1-b1;
		}
		double multiply(){
			return a1*b1;
		}
		double divide(){
			if(b1==0){
				cout<<"除数不能为0"<<endl;
				return 0; 
			}
			return a1/b1;
		}
		int add2(){
			return a2+b2;
		}
		int mimus2(){
			return a2-b2;
		}
		int multiply2(){
			return a2*b2;
		}
		int divide2(){
			if(b2==0){
				cout<<"除数不能为0"<<endl;
				return 0; 
			}
			return a2/b2;
		}
	private:
		double a1,b1;
		int a2,b2;
};
int main(){
	double x,y;
	int a,b;
	cin>>x>>y;
	cin>>a>>b;
	Calculate s1;
	s1.set(x,y);
	Calculate s2;
	s2.set(a,b);
	cout<<s1.add()<<endl
		<<s1.mimus()<<endl
		<<s1.multiply()<<endl
		<<s1.divide()<<endl;
	cout<<s2.add2()<<endl
		<<s2.mimus2()<<endl
		<<s2.multiply2()<<endl
		<<s2.divide2()<<endl;
	return 0;
}
