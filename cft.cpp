#include"vol.h"
void cft(){
	cout<<"\n请输入长";
	ll a,b,h;
	cin>>a;
	cout<<"\n请输入宽";
	cin>>b;
	cout<<"\n请输入高";
	cin>>h;
	cout<<"\n体积："<<a*b*h<<"\n表面积："<<2*(a*b+a*h+b*h); 
}
