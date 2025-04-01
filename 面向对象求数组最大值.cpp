//找出一个整型数组中的元素的最大值，用面向对象的方法实现。
//（1） 在类体外实现成员函数SetValue()，实现数组元素个数n（n不大于10）和数组元素的初始化；
//（2） 在类体外实现成员函数MaxValue()，查找数组元素的最大值；
//（3） 在类体外实现成员函数ShowValue()，实现最大值的输出。
#include <iostream>
#include <cstdio>
int array[10];
using namespace std;

class Array_max{
public:
void SetValue(int n1,int array1[10]);
void MaxValue();
void ShowValue();
private:
int n; int array[10]; int max;
 };
void Array_max::SetValue(int n1,int array1[10]){
	n=n1;
	for(int i=0;i<n;i++){
		array[i]=array1[i];
	}
}
void Array_max::MaxValue(){
	for(int i=0;i<n;i++){
		if(array[i]>max){
			max=array[i];
		}
	}
}
void Array_max::ShowValue(){
	cout<<max<<endl;
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	Array_max findmax;
	findmax.SetValue(n,array);
	findmax.MaxValue();
	findmax.ShowValue();
	return 0;
}

