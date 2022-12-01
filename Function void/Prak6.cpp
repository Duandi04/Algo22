#include <iostream>
using namespace std;

void hitungluassegitiga(double alas, double tinggi){
	double luas = (alas*tinggi)/2;
	cout << "Luas segitiga adalah : " << luas << endl;
}

int main(){
	double alas, tinggi;
	cout << "Masukkan Alas : "; cin >> alas;
	cout << "Masukkan Tinggi : "; cin >> tinggi;
	hitungluassegitiga(alas, tinggi);
	return 0;
}
