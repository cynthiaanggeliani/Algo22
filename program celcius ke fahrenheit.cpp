#include<iostream>
using namespace std;

int main() {
	string nama;
	float suhu, fahrenheit;
	
	cout<<"UBAH SUHU DAERAH ANDA (CELCIUS TO FAHRENHEIT)"<<endl;
	cout<<"-----------------------------------------------"<<endl;
	
	cout<<"Masukkan nama daerah anda= ";cin>>nama;
	cout<<"Masukkan suhu daerah anda saat ini (celcius)= ";cin>>suhu;
	( fahrenheit = suhu * 1.8 + 32 );
	cout<<"Suhu daerah "<<nama<< " saat ini ialah ";
	cout<<fahrenheit;
	cout<<" derajat dalam fahrenheit";
	return 0;
		
}

