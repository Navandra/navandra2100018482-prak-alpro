#include <iostream>
using namespace std;

class krs {
	friend ostream& operator<<(ostream&, krs&);
	friend istream& operator>>(istream&, krs&);
	
	public:
		void krs_mahasiswa();
		void proses_sks(int,int);
		void output();
	private:
		int tot_sks;
		int total;
		int sks;
		int biaya_sks;
		char matkul[100];
		char nama[50];
		int nim;
		int n;
};
void krs::krs_mahasiswa(){
	cout<<"====================================\n";
	cout<<"NAMA MAHASISWA : ";
	cin.getline(nama, sizeof(nama));
	cout<<"NIM : ";cin>>nim;	
}
void krs::proses_sks(int sks, int biaya_sks){
	int total=biaya_sks;
	if(sks==0){
		cout<<"Jumlah Biaya Total: "<<total<<endl;
		cout<<"====================================\n";
		return;
	}
	else{
		cout<<"====================================\n";
		cout<<"MATA KULIAH "<<": ";cin>>matkul;
		cout<<"SKS: ";cin>>n;
		tot_sks=n*102600;
		cout<<"Total Biaya SKS: "<<tot_sks<<endl;
		total=tot_sks;
		proses_sks(sks-1,biaya_sks+tot_sks);
	}
}
int main(){
	int sks;
	krs m;
	m.krs_mahasiswa();
	cout<<"TOTAL SKS: ";cin>>sks;
	m.proses_sks(sks,0);
}
