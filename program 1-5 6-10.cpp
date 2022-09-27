#include<iostream>
using namespace std;

int main() {
	int a;
	cout<<"Masukkan nilai a= "; cin>>a;
		switch (a){ 
		case 1 ... 5: cout<<"1 sampai 5";break;
		case 6 ... 10: cout<<"6 sampai 10";break;
		default : cout<<"bukan keduanya";
		}
		
}
