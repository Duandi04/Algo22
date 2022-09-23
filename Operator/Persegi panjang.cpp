#include <iostream>
using namespace std;

int main (){
	int p,l;
	cout << "Aplikasi mencari luas persegi panjang : \n";
	cout << endl;
	cout << "Masukkan nilai panjang : "; cin >> p;
	cout << "masukkan nilai lebar : "; cin >> l;
	cout << "-------------------------------- \n";
	int L = p*l;
	cout << "luas dari persegi dengan panjang " << p << " dan lebar " << l << " adalah : " << L <<endl;
	return 0;
}
