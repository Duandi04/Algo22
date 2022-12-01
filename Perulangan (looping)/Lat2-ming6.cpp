#include <iostream>
using namespace std;
#define garis "===================="

int main(){
	int pil; float a, b, c;
	char next;
	
	 do {
	 	cout << "Kalkulator \n";
	 	cout << garis << endl << endl;
	 	cout << "1. Penjumlahan \n"; cout << "2. Pengurangan \n"; 
	 	cout << garis << endl;
	 	cout << "Masukkan pilihan anda : "; cin >> pil;
	 	
	 	cout << garis << endl;
	 	switch (pil){
	 		case 1 : {
	 			cout << "masukkan bil 1 : "; cin >> a;
	 			cout << "masukkan bil 2 : "; cin >> b;
	 			c = a + b;
	 			cout << "hasil dari " << a << " + " << b << " = " << c << endl;
				break;
			 }
			 case 2 : {
			 	cout << "masukkan bil 1 : "; cin >> a;
			 	cout << "masukkan bil 2 : "; cin >> b;
			 	c = a - b;
			 	cout << "hasil dari " << a << " - " << b << " = " << c << endl;
				break;
			 }
			 default : "pilihan anda salah \n";
		 }
	 cout << endl << garis << endl;
	 cout << "Pilihan lain (y/t) : "; cin >> next;
	 cout << garis << endl << endl;
	}		
	 
	 while ( next == 'y');
	 cout << "terima kasih telah menggunakan kalkulator saya \n" << endl;
	 
	 return 0;
}
