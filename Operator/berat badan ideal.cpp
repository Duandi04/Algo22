#include <iostream>
using namespace std;

main(){
	int tinggi, bb;
	cout << "masukkan berapa tinggimu (pria) : "; cin >> tinggi;
	bb = (tinggi - 100) - (tinggi -100) * 10/100;
	cout << "berat badan ideal dengan tinggi " << tinggi << " cm adalah " << bb <<" kg";
}
