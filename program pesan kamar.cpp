#include<iostream>
using namespace std;

int main(){
	string nama;
	float harga, lanap;
	char jenkam, sarapan;
	
	cout<<"Masukkan nama anda= ";cin>>nama;
	cout<<"---------------------------"<<endl;
	cout<<"JENIS KAMAR DAN HARGA NYA PER MALAM"<<endl;
	cout<<"1. VVIP ( Rp 1.000.000,-)"<<endl;
	cout<<"2. VIP ( Rp 750.000,-)"<<endl;
	cout<<"3. Standard ( Rp 500.000,-)"<<endl;
	cout<<"4. Melati ( Rp 250.000,-)"<<endl;

	cout<<"Masukkan jenis kamar= ";cin>>jenkam;
	cout<<endl;
	cout<<"Masukkan lama inap= ";cin>>lanap;
	cout<<endl;
	cout<<"Dengan sarapan (y/n)= ";cin>>sarapan;
	if ( sarapan == 'y' || sarapan == 'Y'); {
		cout<<"Harga sarapan Rp 50.000,-/ hari";} 
	else {
			cout<<"Tidak include sarapan";
	 	}
	cout<<endl;
	
}

