#include <iostream>
using namespace std;
#define garis "-----------------------------"

int main(){
	int jumlah, pes, pil;
	cout << "Warung Goreng \n";
	cout << garis << endl << endl;
	cout << " 1. nasi goreng Rp 15.000 \n 2. mie goreng Rp 15.000 \n 3. kwetiau goreng Rp 20.000 \n";
	cout << garis << endl;
	
	cout << "masukkan pilihan anda : "; cin >> pil ;
	cout << "jumlah pesanan : "; cin >> pes;
	cout << garis << endl;
	
	switch (pil) {
		case 1 : 
			jumlah = 15000*pes;
			cout << "Menu anda : nasi goreng" <<endl;
			cout << "harga : 15000" << endl;
			cout << "jumlah pesanan : " << pes << endl;
			cout << "total bayar : " << jumlah << endl;
			break;
		
		case 2 : 
			cout << "Menu anda : mie goreng " <<endl;
			cout << "harga : 15000 " << endl;
			cout << "jumlah pesanan : " << pes << endl;
			jumlah = 15000 * pes;
			cout << "total bayar : " << jumlah << endl;
			break;
		
		case 3 : 
			jumlah = 20000 * pes;
			cout << "Menu anda : kwetiau goreng " <<endl;k
			cout << "harga : 20000" << endl;
			cout << "jumlah pesanan : " << pes << endl;
			cout << "total bayar : " << jumlah << endl;
			break;
		
		default : cout << "input gak jelas \n";
	}
}
