#include"vol.h"
void yzu(){
	cout<<"\n请输入半径";
	ll r,h;
	cin>>r;
	cout<<"\n请输入高";
	cin>>h;
	ll sd=pi*r*r,cd=pi*r*2;
	cout<<"\n底面周长："<<cd<<"\n底面积："<<sd<<"\n体积："<<sd*h<<"\n表面积："<<sd*2+cd*h; 
}
