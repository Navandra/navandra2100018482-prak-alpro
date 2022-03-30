#include<iostream>
#include<string.h>
#include<iomanip>
#include<fstream>
using namespace std;
struct beli{
	string nama[20];
	int jumlah[10],harga[10];
};
//deklarasi variable
int main(){
	beli barang;
	int bayar,jum_brg,sub_total[50],diskon;
	float total;
	
	ofstream print;
	print.open("Struk.txt");
	//Judul dan pilihan barang
	cout<<"========================================="<<endl;
	cout<<"\tJUAL BELI SPAREPART MOTOR    "<<endl;
	cout<<"========================================="<<endl;
	cout<<"Masukkan Jumlah Barang : ";cin>>jum_brg;
	
	//memasukkan barang yang dipilih
	for(int i=0; i<jum_brg; i++){
		cout<<endl;
		cout<<"Masukkan Barang ke-"<<i+1<<endl;
		cout<<endl;
		
		cout<<"Nama Barang\t: ";cin>>barang.nama[i];
		cout<<"Jumlah\t\t: ";cin>>barang.jumlah[i];
		cout<<"Harga\t\t: ";cin>>barang.harga[i];
		sub_total[i]=barang.jumlah[i]*barang.harga[i];
		total+=sub_total[i];
	}
	cout<<endl;
	cout<<"Struk Belanja Toko Sparepart Motor"<<endl;
	cout<<"========================================="<<endl;
	cout<<"No   Barang    Jumlah     Harga     Sub Total"<<endl;
	for (int i=0;i<jum_brg;i++){
		cout<<i+1<<setw(8)<< barang.nama[i]<<setw(10)<<barang.jumlah[i]<<setw(12)<<barang.harga[i]<<setw(12)<<sub_total[i]<<endl;
	}
	cout<<"========================================="<<endl;
	if (total>=100000){
		diskon=0.10*total;
	}
	else if (total>=50000){
		diskon=0.06;
	}
	else{
		diskon=0;
	}
	cout<<"Jumlah Bayar\t: Rp."<<total<<endl;
	cout<<"Diskon\t\t: Rp."<<diskon<<endl;
	cout<<"Total Bayar\t: Rp."<<total-diskon<<endl;
	cout<<"Bayar\t\t: Rp.";cin>>bayar;
	cout<<"Kembali\t\t: Rp."<<(bayar-(total-diskon))<<endl;
	
	//Cetak
	print<<"Struk Belanja Toko Sparepart Motor"<<endl;
	print<<"========================================="<<endl;
	print<<"No   Barang    Jumlah     Harga     Sub Total"<<endl;
	for (int i=0;i<jum_brg;i++){
	print<<i+1<<setw(8)<< barang.nama[i]<<setw(10)<<barang.jumlah[i]<<setw(12)<<barang.harga[i]<<setw(12)<<sub_total[i]<<endl;}
	print<<"========================================="<<endl;
	print<<"Jumlah Bayar\t: Rp."<<total<<endl;
	print<<"Diskon\t\t: Rp."<<diskon<<endl;
	print<<"Total Bayar\t: Rp."<<total-diskon<<endl;
	print<<"Bayar\t\t: Rp."<<bayar<<endl;
	print<<"Kembali\t\t: Rp."<<(bayar-(total-diskon))<<endl;
}
