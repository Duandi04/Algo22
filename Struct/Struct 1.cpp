#include <iostream>
using namespace std;

struct barang {
	string nbrg;
	double harga;
	int jml;
	char jenis;
	double total;
};

int main(){
	barang b[10];
	b[2].jml = 10;
	
	cout << b[2].jml;
}
