#include<iostream>
using namespace std;

int main(){
	int umur;
	string st, pr;
	cout<<"input umur anda= "; cin>>umur;
	switch (umur){
		case 1 ... 3: st="batita"; pr= "lagi lucu2 nya"; break;
		case 4 ... 5: st="balita"; pr= "masih lucu"; break;
		
	}
cout<<st<<endl<<pr<<endl;
}

