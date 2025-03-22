#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	string s;
	int n=0;
	getline(cin,s);		//用getline（）可以读取空格 
	for(int i=0;i<s.length();i++){
		if(s[i]=='a'||s[i]=='d'||s[i]=='g'||s[i]=='j'||s[i]=='m'
			||s[i]=='p'||s[i]=='t'||s[i]=='w'||s[i]==' '){
		n+=1;			}
		if(s[i]=='b'||s[i]=='e'||s[i]=='h'||s[i]=='k'||s[i]=='n'
			||s[i]=='q'||s[i]=='u'||s[i]=='x'){
		n+=2;	
		}
		if(s[i]=='c'||s[i]=='f'||s[i]=='i'||s[i]=='l'||s[i]=='o'
			||s[i]=='r'||s[i]=='v'||s[i]=='y'){
		n+=3;	
		}
		if(s[i]=='s'||s[i]=='z'){
		n+=4;	
		}
	}
	cout <<n;
	return 0;
}
