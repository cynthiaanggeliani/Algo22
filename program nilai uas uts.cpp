#include <iostream>
using namespace std;

int main (){
	string nama, kls;
	double uts, uas, nilai;
	
	cout<<"masukkan nama anda= ";cin>>nama;
	cout<<"masukkan kelas anda= ";cin>>kls;
	cout<<"masukkan nilai uts= "; cin>>uts;
	cout<<"masukkan nilai uas= "; cin>>uas;
	
	nilai = (uts+uas) / 2;
	cout<<nama<<" nilai anda ";
	cout<<nilai;
	cout<<", dengan ini anda dinyatakan ";
	( nilai>= 60) ? (cout<<"lulus") : (cout<<"tidak lulus");
	return 0;	
}
