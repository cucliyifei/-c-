#include <iostream>
using namespace std;

class Root{
	public:
		Root(){xn=1.0;}
	    float calroot(float x);
	protected:
		float xn;
}; 

class Quadratic{
	public:
		Quadratic(float a, float b, float c):A(a),B(b),C(c)
		{tmp=B*B-4.0*A*C;}
		~Quadratic(){}
	    float* getresults(int &nres);
	protected:
		float A;
		float B;
		float C;
		float tmp;
		float ress[2];
		Root root;
};

int main()
{
	float a,b,c;
	int nres=0;
	float* ress;
	
	cin>>a>>b>>c;
	Quadratic qfunc(a, b, c);
	ress=qfunc.getresults(nres);
	cout<<nres<<endl;		//输出方程有几个解 
	if(nres==1)			//有一个解 
	    cout<<ress[0]<<endl;
	else if(nres==2)	//有两个解 
		cout<<ress[0]<<endl<<ress[1]<<endl;
	return 0; 
}
// 在此处补充你的代码
#include <cmath>
float Root::calroot(float a){
        float xn_plus1;
        do {
            xn_plus1 = 0.5 * (xn + a / xn);
            if (fabs(xn_plus1 - xn) < 1e-7) break;	//fabs取绝对值 
            xn = xn_plus1;
        } while (true);
        return xn_plus1;
    
}
float*Quadratic::getresults(int &nres){
	if(tmp<0){
		nres=0;
	}
	else if(tmp==0){
		nres=1;
		ress[0]=(-B)/(2*A);
	}
	else {
		nres=2;
		float sqrt_val=root.calroot(tmp);
	ress[0]=(-B+sqrt_val)/(2*A);
	ress[1]=(-B-sqrt_val)/(2*A);
		}
	
	return ress;	//直接return ress 就行 
}





