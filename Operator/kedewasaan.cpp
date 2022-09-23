#include <iostream>
using namespace std; //untuk mengoperasikan fungsi standar pada c++

int main (){
	string nama; int umur;
	cout << "Menentukan kedewasaan dengan input umur \n";
	cout << "Masukkan nama anda : "; cin >> nama;
	cout << "Masukkan umur : "; cin >> umur;
	(umur > 17) ? (cout << "selamat "<< nama << " anda sudah dewasa") : (cout << "maaf ya "<< nama << " anda masih anak-anak");
	return 0;
}
