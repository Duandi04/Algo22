#include <iostream>
using namespace std;

struct mahasiswa{
	string nama;
	string prodi;
	float ipk;
};

int main(){
	mahasiswa mhs;
	
	mhs.nama = "Yodi";
	mhs.prodi = "SI";
	mhs.ipk = 4.0;
	cout << "---------------------" << endl;
	cout << "Nama Anda : " << mhs.nama << endl;
	cout << "Prodi Anda : " << mhs.prodi << endl;
	cout << "IPK anda : " << mhs.ipk << endl;
}
