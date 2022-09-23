#include <iostream>
using namespace std; 

main(){
	float bb, tinggi, umur, Kalori;
	cout << "Mencari kebutuhan kalori anda (laki-laki)"<<endl;
	cout << "masukkan berat badanmu (kg) : "; cin >> bb;
	cout << "Masukkan tinggimu (cm) : "; cin >> tinggi;
	cout << "Berapa umurmu : "; cin >> umur;
	Kalori = 66.5 + (13.75*bb) + (5.003*tinggi) - (6.75*umur);
	cout << "Kalori yang kamu butuhkan adalah : " << Kalori << " kkal";
}
