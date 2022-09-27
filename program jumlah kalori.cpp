#include <iostream>
using namespace std;

int main(){
	int umur, x, peserta, tahun[999];
	string nama[999], status[999];
	char bmr_ulang, jeniskelamin;
	double berat, tinggi, bmr;

	cout<<"Selamat Datang Di Kalkulator !"<<endl;
	cout<<"Masukan Banyak Pengguna : ";
	cin>>x;
	cout<<endl;

	for (int i=0; i<x; i++) {
		cout<<endl;

		cout<<"Data Ke-"<<i+1<<endl;
		cout<<"Masukan Nama = ";
		cin>>nama[i];
		cout<<"Masukan Tahun Lahir = ";
		cin>>tahun[i];

		if (tahun[i]<=2022) {
			status[i]="Diverifikasi menggunakan program ini";
		} else {
			status[i]="Tidak diverifikasi menggunakan program ini";
		}
	}
	do{
		cout<<"Jenis Kelamin Anda (L / P):";
		cin>>jeniskelamin;

		while (jeniskelamin != 'p' && jeniskelamin != 'p' && jeniskelamin != 'L' && jeniskelamin != 'l'){
			cout<<"Tidak ada inputan. Silakan masukan inputan dengan benar (L / P) :";
			cin>>jeniskelamin;
		}

	if (jeniskelamin == 'P'|| jeniskelamin == 'p'){
		cout<<"Berat Badan Anda (kg) : ";
		cin>>berat;
		cout<<"Tinggi Badan Anda (cm) : ";
		cin>>tinggi;
		cout<<"Umur Anda : ";
		cin>>umur;
		bmr = 655 + (4.3 * berat) + (4.7 * tinggi) - (4.7 * umur);
		cout<<"Anda membutuhkan "<<bmr<<"kalori untul menjaga berat badannya";
		cout.precision(3);
		cout<<"Ini mengenai "<<bmr / 230<<" badan ideal!"<<endl;
		cout<<"Apakah anda ingin mencoba program bmr ini? (Y/T): ";
		cin>>bmr_ulang;
	} else if(jeniskelamin == 'L'|| jeniskelamin == 'l'){
		cout<<"Berat Badan Anda (kg) : ";
		cin>>berat;
		cout<<"Tinggi Badan Anda (cm) : ";
		cin>>tinggi;
		cout<<"Umur Anda : ";
		cin>>umur;
		bmr = 66 + (6.3 * berat) + (12.9 * tinggi) - (6.8 * umur);
		cout<<"Anda membutuhkan "<<bmr<<"kalori untul menjaga berat badannya";
		cout.precision(3);
		cout<<"Ini mengenai "<<bmr / 230<<" badan ideal!"<<endl;
		cout<<"Apakah anda ingin mencoba program bmr ini? (Y/T): ";
		cin>>bmr_ulang;
	}
	}
	while(bmr_ulang == 'Y' || 'y');
	return 0;
}

