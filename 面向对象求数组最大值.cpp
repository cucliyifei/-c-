//�ҳ�һ�����������е�Ԫ�ص����ֵ�����������ķ���ʵ�֡�
//��1�� ��������ʵ�ֳ�Ա����SetValue()��ʵ������Ԫ�ظ���n��n������10��������Ԫ�صĳ�ʼ����
//��2�� ��������ʵ�ֳ�Ա����MaxValue()����������Ԫ�ص����ֵ��
//��3�� ��������ʵ�ֳ�Ա����ShowValue()��ʵ�����ֵ�������
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

