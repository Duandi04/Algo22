#include <iostream>
using namespace std;

int main(){
	string nama; int uts, uas, Nilai;
	cout << "menetukan kelulusan dengan nilai uts dan uas \n";
	cout << "Masukkan Nama anda : "; cin>> nama;
	cout << "masukkan nilai uts : "; cin >> uts;
	cout << "masukkan nilai uas : "; cin >> uas;
	cout << "------------------------------------ \n";
	Nilai = (uts + uas)/2 ;
	cout << "Total nilai anda adalah : "<<uts + uas << endl;
	cout << "Nilai rata-rata anda adalah " << uts << "/2 + " << uas << "/2 = "<< Nilai << "\n";
	(Nilai > 60) ? (cout << "Selamat "<< nama << ", anda lulus") : (cout << "Maaf " << nama << ", anda tidak lulus");
	return 0;
}
