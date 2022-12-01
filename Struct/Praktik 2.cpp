#include <iostream>
using namespace std;

struct mahasiswa{
	int nim;
	char nama[25];
	char alamat[4];
	int umur;
};

int main(){
	mahasiswa Mhs[5];
	int i;
	for (i = 0; i < 2; i++){
		cout << "Nim    : "; cin >> Mhs[i].nim;
		cout << "Nama   : "; cin >> Mhs[i].nama;
		cout << "Alamat : "; cin >> Mhs[i].alamat;
		cout << "Umur   : "; cin >> Mhs[i].umur;
		cout << endl;
	}
	for(i=0; i<2; i++){
		cout << "\n\nNIM     : " << Mhs[i].nim;
		cout << "\nNama    : " << Mhs[i].nama;
		cout << "\nAlamat  : " << Mhs[i].alamat;
		cout << "\nUmur    : " << Mhs[i].umur;
	}
	
	return 0;
}
