#include"vol.h"
int main(){
	while(1){
		int type;
		cout<<"\n\n��������ͼ��������������������������֣�\n";
		cout<<"1������������\n";
		cout<<"2�����㳤����\n";
		cout<<"3������Բ��\n";
		cout<<"4������Բ׶\n";
		cout<<"5����������\n";
		cout<<"6��������������\n";
		cout<<"0���˳�����\n";
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
