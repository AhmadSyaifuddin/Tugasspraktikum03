#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int o,p,selisih;
	cout<<" Input Bilangan x : "; cin>>o;
	cout<<" Input Bilangan y : "; cin>>p;

if (o>p){
	selisih=o-p;
	
	cout<<"Selisih Nilai X dan Y yaitu "<<selisih;
}

else if (p>o){
	selisih=p-o;

	cout<<"Selisih Nilai Y dan X yaitu "<<selisih;
}
	return 0;
}
