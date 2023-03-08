#include"vol.h"
int main(){
	while(1){
		int type;
		cout<<"\n\n各大立体图形体积计算器，请输入以下数字：\n";
		cout<<"1：计算正方体\n";
		cout<<"2：计算长方体\n";
		cout<<"3：计算圆柱\n";
		cout<<"4：计算圆锥\n";
		cout<<"5：计算球体\n";
		cout<<"6：计算其他柱体\n";
		cout<<"0：退出程序\n";
		cin>>type;
		if(type==0){
			return 0;
		} 
		else{
			cal(type);
		}
	}
	return 0;
}
