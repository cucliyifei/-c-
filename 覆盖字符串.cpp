/*����һ������Ϊ l ���ַ������ʼʱ������ַ����� l ����ţ�.����ɡ�

��������ַ����У�����ΰ� boy ���� girl �����ʣ�������������ַ����С�

�����ϵ��ʣ��Ḳ��֮ǰ���ϵĵ��ʣ����߸��Ǿ�š�
���գ�ÿ������������һ���ַ�û�б����ǡ�

���ʣ�һ�����м��� boy ���� girl��

�����ʽ
һ�б��������� boy �� girl �����ʵ��ַ�����

�����ʽ
���У�������������һ��Ϊ boy �ĸ������ڶ���Ϊ girl �ĸ�����

�����������
����
......boyogirlyy......girl.......
���
4
2*/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int boy=0,girl=0;
	string st;		//string����ֱ���á������� 
	cin>>st;
	for(int i=0;i<st.length();i++)	//length������ȡ�ַ������� 
	{
		if(st[i]=='b'||st[i+1]=='o'||st[i+2]=='y'){		//ֱ����ѭ������ 
			boy++;
		}
		if(st[i]=='g'||st[i+1]=='i'||st[i+2]=='r'||st[i+3]=='l'){
			girl++;
		}
	}
	cout<<boy<<endl<<girl<<endl;
}
