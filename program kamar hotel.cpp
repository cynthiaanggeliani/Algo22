#include <iostream>
using namespace std;

int main(){
string pilihan,namakamar,nama; 
char sarapan;
int kamar,lamainap; 
long harga,total,totalbiaya; 
const long hargasarapan = 50000;

cout<<"hotel bahagia"<<endl;
cout<<"----------------------"<<endl;
cout<<"1. VVIP (1000000)"<<endl;
cout<<"2. VIP (750000)"<<endl;
cout<<"3. STANDARD (500000) "<<endl;
cout<<"4. MELATI (250000)"<<endl;
cout<<"---------------------------"<<endl;

cout<<"Masukan Nama Anda: ";getline(cin,nama);
cout<<"Jenis Kamar (1-4): ";cin>>kamar;

switch(kamar){
	case 1 :
		harga=1000000;
		namakamar="VVIP";
		break;
	case 2:
		harga=750000;
		namakamar="VIP";
		break;
	case 3:
		harga=500000;
		namakamar="STANDARD";
		break;
	case 4:
		harga=250000;
		namakamar="MELATI";
		break;
		default: pilihan="nama data salah";
	}
	cout<<"Lama Inap : ";cin>>lamainap;
	total = lamainap * harga;
	
	cout<<"Sarapan (y/n): ";cin>>sarapan;
	if (sarapan == 'y'){
		totalbiaya = (lamainap * 50000) + total;
	} else if (sarapan == 'n'){
		totalbiaya = total;
	}
	
	cout<<"---------------------------"<<endl;
	cout<<"Terima Kasih "<<nama<<endl;
	cout<<"Kamar Anda : "<<namakamar<<endl;
	cout<<"Lama Inap : "<<lamainap<<endl;
	cout<<"Total Bayar : "<<totalbiaya<<endl;
}
