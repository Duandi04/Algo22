#include <iostream>
using namespace std;

int main(){
	string nama; int tgs, UTS, UAS, total;
	cout << "Masukkan nama anda   : "; cin >> nama;
	cout << "Masukkan Nilai Tugas : "; cin >> tgs;
	cout << "Masukkan Nilai UTS   : "; cin >> UTS;
	cout << "Masukkan Nilai UAS   : "; cin >> UAS;
	cout << "------------------- \n \n";
	cout << "Selamat " << nama << endl;
	total = (tgs + UTS + UAS)/3;
	cout << "Nilai anda (Tugas + UTS + UAS)/3 : " << total <<endl ;
	
	switch (total){
		case 0 ... 20 : {
			cout << "Nilai huruf : E \n";
			cout << "Predikat	 : Sangat Kurang \n";
			break;
		}
		case 21 ... 40 : {
			cout << "Nilai huruf : D \n";
			cout << "Predikat    : Kurang \n";
			break;
		}
		case 41 ... 60 : {
			cout << "Nilai huruf : C \n";
			cout << "Predikat    : Cukup \n"; 
			break;
		}
		case 61 ... 80 : {
			cout << "Nilai huruf : B \n";
			cout << "Predikat 	 : Baik \n";
			break;
		}
		case 81 ... 100 : {
			cout << "Nilai huruf : A \n";
			cout << "Predikat    : Sangat Baik \n";
			break;
		}
		default : cout << "Nilaimu ada error, sehingga tidak bisa diproses \n";
		break;
	}
}
