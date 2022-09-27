#include <iostream>
using namespace std;

int main () {
	string nama;
	
	cout<<"Masukkan nama anda = "; 
	getline (cin, nama); // pakai getline agar bisa menampung banyak kata 
	cout<<"selamat "<<nama<<" anda keren";
	
	return 0;
}
