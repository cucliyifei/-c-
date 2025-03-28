#include<iostream>
#include<cstdio>
using namespace std;
/*int main(){
	int a,b,c,d;
	int e=0,f=0;
	cin>>a>>b>>c>>d;
	e=c-a;f=d-b;
	if(f<0){
		e--;f+=60;		//思路1：直接算，如果f为负数，向小时数借一位 
	}
		cout<<e<<' '<<f<<endl;
	
	return 0;
}*/
int main(){
	int a,b,c,d,g;
	int e=0,f=0;
	cin>>a>>b>>c>>d;	//思路2：全部换为分钟数 
	a=a*60+b;
	c=c*60+d;
	g=c-a;
	e=g/60;
	f=g%60;
	cout <<e<<' '<<f<<endl;
	return 0;
}
