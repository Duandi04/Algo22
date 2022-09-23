#include <iostream>
using namespace std;
#define garis "---------------------------------"

int main(){
	int pil, A, B, C;  float a, b, c; string nama;
	cout << "Selamat Datang Di Kalkulator Canggih \n";
	cout << garis << "\n \n";
	cout << "Masukkan nama anda : "; cin >> nama; 
	cout << "1. Penjumlahan \n";
	cout << "2. Pengurangan \n";
	cout << "3. Perkalian \n";
	cout << "4. Pembagian \n";
	cout << "5. Modulus \n \n";
	cout << garis << endl;
	cout << "Baiklah " << nama << " masukkan pilihan anda (1 - 5) : "; cin >> pil;
	
	switch (pil){
		case 1 : {
			cout << "Penjumlahan : \n";
			cout << "Masukkan bil 1 : "; cin >> a;
			cout << "Masukkan bil 2 : "; cin >> b;
			c = a + b;
			cout << "Hasil dari " << a << " + " << b << " = " << c << endl;
			cout << "Itulah dia hasil penjumlahannya, semoga " << nama << " terbantu \n";
			break;
		}
		case 2 : {
			cout << "Pengurangan : \n";
			cout << "Masukkan bil 1 : "; cin >> a;
			cout << "Masukkan bil 2 : "; cin >> b;
			c = a - b;
			cout << "Hasil dari " << a << " - " << b << " = " << c << endl;
			cout << "Itulah dia hasil pengurangannya, semoga " << nama << " terbantu \n";
			break;
		}
		case 3 : {
			cout << "Perkalian : \n";
			cout << "Masukkan bil 1 : "; cin >> a;
			cout << "Masukkan bil 2 : "; cin >> b;
			c = a * b;
			cout << "Hasil dari " << a << " x " << b << " = " << c << endl;
			cout << "Itulah dia hasil perkaliannya, semoga " << nama << " terbantu \n";
			break;
		}
		case 4 : {
			cout << "Pembagian : \n";
			cout << "Masukkan bil 1 : "; cin >> a;
			cout << "Masukkan bil 2 : "; cin >> b;
			c = a / b;
			cout << "Hasil dari " << a << " : " << b << " = " << c << endl;
			cout << "Itulah dia hasil pembagiannya, semoga " << nama << " terbantu \n";
			break;
		}
		case 5 : {
			cout << "Modulus : \n"; //Modulus tidak bisa memakai float
			cout << "Masukkan bil 1 : "; cin >> A;
			cout << "Masukkan bil 2 : "; cin >> B;
			C = A % B;
			cout << "Hasil dari " << A << " mod " << B << " = " << C << endl;
			cout << "Itulah dia hasil perhitungan modulusnya, semoga " << nama << " terbantu \n";
			break;
		}
	}
	
}
