#include <iostream>
using namespace std;

class uang {
friend ostream& operator<<(ostream&, uang&);
friend istream& operator>>(istream&, uang&);
	public:
		void pemasukan();
		void pengeluaran();
		void uang_saat_ini();
		
	private:
		int uangsaku;
		int keluar;
		int bulan;
		int kali;
		int total;
		int sisa;
		int totalkeluar;
		string untuk;
};
void uang::pemasukan(){
	cout<<"Uang saku bulanan anda adalah :"; cin>>uangsaku;
	total=uangsaku;
}
void uang::pengeluaran(){
	cout<<"PENGELUARAN"<<endl;
	cout<<"Dalam berapa bulan : "; cin>>bulan;
	total=uangsaku*bulan;
	for(int i=1;i<=bulan;i++){
		cout<<"Berapa kali pengeluaran bulan ke "<<i<<" : "; cin>>kali; 
		for(int j=1;j<=kali;j++){
			cout<<"Keluar berapa : "; cin>>keluar;
			total=total-keluar;
			cout<<"Untuk apa : "; cin>>untuk;
		}
	}
}
void uang::uang_saat_ini(){
	sisa=total;
	cout<<"Uang Tabungan dalam "<<bulan<<" bulan terakhir saat ini : "<<sisa;
}

int main(){
	uang saya;
	saya.pemasukan();
	saya.pengeluaran();
	saya.uang_saat_ini();
	return 0;
}
