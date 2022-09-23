#include <iostream>
using namespace std;

int main(){
	char A;
	cout << "Masukkan huruf a - b : "; cin >> A;
	switch (A){
		case 'a' : cout << "huruf a"; break;
		case 'b' : cout << "huruf b"; break;
		default : cout << "Bukan a atau b";
	}
}
