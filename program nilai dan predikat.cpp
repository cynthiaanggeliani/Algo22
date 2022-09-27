#include<iostream>
using namespace std;

int main(){
	int tugas, uas, uts, nilai;
	string nama, predikat;
	char huruf;
	
	cout<<"Masukkan nama anda	= ";cin>>nama;
	cout<<"Masukkan nilai tugas	= ";cin>>tugas;
	cout<<"Masukkan nilai UTS	= ";cin>>uts;
	cout<<"Masukkan nilai UAS	= "; cin>>uas;
	cout<<"------------------------------"<<endl; 
	(nilai = (tugas + uts + uas ) / 3);
	
	cout<<"Selamat "<<nama<<endl;
	cout<<"Nilai anda "<<nilai<<endl;
	
	switch (nilai){
		case 0 ... 20: cout<<"Nilai Huruf : E"<<endl;
			cout<<"Predikat : SANGAT KURANG"<<endl;
			break;
		case 21 ... 40: cout<<"Nilai Huruf : D"<<endl;
			cout<<"Predikat : KURANG"<<endl;
			break;
		case 41 ... 60: cout<<"Nilai Huruf : C"<<endl;
			cout<<"Predikat : CUKUP"<<endl;
			break;
		case 61 ... 80: cout<<"Nilai Huruf : B"<<endl;
			cout<<"Predikat : BAIK"<<endl;
			break;
		case 81 ... 100: cout<<"Nilai Huruf : A"<<endl;
			cout<<"Predikat : SANGAT BAIK"<<endl;
			break;
	}
	
}
