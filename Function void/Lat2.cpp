#include <iostream>
using namespace std;

void garis(){
	cout << "====================================== \n\n";
}
void kubus(float lebar, float panjang, float tinggi){
	double volume = lebar * panjang * tinggi;
	garis();
	cout << "Volume kubus dengan lebar " << lebar << " cm, panjang " << panjang << " cm, dan tinggi " << tinggi << " cm adalah " << volume << "cm "<< endl;
}

int main(){
	float lebar, panjang, tinggi;
	cout << "Masukkan lebar (cm) : "; cin >> lebar;
	cout << "Masukkan panjang (cm) : "; cin >> panjang;
	cout << "Masukkan tinggi (cm) : "; cin >> tinggi;
	
	kubus(lebar, panjang, tinggi);
}
