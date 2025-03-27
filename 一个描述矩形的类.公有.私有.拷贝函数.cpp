#include<iostream>
using namespace std;
// �ڴ˴�������Ĵ���
class Rectangle{
	private:
		int width,length;
	public:
		void set(int w,int l);
		int calcircle();
		int calarea();
		Rectangle(){
			width=1;length=1;
		}
		Rectangle(int w,int l){
			width = w;length=l;
		}
		Rectangle(const Rectangle &r){//�������캯�� 
		width =r.width;
		length=r.length;
		}
		~Rectangle(){
			cout<<"Destruction Called."<<endl;
		}
};
void Rectangle::set(int w,int l){	//�ⲿ���幹�캯�� 
	width =w;length=l;
}
int Rectangle::calcircle(){
	return (width+length)*2;
}
int Rectangle::calarea(){
	return width*length;
}

int main(){
 Rectangle r1;
 int x,y;
 cin>>x>>y;
 Rectangle r2(x,y);
 Rectangle r3(r2);
 cout<<r1.calcircle()<<" ";
 cout<<r1.calarea()<<endl;
 cout<<r2.calcircle()<<" ";
 cout<<r2.calarea()<<endl;
 cout<<r3.calcircle()<<" ";
 cout<<r3.calarea()<<endl;
 return 0;
 }
