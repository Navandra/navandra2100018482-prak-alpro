#include<iostream> 
using namespace std;
int main() 
{
	int mn,i,j,jmlh,krng,bg,kli;
	
	cout<< "Silahkan pilih menu yang tersedia" <<endl;
	cout<< "1) Penjumlahan" <<endl;
	cout<< "2) Pengurangan" <<endl;
	cout<< "3) Pembagian" <<endl;
	cout<< "4) Perkalian" <<endl;
	cout<< "0) Keluar" <<endl;
	cout<< endl;
	cout<< "Masukkan Pilihan Menu = ";
	cin >> mn;
	
	
	switch (mn){
		case 1:
		cout<< "Masukkan bilangan 1 = ";
		cin >> i;
		cout<< "Masukkan bilangan 2 = ";
		cin >> j;
		cout<<endl;
		cout<<"Hasil dari Penjumlahan " <<i <<" + " <<j;
		jmlh=i+j;
		cout<<" = "<<jmlh;
		break;
		
		case 2:
		cout<< "Masukkan bilangan 1 = ";
		cin >> i;
		cout<< "Masukkan bilangan 2 = ";
		cin >> j;
		cout<<endl;
		cout<<"Hasil dari Pengurangan " <<i <<" - " <<j;
		krng=i-j;
		cout<<" = "<<krng;
		break;
		
		case 3:
		cout<< "Masukkan bilangan 1 = ";
		cin >> i;
		cout<< "Masukkan bilangan 2 = ";
		cin >> j;
		cout<<endl;
		cout<<"Hasil dari Pembagian " <<i <<" / " <<j;
		bg=i/j;
		cout<<" = "<<bg;
		break;
		
		case 4:
		cout<< "Masukkan bilangan 1 = ";
		cin >> i;
		cout<< "Masukkan bilangan 2 = ";
		cin >> j;
		cout<<endl;
		cout<<"Hasil dari Perkalian " <<i <<" * " <<j;
		kli=i*j;
		cout<<" = "<<kli;
		break;
		}
		
	}
	
	
