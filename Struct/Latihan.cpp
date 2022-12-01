#include <iostream>
using namespace std;

struct Mahasiswa{
	int nim, nilai;
	char nama[25], Matkul[30];
	char NilaiHuruf;
};

int main(){
	Mahasiswa Mhs[5];
	int i;
	for (i = 0; i < 3; i++){
		cout << "============================= \n";
		cout << "Masukkan Data Mahasiswa " << i+1 << endl;
		cout << "============================= \n";
		cout << "Nim    : "; cin >> Mhs[i].nim;
		cout << "Nama   : "; cin >> Mhs[i].nama;
		cout << "Matkul : "; cin >> Mhs[i].Matkul;
		cout << "Nilai : "; cin >> Mhs[i].nilai;
		cout << endl;
	}
	
	for (i = 0; i < 3; i++){
		
		switch (Mhs[i].nilai){
		case 0 ... 20 : Mhs[i].NilaiHuruf = 'E'; break;
		case 21 ... 40 : Mhs[i].NilaiHuruf = 'D'; break;
		case 41 ... 60 : Mhs[i].NilaiHuruf = 'C'; break;
		case 61 ... 80 : Mhs[i].NilaiHuruf = 'B'; break;
		case 81 ... 100 : Mhs[i].NilaiHuruf = 'A'; break;
		default : Mhs[i].NilaiHuruf = 'O'; break;
		}
		
		cout << "\n============================= \n";
		cout << "Data mahasiswa " << i + 1;
		cout << "\n\nNIM     : " << Mhs[i].nim;
		cout << "\nNama    : " << Mhs[i].nama;
		cout << "\nMatkul  : " << Mhs[i].Matkul;
		cout << "\nNilai    : " << Mhs[i].nilai;
		cout << "\nNilai Huruf : " << Mhs[i].NilaiHuruf << endl;
	}
}
