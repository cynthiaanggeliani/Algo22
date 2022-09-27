#include <iostream>
using namespace std;

int main() {
	int umur;
	string nama, prodi, matkulsuka;
	
	cout<<"masukkan nama anda= "; cin>>nama;
	cout<<"masukkan umur anda= "; cin>>umur;
	cout<<"masukkan prodi anda= "; cin>>prodi;
	cout<<"nama mata kuliah yang paling disukai= "; cin>>matkulsuka;
	cout<<"-------------------------"<<endl;
	cout<<"saya "<<nama<< " umur "<<umur<< " tahun dari prodi "<<prodi<< " dengan ini menyatakan: suka sekali dengan mata kuliah "<<matkulsuka;
	return 0;
	
}
