#include <iostream>
using namespace std;

struct mahasiswa{
	string nim, nama, prodi;
	float ipk;
} mhs[5];

int main(){
	int jum;
	
	cout << "aplikasi data mahasiswa "<< endl;
	cout << "---------------------------\n";
	cout << "Data mahasiswa yang ingin di masukkan (max 5) : "; cin >> jum;
	cout << endl;
	
	for (int i = 0; i < jum; i++){
		cout << "Data mahasiswa ke " << i+1 << endl;
		cout << "Masukkan Nama : "; cin >> mhs[i].nama;
		cout << "Masukkan NIM : "; cin >> mhs[i].nim;
		cout << "Masukkan Prodi : "; cin >> mhs[i].prodi;
		cout << "Berapa nilai IPK : "; cin >> mhs[i].ipk;
		cout << endl;
	}
	system ("cls");
	
	cout << "Data Mahasiswa yang telah dimasukkan sejumlah " << jum <<" : \n";
	cout << "----------------------------\n";
	
	for (int i = 0; i < jum; i++){
		cout << "Data Mahasiswa ke " << i + 1 << endl;
		cout << "Nama : " << mhs[i].nama << endl;
		cout << "NIM : " << mhs[i].nim << endl;
		cout << "Program Studi : " << mhs[i].prodi << endl;
		cout << "IPK : " << mhs[i].ipk << endl << endl;
	}
}
