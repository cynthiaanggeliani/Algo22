#include <iostream>
using namespace std;

int main (){
	int umur;
	string nama; 
	
	cout<<"masukkan nama anda= "; cin>>nama;
	cout<<"masukkan umur anda= "; cin>>umur;
	cout<<"hai "<<nama<<" anda ";
	( umur <= 17) ? (cout<<" belum dewasa ") : (cout<<" dewasa ");
}
