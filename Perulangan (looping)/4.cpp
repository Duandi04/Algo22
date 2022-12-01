
#include <iostream>
using namespace std;
 int main (){
	int umur[200000000], total, rata, jmldata;
 	cout << "masukkan jumlah data : "; cin >> jmldata;
 	
	for (int a=0; a < jmldata ; a++){
		
 		cout << a + 1 << ". Masukkan umur : "; cin >> umur[a];
 		total = total + umur[a];
	}
	cout << endl;
	cout << "Total umur : " << total << endl;
	rata = total/jmldata;
	cout << "rata-rata umur : "<< rata << endl;

 }