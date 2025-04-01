#include <iostream>
#include <stdio.h> 
using namespace std;
int main(){
	int i,j,flag;
	for(i=2;i<=100;i++){
	
			i=9;
		flag=0;
		for(j=2;j<i;j++){
			if(i%j==0)
				flag=1;
				break;
			
		}
		if(flag==0){
			printf("%4d",i);
		}
	}
	return 0;
}
