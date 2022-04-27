#include <iostream>
using namespace std;

class dosen{
	public :
		void input();
		void proses();
		void output();
	private :
		int i,n, data[50],minimum,maksimum,jumlah;
		float rata;
		string nama,matkul;
};

void dosen::input(){
	cout<<"Masukan nama Dosen : "; 
  getline(cin,nama);
	cout<<"Masukan Mata Kuliah : "; getline(cin,matkul);
	cout<<"Masukan banyaknya data : "; cin>>n;
}

void dosen::proses(){
	for (i=0; i<n; i++)
        {
           cout<<"Data ke-"<<i+1<<" = ";
           cin>>data[i];
           jumlah = jumlah + data[i];
        }
    rata=jumlah/n;
    
	maksimum = data[0];
	for(i = 0; i < n; i++) {
    	if (data[i] > maksimum)  {
			maksimum = data[i];
    	}
	}
	
	minimum = data[0];
	for(i = 0; i < n; i++) {
		if (data[i] < minimum)  {
			minimum = data[i];
    	}
	}
}

void dosen::output(){
	cout << "Nilai Rata-rata = " << rata << endl;
	cout << "Nilai maksimum adalah " << maksimum << endl;
	cout << "Nilai minimum adalah " << minimum << endl;
}

int main(){
	dosen x;
	x.input();
	x.proses();
	x.output();
	return 0;
}
