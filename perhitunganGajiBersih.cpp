#include <iostream>
using namespace std;

int main(){ 
	float ac, sa, gtot, za, bb,la, jam,pa;
	cout<<"   PROGRAM GAJI BBERSIH KARYAWAN"<<endl;
	cout<<""<<endl;
	cout<<"Lama Kerja Karyawan    : "; cin>> ac;
	cout<<"Gaji Perjam Karyawan   : "; cin>>za;

if (ac>40){
	system("cls");
	cout<<"   PROGRAM GAJI BERSIH KARYAWAN"<<endl;
	cout<<"     KARYAWAN MENDAPAT LEMBUR"<<endl;
	cout<<""<<endl;
	sa=ac-40;
	jam=sa*1.5;
	la=za*jam;
	pa=la*0.15;
	gtot=za-pa;
	bb=gtot-(ac*40)+((za-40)*ac*1.5);
	
		cout<<"Lama Kerja Karyawan Dalam Seminggu          : "<<ac<<" Jam"<<endl;
		cout<<"Total Lembur Karyawan                       : "<<sa<<" (dalam seminggu)"<<endl;
		cout<<"Gaji Perjam Yang Karyawan Terima            : Rp  "<<za<<endl;
		cout<<"Upah Lembur Yang Diterima Karyawan          : Rp  "<<la<<endl;
		cout<<"Pajak Yang Ditanggung Karyawan              : Rp  "<<pa<<endl;
		cout<<"Total Gaji Bersih Yang Diterima Karyawan    : Rp  "<<bb<<endl;

}

	else {
		system,("cls");
		cout<<""<<endl;
		cout<<"   PROGRAM GAJI BBERSIH KARYAWAN"<<endl;
		cout<<"   KARYAWAN TIDAK MENDAPAT LEMBUR"<<endl;
		cout<<""<<endl;
		gtot=za*40;
		pa=gtot*0.15;
		bb=gtot-pa;
		
		cout<<"Lama Kerja Karyawan Dalam Seminggu          : "<<ac<<" Jam"<<endl;
		cout<<"Total Lembur Karyawan                       : "<<sa<<" (dalam seminggu)"<<endl;
		cout<<"Gaji Perjam Yang Karyawan Terima            : Rp  "<<za<<endl;
		cout<<"Upah Lembur Yang Diterima Karyawan          : Rp  "<<la<<endl;
		cout<<"Pajak Yang Ditanggung Karyawan              : Rp  "<<pa<<endl;
		cout<<"Total Gaji Bersih Yang Diterima Karyawan    : Rp  "<<bb<<endl;
		
	}
}
