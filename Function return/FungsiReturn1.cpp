#include<iostream>
using namespace std;

int tambah(int bil1, int bil2){
	int c;
	c = bil1 + bil2;
	return c;
	
	//return bil1 + bil2; bisa cara ini
}

void garis(){
	cout << "--------------------------" << endl;
}

int main(){
	int a, b;
	cout << "A : "; cin >> a;
	cout << "B : "; cin >> b;
	cout << a << " + " << b << " = " << tambah(a,b) << endl; 
	
	garis(); //void tanpa harus cout 
	tambah(a,b); //perlu dengan cout
	cout << "tambah 10 : "<< tambah(a,b) + 10 << endl;
}
