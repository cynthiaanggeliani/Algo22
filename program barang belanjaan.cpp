#include <iostream>
using namespace std;

int main () {
	string np, nb;
	int jb;
	long hb, total;
	
	cout<<"masukkan nama pelanggan: "; cin>>np;
	cout<<"masukkan nama barang: "; cin>>nb;
	cout<<"masukkan jumlah beli: "; cin>>jb;
	cout<<"masukkan harga barang: ";cin>>hb;
	cout<<"------------------------------------"<<endl;
	cout<<"banyak yang anda beli adalah "<<nb<<endl;
	cout<<"dengan harga "<<hb<<endl;
	total = hb * jb ;
	cout<< "total bayar "<<total<<endl;
	(total > 500000) ? (cout<<"bonus payung"<<endl):
		(cout<<"bonus:terima kasih"<<endl);
	
	return 0;
}
