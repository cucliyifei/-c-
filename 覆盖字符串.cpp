/*我有一个长度为 l 的字符串，最开始时，这个字符串由 l 个句号（.）组成。

我在这个字符串中，将多次把 boy 或者 girl 两单词，依次贴到这个字符串中。

后贴上单词，会覆盖之前贴上的单词，或者覆盖句号。
最终，每个单词至少有一个字符没有被覆盖。

请问，一共贴有几个 boy 几个 girl？

输入格式
一行被反复贴有 boy 和 girl 两单词的字符串。

输出格式
两行，两个整数。第一行为 boy 的个数，第二行为 girl 的个数。

输入输出样例
输入
......boyogirlyy......girl.......
输出
4
2*/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int boy=0,girl=0;
	string st;		//string可以直接用【】访问 
	cin>>st;
	for(int i=0;i<st.length();i++)	//length（）读取字符串长度 
	{
		if(st[i]=='b'||st[i+1]=='o'||st[i+2]=='y'){		//直接用循环遍历 
			boy++;
		}
		if(st[i]=='g'||st[i+1]=='i'||st[i+2]=='r'||st[i+3]=='l'){
			girl++;
		}
	}
	cout<<boy<<endl<<girl<<endl;
}
