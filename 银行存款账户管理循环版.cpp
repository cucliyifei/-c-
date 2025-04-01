#include <iostream>
#include <cstdio>
#include <cstring>	//strncpy头文件 
using namespace std;
class Account{
private:
   int no;
   char name[10];
   float money;
public:
   Account(int No,char* Name,float money0);
   void Deposit(float moneyplus);
   void Withdraw(float moneydec);
   void Show();
};
Account::Account(int No,char*name,float money0){
	no=No;
	strncpy(this->name, name, 9);	//不能用name[10]=*name;会越界访问 
	money=money0;
}
void Account::Show(){
	cout<<no<<":"<<money<<endl;
}
void Account::Deposit(float moneyplus){
	money+=moneyplus;
	Show();
}
void Account::Withdraw(float moneydec){
	if(money<moneydec){
		Show();
	}
	else {
	money-=moneydec;
	Show();
	}
}
int main(){

	int no,op;char name[10];float money,num;
	cin>>no>>name>>money;
	Account obj(no,name,money);
	cout<<"1-存款，2-取款，3-查询余额，0-退出"<<endl;
	cin>>op;
	while(true){
	if(op==0){
		break;		//可跳出循环 
	}
	switch(op){
		case 1:
			cin>>num;
			obj.Deposit(num);
			break;		//跳出switch，不跳出循环 
		case 2:
			cin>>num;
			obj.Withdraw(num);
			break;
		case 3:
			obj.Show();
			break;
		}
	}
	return 0;
}
