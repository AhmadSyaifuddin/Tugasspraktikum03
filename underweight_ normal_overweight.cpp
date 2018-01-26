#include <iostream>

using namespace std;

int main() 
{
	cout<<"PROGRAM MENENTUKAN TINGGI BADAN"<<endl;
    float b;
    int t;
    
    cout << "Silahkan masukkan tinggi badan:  "; cin >>t;
    cout << "Silahkan masukkan berat badan : ";
    cin >> b;
    
    if (b<t/2.5)
       cout << "jawaban :Underweight" << endl;
            else if (t/2.3 < b)
                 cout <<  " Overweight" << endl;
            else if (t/2.5 <= b <= t/2.3)
           		 cout << "jawaban : Normal" << endl;
                 
                 
                 return 0;
    }
