#include <iostream>
using namespace std;

void BBIwanita(float tinggi){
	double BBI = ((tinggi - 100) - ((tinggi - 100)*0.15));
	cout << "Berat badan ideal anda : " << BBI << " kg" << endl;
}

void BBIpria(float tinggi){
	double BBI = ((tinggi - 100)-((tinggi - 100)*0.1));
	cout << "Berat badan ideal anda : "<< BBI << " kg" << endl;
}

int main(){
	char pil;
	float tinggi;
	cout << "Aplikasi Mencari Berat Badan Ideal \n";
	cout << "----------------------------------- \n\n";
	
	cout << "Masukkan tinggi badan (cm) : "; cin >> tinggi;
	cout << "jenis kelamin anda (P/L) : "; cin >> pil;

	if (pil == 'P' || pil == 'p'){
		BBIwanita(tinggi);
	} else if (pil == 'L' || pil == 'l'){
		BBIpria(tinggi);
	} else {
		cout << "Error" << endl;
	}
	return 0;
}
