#include <iostream>
using namespace std;

float bbi(char pil, int tinggi){
	float bbi;
	
	if (pil == 'P' || pil == 'p'){
		bbi = ((tinggi - 100) - ((tinggi - 100)*0.15));
	} else if (pil == 'L' || pil == 'l'){
		bbi = ((tinggi - 100)-((tinggi - 100)*0.1));
	} else {
		bbi = 0;
	}
	return bbi;
}

int main(){
	int tinggi; char pil;
	cout << "Masukkan gender anda (P/L) : "; cin >> pil;
	cout << "Masukkan tinggi badan (cm) : "; cin >> tinggi;
	
	cout << "BBI anda : " << bbi(pil, tinggi);
}
