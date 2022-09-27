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
	{
		cout<<"berat badan mahasiswa ke- "<<i<<" = "; cin>>bb[i];
		cout<<"masukan nama mahasisawa : ";cin>>nama;
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

	cout<<endl;
	cout<<"====================================="<<endl;
	cout<<"      Patokan minimal & maksimal     "<<endl;
	cout<<"====================================="<<endl;
	cout<<"tinggi badan (meter)  = "<<tb<<endl;
	bmin = min*tb*tb;
	cout<<"berat badan ideal minimal      = "<<bmin<<endl;
	bmaks =maks*tb*tb;
	cout<<"berat badan ideal maksimal     = "<<bmaks<<endl;
	cout<<"========================================="<<endl;
	cout<<endl;
	}
	do{
		cout<<"terimakasih sudah menghitung berat badan !"<<endl;
		t++;
	}while (t<2);
	return 0;
} 

