#include <iostream>
using namespace std;

float balok(float p, float l, float t){
	return p*l*t;
}

int main(){
	float p,l,t;
	cout << "Masukkan nilai panjang : "; cin >> p;
	cout << "Masukkan nilai lebar : "; cin >> l;
	cout << "masukkan nilai tinggi :"; cin >> t;
	cout << "Volume = " << balok(p,l,t) << endl;	
}
