#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
class Employee{
	protected:
		char name[50];
		char street[100];
		char city[50];
		char province[50];
		char postalCode[20];
	
	public:
		Employee(const char*n,const char *s,const char*c,const char*p,const char*pc){
			strncpy(name,n,sizeof(name)-1);
			name[sizeof(name)-1]='\0';
			
			strncpy(street,s,sizeof(street)-1);
			name[sizeof(street)-1]='\0';
			
			strncpy(city,c,sizeof(city)-1);
			name[sizeof(city)-1]='\0';
			
			strncpy(province,p,sizeof(province)-1);
			name[sizeof(province)-1]='\0';
			
				strncpy(postalCode,pc,sizeof(postalCode)-1);
			name[sizeof(postalCode)-1]='\0';
		}
	void ChangeName(const char*newName){
		strncpy(name,newName,sizeof(name)-1);
		name[sizeof(name)-1]='\0';
	}
	void Display(){
		cout <<name<<endl;
		cout<< street<<" "<<city<<endl;
		cout<< province<<" "<<postalCode<<endl;
	}	
};
class Name{
	protected:
		char name[50];
	public:
		Name(const char*n){
			strncpy(name,n,sizeof(name)-1);
			name[sizeof(name)-1]='\0';
		}
	void Display(){
		cout <<name<<endl;
	}
};
int main ()
{
	Employee em("Mark Brooks","5 West St.","Revere","CA","12290");
	
	em.Display();
	em.ChangeName("Richard Voss");
	em.Display();
	return 0;
}
