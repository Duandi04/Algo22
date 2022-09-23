#include <iostream>
using namespace std;

int main (){
	int a; //type data untuk case hanya int dan char
	cout << "nilai a = "; cin >> a;
	switch (a){
		case 1 ... 5 : {cout <<"1 - 5"; break;} //tanpa break akan terus lanjut sampai bawah
		case 6 ... 10  : {cout << "6 - 10"; break;} // untuk membuat rentang nilai bisa pakai ... di antara angkanya
		default : {cout << "gak masuk akal ";}
	}
}
