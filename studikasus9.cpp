#include <iostream>
#include <iomanip>
using namespace std;
class buku{
	public:
		void input();
		void proses();
		void output();
	private:
		int buku1[24];
		int buku2[12][12];
		int tmp,k;
		int j=0;
		int i=0;
		int n=24;
};

void buku::input(){
	for(int i=1;i<=n;i++){
		cout<<"Masukkan nomor buku ke-"<<i<<" = ";
		cin>>buku1[i];
	}
	cout<<"\nBuku sebelum diurutkan : \n";
	for(int j=1; j<=n; j++){
		cout<<"	"<<buku1[j];
	}
	cout<<"\n+==================================================+\n";
}

void buku::proses(){
	for(int i=j;i<=n;i++){
		for(int j=i; j<=n; j++){
			if(buku1[i]>buku1[i]){
				tmp=buku1[j];
				buku1[i]=tmp;
			}
		}
	}
	
	k=1;
	for(int i=1; i<=4; i++){
		for(int j=1; j<=6; j++){
			buku2[i][j]=buku1[k];
			k++;
		}
	}
};

void buku::output(){
	cout<<"Buku setelah diurutkan: "<<endl;
	for(int i=1; i<=n; i++){
		cout<<"	"<<buku1[i];
	}
	cout<<"\n+===================================================+\n";
	
	cout<<"\nSusunan setelah diurutkan : \n";
	for(int i=1; i<=4; i++){
		for(int j=1; j<=6; j++){
			cout<<"\t"<<buku2[i][j]<<" ";
		}
		cout<<endl;
	}
};

int main(){
	buku x;
	x.input();
	cout<<endl;
	x.proses();
	cout<<endl;
	x.output();
	cout<<endl;
	return 0;
}
