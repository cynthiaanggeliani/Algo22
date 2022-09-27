#include <iostream>
using namespace std ;

#define tinggi 10
#define garis "---------"

int main () {
	
	double tinggi_badan,berat_badan;
	
	cout<<"Berat badan ideal"<<endl;
	cout<<garis<<endl;
	
	cout<<"Masukkan tinggi badan: ";cin>>tinggi_badan;
	
	berat_badan =  (tinggi_badan - 100);
	
	cout<<"Berat badan ideal: "<<berat_badan;
	
	return 0;
}
