#include<iostream>
using namespace std;

int main() {
	int pil, a, b,c;
	cout<<"KALKULATOR CANGGIH"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Modulus"<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"Masukkan pilihan anda (1-5): "; cin>>pil;
	switch (pil) {
		case 1: cout<<"Masukkan angka pertama: "; cin>>a;
				cout<<"Masukkan angka kedua: "; cin>>b;
				c = a+b;
				cout<<"Hasil penjumlahan: "<<c<<endl;
		break;
		case 2: cout<<"Masukkan angka pertama: "; cin>>a;
				cout<<"Masukkan angka kedua: "; cin>>b;
				c = a-b;
				cout<<"Hasil pengurangan: "<<c<<endl;
		break;
		case 3: cout<<"Masukkan angka pertama: "; cin>>a;
				cout<<"Masukkan angka kedua: "; cin>>b;
				c = a*b;
				cout<<"Hasil perkalian: "<<c<<endl;
		break;
		case 4: cout<<"Masukkan angka pertama: "; cin>>a;
				cout<<"Masukkan angka kedua: "; cin>>b;
				c = a/b;
				cout<<"Hasil pembagian: "<<c<<endl;
		break;
		case 5: cout<<"Masukkan angka pertama: "; cin>>a;
				cout<<"Masukkan angka kedua: "; cin>>b;
				c = a%b;
				cout<<"Hasil modulus: "<<c<<endl;
		break;
		default: cout<<"masih tahap pengembangan, pilih lainnya"<<endl;
	}
	
}
