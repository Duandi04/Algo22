#include <iostream>
using namespace std;

void penjumlahan (){
	int x, y;
	cout << "nilai 1 : "; cin >> x;
	cout << "nilai 2 : "; cin >> y;
	cout << "hasil penjumlahan : " << x << " + " << y << " = " << x+y << endl;
}

void perkalian (int a, int b){
	cout << "hasil Perkalian : " << a << " * " << b << " = " << a*b << endl; 
}

int main (){
		
	penjumlahan();
	perkalian(2,3);
}
