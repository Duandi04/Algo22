#include <iostream>
using namespace std;

int main(){
	int n, h, t; cout << "kamar : "; cin >> n;
	string k;
	switch (n){
		case 1 : k = "VVIP"; h = 100000;
		break;
	}
	cout << "Kamar anda : " << k << endl;
	t = 3 * h;
	cout<< "harga kamar anda : " <<t<< endl;
}
