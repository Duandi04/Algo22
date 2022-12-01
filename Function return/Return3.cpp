#include<iostream>
using namespace std;

double bons(int belanja){
	double bonus;
	if(belanja > 40000 && belanja <= 200000){
		bonus = 5000;
	} else if(belanja > 200000){
		bonus = 20000;
	} else {
		bonus = 0;
	};
	return bonus;
}

int main(){
	int belanja;
	cout << "Total harga belanjaan : "; cin >> belanja;
	cout << "Setelah dipotong bonus : " << belanja - bons(belanja); 
}
