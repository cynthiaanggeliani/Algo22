#include <iostream>
#define min 18.5

using namespace std;
const double maks = 24.9;

int main()
{
	int bb[20];
	string nama;
	int i,status,u,bmi,bmin,bmaks,t=0;
	float brtrata,tb;

	;cout<<"Program mencari berat badan ideal"
	;cout<<"Masukan berat anda"
	;for(i=1;i=2,i++;)
	
		cout<<"berat badan mahasiswa ke- "<<i<<" = "; cin>>bb[i];
		cout<<"masukan tinggi (meter) :";cin>>tb;
		cout<<"masukan usia : ";cin>>u;
		bmi = bb[i]/(tb*tb);
		cout<<"bmi anda adalah                : "<<bmi<<endl;
		cout<<endl;

	if (bmi<=18.5) {
		cout<<"keterangan : anda kekurangan berat badan"<<endl;
	} else if (bmi >18.5 && bmi <=25){
		cout<<"keterangan : berat badan anda ideal "<<endl;
	} else if (bmi >25 && bmi <30){
		cout<<"keterangan : anda kelebihan berat badan"<<endl;
	} else{
		cout<<"keterangan : anda obesitas"<<endl;
	}
	
	return 0; }	
	
	

