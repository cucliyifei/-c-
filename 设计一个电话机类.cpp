/*设计一个电话用户类（Usetele），数据成员为：用户编号id（int），
电话号码number（long int，七位，首位不为0和1），用户类型utype（A-公用；B-私用）。
成员函数为：构造函数（初始化信息）Usetele()，修改信息modify()，
打印信息list()，电话号码的升位处理expand。
具体要求：

1基于输出结果，在类体外实现相应构造函数，并显示构造过程；
2在类体外实现成员函数list()，依次输出电话用户信息；
3在类体外实现成员函数modify()，依次修改电话用户信息；
4在类体外实现成员函数Expand()，实现电话号码升位。
升位原则如下：若号码位数大于7位，则不需要进行升位处理；否则，查看号码左边最高位数字：
若用户类型为公用电话，且最高位号码位于2-5，则最高位补8；若用户类型为公用电话，且最高位号码位于6-9，则最高位补7；
若用户类型为私人电话，且最高位号码位于2-5，则最高位补6；若用户类型为私人电话，且最高位号码位于6-9，则最高位补5.
*/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
class Usetele{
	private:
		int id;
		long int number;
		char utype;
	public:
		Usetele(){
			id=0;number=0;utype='A';
			cout<<"Non-parameter constructor called!"<<endl;
		}
		Usetele(int i,long int n,char ut){
			id=i;number=n;utype=ut;
			cout<<"Constructor called!"<<endl;
		}
		Usetele(const Usetele &r){
			id=r.id;number=r.number;utype=r.utype;
			cout<<"Copy constructor called!"<<endl;
		}
		void list();			//三个函数分别负责打印，修改，升位处理，均不需要返回值 
		void modify(int i,long int n,char ut);
		void Expand();
	};
void Usetele::list(){
	cout<<"ID:"<<this->id<<endl<<"Tele:"<<this->number<<endl	//用this指针访问当前对象成员变量 
		<<"Type:"<<this->utype<<endl;
}
void Usetele::modify(int i,long int n,char ut){
	id=i;number=n;utype=ut;
	cout<<id<<"Information modified!"<<endl;
	
}

void Usetele::Expand(){
	int count=0;
	long int temp=this->number;
	long int temp1=this->number;
	while(temp>0){
		count++;
		temp/=10;		//记得改变temp的值，否则会进入死循环 
	}
	if(count<=7){
		long int highDigit =this->number;
		while(highDigit>=10){
			highDigit/=10;			//找到最高位的那一个数字 
		}
		long int multiplier=1;
		for(int i=0;i<count;i++){
			multiplier*=10;			//得到最高位的位数 
		}
		if(utype=='A'){
			if(highDigit>=2&&highDigit<=5){
				this->number=8*multiplier+this->number;
			}
			else if(highDigit>=6&&highDigit<=9)
				this->number=7*multiplier+this->number;
		}
		else if(utype=='B'){
			if(highDigit>=2&&highDigit<=5){
				this->number=6*multiplier+this->number;
			}
			else if(highDigit>=6&&highDigit<=9)
				this->number=5*multiplier+this->number;
		}
	}
	cout<<"Tele:"<<temp1<<"The new tele is:"<<this->number<<endl;
}

int main(){

    Usetele a,b(3,3792345,'A');

    Usetele c(b),d(21,4466223,'B'),e(d);

    a.list();

    a.modify(6,8804455,'A');

    a.list();


    a.Expand();

    d.Expand();

    a.list();

    d.list();

} 
