/*假设一个表达式有英文字母（小写）、运算符（+、-、*、/）和左右小（圆）括号构成，
以 @ 作为表达式的结束符。请编写一个程序检查表达式中的左右圆括号是否匹配，
若匹配，则输出 YES；否则输出 NO。表达式长度小于 255，左圆括号少于 20 个。

输入格式
一行：表达式。
输出格式
一行：YES 或 NO。

输入输出样例
输入 
2*(x+y)/(1-x)@
输出 
YES*/
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
int main(){
	string l;
	int ok=0;	//状态的变量 
	int i=0;
	getline(cin,l);		//读取字符 
	for(;;i++){
		if(ok==0&&l[i]==')'){	//初始状态或左右括号匹配状态下出现右括号，直接输出NO，结束 
		cout<<"NO";
		return 0;
		}
		if(l[i]=='('){		//左括号就++ 
			ok++;
		}
		if(l[i]==')'){		//右括号就-- 
			ok--;
		}
		if(l[i]=='@'){
			if(ok!=0){		//ok！=0，不匹配 
				cout<<"NO"<<endl;
				return 0;
			}
			else {
			cout<<"YES"<<endl;	//ok==0，匹配 
			return 0;	
			}
		}
	}

}
