#include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"PROGRAM MENENTUKAN JENIS ANGKA"<<endl;
	cout<<""<<endl;
	cout<<"Input Angka : ";cin>>a;
	cout<<""<<endl;
	if (a < 0)
	{
		cout<<"yang anda input adalah angka ganjil"<<endl;
	}
	
	else if (a>0)
	{
		cout<<"yang anda input adalah angka genap"<<endl;
	}
	else if (a==0)
	
		cout<<"yang anda input adalah bilangan nol "<<endl;

	return 0;
}
