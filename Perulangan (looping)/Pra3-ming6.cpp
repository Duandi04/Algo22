#include <iostream>
using namespace std;

int main(){
	char jawab;
	int angka;
	
	do {
		cout << "Masukkan angka : ";
		cin >> angka;
		cout << "angka " << angka << " adalah ";
		cout << ( (angka % 2 == 1) ? "ganjil \n" : "genap \n" );
		cout << endl << "coba lagi (Y/T) ? "; cin >> jawab;
	}
	while (jawab == 'y' || jawab == 'Y');
	cout << "terimakasih \n";
	
	return 0;
	
}
