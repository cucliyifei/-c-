#include <iostream>
#include <cstdio>
#include <cstring>	//strncpyͷ�ļ� 
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
	strncpy(this->name, name, 9);	//������name[10]=*name;��Խ����� 
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
	cout<<"1-��2-ȡ�3-��ѯ��0-�˳�"<<endl;
	cin>>op;
	while(true){
	if(op==0){
		break;		//������ѭ�� 
	}
	switch(op){
		case 1:
			cin>>num;
			obj.Deposit(num);
			break;		//����switch��������ѭ�� 
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
