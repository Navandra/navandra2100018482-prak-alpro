#include <iostream>
using namespace std;

class Finalis{
	public:
		void input();
		void output();
		
	private:	
		int x;
  		int nim [5];
  		string nama [5];
  		int *pInt=nim;
  		string *qInt=nama;
};

void Finalis::input(){
	cout << "Masukan jumlah data :";
    cin >> x;
    for (int i=0; i<x; i++)
    {
        cout<<"Masukkan NIM : ";
        cin>>nim[i];
        cin.ignore();
        cout<<"Masukkan NAMA: ";
        getline(cin, nama[i]);
        cout<<endl;
    }
    cout<<endl;
}

void Finalis::output(){
	cout<<"==================================\n";
    cout<<"Daftar Finalis Mahasiswa : "<<endl;
    cout<<"NO  |NIM|    |NAMA|"<<endl;
    for (int n=0; n<x; n++)
    {
        cout<<n+1<<". "<<*(pInt)<<" ";
        pInt++;
        cout<<*(qInt)<<endl;
        qInt++;
  
  }
}
int main(){
	Finalis X;
	X.input();
	X.output();
}
