#include <iostream>
using namespace std;

struct Kendaraan{
	string JenisKendaraan;
	int TahunProduksi;
	float Harga;
};

int main(){
	
	Kendaraan data1, data2;
	
	data1.JenisKendaraan = "Sedan";
	data2.JenisKendaraan = "Minibus";
	
	data1.TahunProduksi = 2007;
	data1.Harga = 97.500000;
	
	data2.TahunProduksi = 2012;
	data2.Harga = 120.500000;
	
	cout << "Data 1 : " << endl;
	cout << "Jenis Kendaraan : " << data1.JenisKendaraan << endl;
	cout << "Tahun Produksi  : " << data1.TahunProduksi << endl;
	cout << "Harga Kendaraan : " << data1.Harga << endl;
	
	cout << "Data 2 : " << endl;
	cout << "Jenis Kendaraan : " << data2.JenisKendaraan << endl;
	cout << "Tahun Produksi  : " << data2.TahunProduksi << endl;
	cout << "Harga Kendaraan : " << data2.Harga << endl;
}
