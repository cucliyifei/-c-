/*����һ�����ʽ��Ӣ����ĸ��Сд�����������+��-��*��/��������С��Բ�����Ź��ɣ�
�� @ ��Ϊ���ʽ�Ľ����������дһ����������ʽ�е�����Բ�����Ƿ�ƥ�䣬
��ƥ�䣬����� YES��������� NO�����ʽ����С�� 255����Բ�������� 20 ����

�����ʽ
һ�У����ʽ��
�����ʽ
һ�У�YES �� NO��

�����������
���� 
2*(x+y)/(1-x)@
��� 
YES*/
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
int main(){
	string l;
	int ok=0;	//״̬�ı��� 
	int i=0;
	getline(cin,l);		//��ȡ�ַ� 
	for(;;i++){
		if(ok==0&&l[i]==')'){	//��ʼ״̬����������ƥ��״̬�³��������ţ�ֱ�����NO������ 
		cout<<"NO";
		return 0;
		}
		if(l[i]=='('){		//�����ž�++ 
			ok++;
		}
		if(l[i]==')'){		//�����ž�-- 
			ok--;
		}
		if(l[i]=='@'){
			if(ok!=0){		//ok��=0����ƥ�� 
				cout<<"NO"<<endl;
				return 0;
			}
			else {
			cout<<"YES"<<endl;	//ok==0��ƥ�� 
			return 0;	
			}
		}
	}

}
