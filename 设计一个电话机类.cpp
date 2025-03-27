/*���һ���绰�û��ࣨUsetele�������ݳ�ԱΪ���û����id��int����
�绰����number��long int����λ����λ��Ϊ0��1�����û�����utype��A-���ã�B-˽�ã���
��Ա����Ϊ�����캯������ʼ����Ϣ��Usetele()���޸���Ϣmodify()��
��ӡ��Ϣlist()���绰�������λ����expand��
����Ҫ��

1��������������������ʵ����Ӧ���캯��������ʾ������̣�
2��������ʵ�ֳ�Ա����list()����������绰�û���Ϣ��
3��������ʵ�ֳ�Ա����modify()�������޸ĵ绰�û���Ϣ��
4��������ʵ�ֳ�Ա����Expand()��ʵ�ֵ绰������λ��
��λԭ�����£�������λ������7λ������Ҫ������λ�������򣬲鿴����������λ���֣�
���û�����Ϊ���õ绰�������λ����λ��2-5�������λ��8�����û�����Ϊ���õ绰�������λ����λ��6-9�������λ��7��
���û�����Ϊ˽�˵绰�������λ����λ��2-5�������λ��6�����û�����Ϊ˽�˵绰�������λ����λ��6-9�������λ��5.
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
		void list();			//���������ֱ����ӡ���޸ģ���λ����������Ҫ����ֵ 
		void modify(int i,long int n,char ut);
		void Expand();
	};
void Usetele::list(){
	cout<<"ID:"<<this->id<<endl<<"Tele:"<<this->number<<endl	//��thisָ����ʵ�ǰ�����Ա���� 
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
		temp/=10;		//�ǵøı�temp��ֵ������������ѭ�� 
	}
	if(count<=7){
		long int highDigit =this->number;
		while(highDigit>=10){
			highDigit/=10;			//�ҵ����λ����һ������ 
		}
		long int multiplier=1;
		for(int i=0;i<count;i++){
			multiplier*=10;			//�õ����λ��λ�� 
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
