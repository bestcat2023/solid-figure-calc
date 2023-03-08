#include"vol.h"
void yzi(){
	cout<<"\n请输入半径";
	ll r,h;
	cin>>r;
	cout<<"\n请输入高";
	cin>>h;
	ll sd=pi*r*r,cd=pi*r*2,l=sqrt(r*r+h*h);
	cout<<"\n母线："<<l<<"\n底面周长："<<cd<<"\n底面积："<<sd<<"\n体积："<<sd*h/3<<"\n表面积："<<sd+pi*r*l; 
}
